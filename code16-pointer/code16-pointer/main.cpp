//
//  main.cpp
//  code16-pointer
//
//  Created by leiquan on 15/9/14.
//  Copyright (c) 2015年 leiquan.me. All rights reserved.
//

#include <iostream>

using namespace std;

int main ()
{
    int  var = 20;   // 实际变量的声明
    int  *ip;        // 指针变量的声明
    
    ip = &var;       // 在指针变量中存储 var 的地址
    
    cout << "Value of var variable: ";
    cout << var << endl;
    
    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << endl;
    
    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl;
    
    return 0;
}