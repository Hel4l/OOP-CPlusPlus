//
// Created by h4zem on 5/1/2023.
//

#ifndef CHALLENGE__2__MYSTRING_H
#define CHALLENGE__2__MYSTRING_H

#include <iostream>

class MyString {
    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);

    friend std::istream &operator>>(std::istream &is, MyString &rhs);

    char *str;
public:
    MyString();

    MyString(char *rhs);

    MyString(const MyString &rhs);

    MyString(MyString &&rhs);

    ~MyString();

    MyString operator=(const MyString &rhs);

    MyString operator=(MyString &&rhs);

    MyString operator-();

    MyString operator+(const MyString &rhs);

    bool operator==(const MyString &rhs);

    bool operator!=(const MyString &rhs);

    bool operator>(const MyString &rhs);

    bool operator<(const MyString &rhs);

    MyString operator+=(const MyString &rhs);

    MyString operator*=(int n);

    MyString operator*(int n);

    MyString &operator++();//prefix

    MyString operator++(int);//postfix

    void set_str(char *rhs);

    int get_strlen() const;

    void print_str() const;

    char *get_str() const;
};


#endif //CHALLENGE__2__MYSTRING_H
