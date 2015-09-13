//
//  main.cpp
//  code9-guanxiyunsuan
//
//  Created by leiquan on 15/9/13.
//  Copyright (c) 2015年 leiquan.me. All rights reserved.
//

//
//  guanxi.cpp
//
//
//  Created by leiquan on 15/9/13.
//
//

#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int b = 10;
    
    if( a == b )
    {
        cout << "Line 1 - a 等于 b" << endl ;
    }
    else
    {
        cout << "Line 1 - a 不等于 b" << endl ;
    }
    if ( a < b )
    {
        cout << "Line 2 - a 小于 b" << endl ;
    }
    else
    {
        cout << "Line 2 - a 不小于 b" << endl ;
    }
    if ( a > b )
    {
        cout << "Line 3 - a 大于 b" << endl ;
    }
    else
    {
        cout << "Line 3 - a 不大于 b" << endl ;
    }
    /* 改变 a 和 b 的值 */
    a = 5;
    b = 20;
    if ( a <= b )
    {
        cout << "Line 4 - a 小于或等于 b" << endl ;
    }
    if ( b >= a )
    {
        cout << "Line 5 - b 大于或等于 b" << endl ;
    }
    return 0;
}

