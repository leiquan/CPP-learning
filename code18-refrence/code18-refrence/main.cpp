//
//  main.cpp
//  code18-refrence
//
//  Created by leiquan on 15/9/14.
//  Copyright (c) 2015年 leiquan.me. All rights reserved.
//

#include <iostream>

using namespace std;

int main ()
{
    // 声明简单的变量
    int    i;
    double d;
    
    // 声明引用变量
    int&    r = i;
    double& s = d;
    
    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r  << endl;
    
    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s  << endl;
    
    return 0;
}