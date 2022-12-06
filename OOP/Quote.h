//
// Created by YoungTr on 2022/12/6.
//

#ifndef CPP_QUOTE_H
#define CPP_QUOTE_H

#include <string>

class Quote {
public:
    std::string isbn() const;

    virtual double net_price(std::size_t n) const;  // 虚函数
};

#endif //CPP_QUOTE_H
