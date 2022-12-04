//
// Created by YoungTr on 2022/12/3.
//

#ifndef CPP_ITERATOR_H
#define CPP_ITERATOR_H

#include <cstddef>
#include "type_traits.h"

namespace mystl {
    // 五种迭代器
    struct input_iterator_tag {};
    struct output_iterator_tag {};
    struct forward_iterator_tag : public input_iterator_tag {};
    struct bidirectional_iterator_tag : public forward_iterator_tag {};
    struct random_access_iterator_tag : public bidirectional_iterator_tag {};


    // iterator 模板
    template<class Category, class T, class Distance = ptrdiff_t,
            class Pointer = T *, class Reference = T &>
    struct iterator {
        typedef Category iterator_category;
        typedef T value_type;
        typedef Pointer pointer;
        typedef Reference reference;
        typedef Distance difference_type;
    };

    // iterator traits
    template<class T>
    struct has_iterator_cat {
    private:
        struct two {char a; char b;};
        template<class U> static two test(...);

        template<class U> static char test(typename U::iterator_category* = 0);

    public:
        static const bool value = sizeof(test<T>(0)) == sizeof(char);
    };

    template<class Iterator, bool>
    struct iterator_traits_impl {};

    template<class Iterator>
    struct iterator_traits_impl<Iterator, true> {
        typedef typename Iterator::iterator_category iterator_category;
        typedef typename Iterator::value_type value_type;
        typedef typename Iterator::pointer pointer;
        typedef typename Iterator::reference reference;
        typedef typename Iterator::difference_type difference_type;
    };

}

#endif //CPP_ITERATOR_H
