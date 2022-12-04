//
// Created by YoungTr on 2022/12/4.
//

#include <vector>
#include "container.h"

namespace mycpp {

    using namespace std;

    // http://c.biancheng.net/view/6749.html
    void test_vector(long &value) {
        cout << "\ntest_vector()......... \n";
        vector<string> c;
        char buf[10];

        clock_t start = clock();
        for (int i = 0; i < value; ++i) {
            snprintf(buf, 10, "%d", rand());
            c.emplace_back(buf);
        }

        cout << "milli-seconds : " << (clock() - start) << endl;
        cout << "vector.max_size()= " << c.max_size() << endl;
        cout << "vector.size()= " << c.size() << endl;
        cout << "vector.front()= " << c.front() << endl; // 第一个元素
        cout << "vector.back()= " << c.back() << endl;   // 最后一个元素
        cout << "vector.data()= " << c.data() << endl;   // 返回指向容器中第一个元素的指针
        cout << "vector.capacity()= " << c.capacity() << endl << endl; // 返回当前容量

        string target = get_a_target_string();
        {
            start = clock();
            auto item = find(c.begin(), c.end(), target);
            cout << "std::find(), milli-seconds : " << (clock() - start) << endl;

            if (item != c.end())
                cout << "found, " << *item << endl << endl;
            else
                cout << "not found! " << endl << endl;
        }

        {
            start = clock();
            sort(c.begin(), c.end());
            cout << "sort(), milli-seconds : " << (clock() - start) << endl;

            string *item = (string *) ::bsearch(&target, c.data(), c.size(), sizeof(string), compareStrings);
            cout << "bsearch(), milli-seconds : " << (clock() - start) << endl;
            if (item != nullptr) {
                cout << "found, " << *item << endl << endl;
            } else {
                cout << "not found! " << endl << endl;
            }

        }

        c.clear();


    }
}
