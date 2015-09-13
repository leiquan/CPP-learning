//
//  main.cpp
//  code24-functionchongzai
//
//  Created by leiquan on 15/9/14.
//  Copyright (c) 2015年 leiquan.me. All rights reserved.
//

#include <iostream>
using namespace std;

class printData
{
public:
    void print(int i) {
        cout << "Printing int: " << i << endl;
    }
    
    void print(double  f) {
        cout << "Printing float: " << f << endl;
    }
    
    void print(char* c) {
        cout << "Printing character: " << c << endl;
    }
};

int main(void)
{
    printData pd;
    
    // Call print to print integer
    pd.print(5);
    // Call print to print float
    pd.print(500.263);
    // Call print to print character
    pd.print("Hello C++");
    
    return 0;
}