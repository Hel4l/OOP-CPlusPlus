#include <iostream>
#include "MyString.h"

int main() {
    MyString str("Hazem");
    MyString h;
    MyString m{"zzom"};
    std::cin>>h;
    h.print_str();
    m.print_str();
    str.print_str();
    return 0;
}
