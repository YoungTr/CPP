#include <iostream>

unsigned int MAX_LEN = 12;
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    char strHelloWorld[] = {"hello world"};
    char const *pStr1 = "hello world";
    char *const pStr2 = strHelloWorld;
    char const *const pStr3 = "hello world";

    pStr1 = strHelloWorld;
//    pStr2 = strHelloWorld;   // pStr2 不可改
//    pStr3 = strHelloWorld;   // pStr3 不可改

    unsigned int len = strnlen(pStr2, MAX_LEN);

    cout << len << endl;

    for (int i = 0; i < len; ++i) {
//        pStr1[i] += 1;    // pStr1 里的值不可改
        pStr2[i] += 1;
//        pStr3[i] +=1;     // pStr3 里的值不可改
    }

    int a = 123;
    int *b = &a;
    int **c = &b;

    return 0;
}
