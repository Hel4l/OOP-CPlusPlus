//
// Created by h4zem on 5/1/2023.
//

#include "MyString.h"
#include <iostream>
#include <cstring>

std::ostream &operator<<(std::ostream &os,const MyString &rhs) {
    os<<rhs.str;
    return os;
}
std::istream &operator>>(std::istream &is, MyString &rhs){
    char* buff = new char[1000];
    is>>buff;
    strcpy(rhs.str, buff);
    /*or -> rhs = MyString{buff};*/
    delete [] buff;
    return is;
}
MyString::MyString():str{nullptr} {
    str = new char[1];
}

MyString::MyString(char *rhs): str{nullptr} {
    if(rhs == nullptr){
        str = new char[1];
    }
    else
    {
        str = new char[strlen(rhs) + 1];
        strcpy(str, rhs);
    }
}

MyString::MyString(const MyString &rhs): str{nullptr} {
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
}

MyString::MyString(MyString &&rhs):str{rhs.str} {
    rhs.str = nullptr;
}

MyString MyString::operator=(const MyString &rhs) {
    if(this == &rhs)
        return *this;
    delete[]str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

MyString MyString::operator=(MyString &&rhs) {
    if (this == &rhs)
        return *this;
    delete[]str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

void MyString::print_str() const {
    std::cout << str << std::endl;
}

MyString MyString::operator-() {
    for (int i = 0; i < strlen(str); ++i) {
        str[i] = tolower(str[i]);
    }
    return *this;
}

bool MyString::operator==(const MyString &rhs) {
    if (strcmp(str, rhs.str) == 0)
        return true;
    return false;
}

MyString MyString::operator+(const MyString &rhs) {
    char *add = new char[strlen(str) + strlen(rhs.str) + 1];
    strcpy(add, str);
    strcat(add, rhs.str);
    MyString re{add};
    delete[]add;
    return re;
}

bool MyString::operator!=(const MyString &rhs) {
    if (strcmp(str, rhs.str) != 0)
        return true;
    return false;
}

bool MyString::operator>(const MyString &rhs) {
    if (this->get_strlen() > rhs.get_strlen())
        return true;
    return false;
}

bool MyString::operator<(const MyString &rhs) {
    if (this->get_strlen() < rhs.get_strlen())
        return true;
    return false;
}

MyString MyString::operator+=(const MyString &rhs) {
    *this = *this + rhs;
    return *this;
}


MyString MyString::operator*(int n) {
    char *temp = new char[(n * strlen(str)) + 1];
    strcpy(temp, str);
    for (int i = 0; i < n - 1; ++i) {
        strcat(temp, str);
    }
    MyString re{temp};
    delete[]temp;
    return re;
}

MyString MyString::operator*=(int n) {
    *this = *this * n;
    return *this;
}

MyString &MyString::operator++() {
    for (int i = 0; i < strlen(str); ++i) {
        str[i] = toupper(str[i]);
    }
    return *this;
}

MyString MyString::operator++(int) {
    MyString cpy = (*this);
    ++(*this);
    return cpy;
}


int MyString::get_strlen() const {
    return strlen(str);
}

char *MyString::get_str() const {
    return str;
}

MyString::~MyString() {
    delete[] str;
}