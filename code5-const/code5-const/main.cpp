//
//  main.cpp
//  code5-const
//
//  Created by leiquan on 15/9/13.
//  Copyright (c) 2015年 leiquan.me. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    const int  LENGTH = 10;
    const int  WIDTH  = 5;
    const char NEWLINE = '\n';
    int area;
    
    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}
