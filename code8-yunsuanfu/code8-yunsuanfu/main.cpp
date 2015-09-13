//
//  main.cpp
//  code8-yunsuanfu
//
//  Created by leiquan on 15/9/13.
//  Copyright (c) 2015年 leiquan.me. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int b = 10;
    int c ;
    
    c = a + b;
    cout << "Line 1 - c 的值是 " << c << endl ;
    c = a - b;
    cout << "Line 2 - c 的值是 " << c << endl ;
    c = a * b;
    cout << "Line 3 - c 的值是 " << c << endl ;
    c = a / b;
    cout << "Line 4 - c 的值是 " << c << endl ;
    c = a % b;
    cout << "Line 5 - c 的值是 " << c << endl ;
    c = a++;
    cout << "Line 6 - c 的值是 " << c << endl ;
    c = a--;
    cout << "Line 7 - c 的值是 " << c << endl ;
    
    
    return 0;
}
