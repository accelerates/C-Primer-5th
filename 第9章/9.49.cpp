//
//  main.cpp
//  liqi
//
//  Created by liqi on 16/8/13.
//  Copyright © 2016年 liqi. All rights reserved.
//
#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>
using namespace std;
int main()
{
    string file = "/Users/liqi/Documents/git/liqi/liqi/a.txt";//绝对路径
    fstream ifs;
    string chart;
    unsigned maxLength=0;
    ifs.open(file,fstream::in);
    if (ifs.is_open()) {
        cout <<"成功";
    }
    
    while (ifs >> chart) {
        auto pos = chart.find_first_not_of("aceimnorsuvwxz");
        if(pos == string::npos)
        {
            unsigned max = static_cast<unsigned>( chart.size());
            maxLength = maxLength>max?maxLength:max;
        }
    }
    
    cout <<maxLength<<endl;
    
    ifs.close();
    
    return 0;
}