//
//  main.cpp
//  code31-newException
//
//  Created by leiquan on 15/9/14.
//  Copyright (c) 2015年 leiquan.me. All rights reserved.
//

#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception
{
    const char * what () const throw ()
    {
        return "C++ Exception";
    }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch(MyException& e)
    {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch(std::exception& e)
    {
        //其他的错误
    }
}