//
// Created by YoungTr on 2022/12/4.
//

#ifndef CPP_UTIL_H
#define CPP_UTIL_H

#include <string>
#include <iostream>

namespace mycpp {

    using std::cout;
    using std::cin;
    using std::string;

    long get_a_target_long();

    string get_a_target_string();

    int compareLongs(const void *a, const void *b);

    int compareStrings(const void *a, const void *b);
}

#endif //CPP_UTIL_H
