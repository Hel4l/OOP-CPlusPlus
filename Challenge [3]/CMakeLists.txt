cmake_minimum_required(VERSION 3.25)
project(Challenge__3_)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Challenge__3_
        Account.cpp
        Account.h
        Account_Util.cpp
        Account_Util.h
        main.cpp
        Savings_Account.cpp
        Savings_Account.h Checking_Account.cpp Checking_Account.h Trust_Account.cpp Trust_Account.h)
