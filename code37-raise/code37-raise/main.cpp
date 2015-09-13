//
//  main.cpp
//  code37-raise
//
//  Created by leiquan on 15/9/14.
//  Copyright (c) 2015年 leiquan.me. All rights reserved.
//

#include <iostream>
#include <csignal>

using namespace std;

void signalHandler( int signum )
{
    cout << "Interrupt signal (" << signum << ") received.\n";
    
    // 清理并关闭
    // 终止程序
    
    exit(signum);
    
}

int main ()
{
    int i = 0;
    // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);
    
    while(++i){
        cout << "Going to sleep...." << endl;
        if( i == 3 ){
            raise( SIGINT);
        }
        sleep(1);
    }
    
    return 0;
}

