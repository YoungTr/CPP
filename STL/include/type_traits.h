//
// Created by YoungTr on 2022/12/3.
//

#ifndef CPP_TYPE_TRAITS_H
#define CPP_TYPE_TRAITS_H

namespace mystl {

    // helper struct
    template<class T, T v>
    struct m_integer_constant {
        static constexpr T value = v;
    };

    template<bool b>
    using m_bool_constant = m_integer_constant<bool, b>;

    typedef m_bool_constant<true> m_ture_type;
    typedef m_bool_constant<false> m_false_type;

    template<class T1, class T2>
    struct pair;

    template<class T>
    struct is_pair : mystl::m_false_type {
    };

    template<class T1, class T2>
    struct is_pair<mystl::pair<T1, T2>> : mystl::m_ture_type {
    };
}

#endif //CPP_TYPE_TRAITS_H
