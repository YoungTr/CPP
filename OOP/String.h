//
// Created by YoungTr on 2022/12/6.
//

#ifndef CPP_STRING_H
#define CPP_STRING_H

class String {
public:
    explicit String(const char *cstr = nullptr);

    String(const String &str);               // 拷贝构造
    String &operator=(const String &str);    // 拷贝赋值
    ~String();                               // 析构函数
    char *get_c_str() const { return m_data; }

private:
    char *m_data;
};

#endif //CPP_STRING_H
