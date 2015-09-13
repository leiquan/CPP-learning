//
//  main.cpp
//  code31-trycatch
//
//  Created by leiquan on 15/9/14.
//  Copyright (c) 2015年 leiquan.me. All rights reserved.
//

#include <iostream>
using namespace std;

double division(int a, int b)
{
    if( b == 0 )
    {
        throw "Division by zero condition!";
    }
    return (a/b);
}

int main ()
{
    int x = 50;
    int y = 0;
    double z = 0;
    
    try {
        z = division(x, y);
        cout << z << endl;
    }catch (const char* msg) {
        cerr << msg << endl;
    }
    
    return 0;
}