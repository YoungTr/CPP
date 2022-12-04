//
// Created by YoungTr on 2022/12/4.
//

#include "util.h"

namespace mycpp {

    long get_a_target_long() {
        long target = 0;
        cout << "target (0~" << RAND_MAX << "): ";
        cin >> target;
        return target;
    }


    string get_a_target_string() {
        long target = 0;
        char buf[10];

        cout << "target (0~" << RAND_MAX << "): ";
        cin >> target;
        snprintf(buf, 10, "%ld", target);
        return {buf};
    }

    int compareLongs(const void *a, const void *b) {
        return (*(long *) a - *(long *) b);
    }

    int compareStrings(const void *a, const void *b) {
        if (*(string *) a > *(string *) b)
            return 1;
        else if (*(string *) a < *(string *) b)
            return -1;
        else
            return 0;
    }
}
