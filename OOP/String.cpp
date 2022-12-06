//
// Created by YoungTr on 2022/12/6.
//

#include <cstring>
#include "String.h"

inline
String::String(const char *cstr) {
    if (cstr) {
        m_data = new char[strlen(cstr) + 1];
        strcpy(m_data, cstr);
    } else {
        m_data = new char[1];
        *m_data = '\0';
    }
}

String::String(const String &str) {
    m_data = new char[strlen(str.m_data) + 1];
    strcpy(m_data, str.m_data);
}

String &String::operator=(const String &str) {
    if (this == &str) {
        return *this;
    }

    // 先删除原先的数据
    delete[] m_data;
    // 重新申请内存
    m_data = new char[strlen(str.m_data) + 1];
    // 拷贝
    strcpy(m_data, str.m_data);
    return *this;
}


String::~String() {
    delete[] m_data;
}