//
// Created by YoungTr on 2022/12/10.
//

#ifndef CPP_TIMBER_H
#define CPP_TIMBER_H

#include <cstddef>
#include <functional>
#include <thread>
#include <mutex>
#include <shared_mutex>


struct Timber {
    size_t thread_num = 1;

public:
    enum TimberCallback : unsigned int {
        kStopTimer = 0x01,
        kMoreThan1MS = 0x02
    };

    using timer_callback_t = std::function<unsigned int(unsigned int)>;

    void Start();

    ~Timber() noexcept;

    void Stop();

    void Join();

    void StartTimer(uint64_t timeout, uint64_t repeat, const timer_callback_t &cb);

    enum class TimberStatus : unsigned int {
        kInitial = 0,
        kStarted,
        kStop,
        kJoin
    };

    struct TimerRequest {
        uint64_t timeout;
        uint64_t repeat;
        timer_callback_t cb;

    public:
        TimerRequest(uint64_t timeout_arg, uint64_t repeat_arg, const timer_callback_t &cb_arg) :
                timeout(timeout_arg), repeat(repeat_arg), cb(cb_arg) {}

        unsigned int Call(unsigned int status) noexcept {
            return cb(status);
        }
    };

    struct WorkThread {
        bool started = false;
        std::thread thread;

        std::mutex vec_mux;
        std::unique_ptr<std::vector<std::unique_ptr<TimerRequest>>> request_vec;

        std::shared_mutex handle_mux;

        // TODO
    };


};

#endif //CPP_TIMBER_H
