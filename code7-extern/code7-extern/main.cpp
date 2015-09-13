//
//  main.cpp
//  code7-extern
//
//  Created by leiquan on 15/9/13.
//  Copyright (c) 2015年 leiquan.me. All rights reserved.
//

#include <iostream>

int count ;
extern void write_extern();

int main()
{
    count = 5;
    write_extern();
}