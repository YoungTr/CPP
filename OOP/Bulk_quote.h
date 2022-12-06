//
// Created by YoungTr on 2022/12/6.
//

#ifndef CPP_BULK_QUOTE_H
#define CPP_BULK_QUOTE_H

#include "Quote.h"

class Bulk_quote : public Quote {   // Bulk_quote 继承了 Quote
public:
    double net_price(std::size_t n) const override;
};

#endif //CPP_BULK_QUOTE_H
