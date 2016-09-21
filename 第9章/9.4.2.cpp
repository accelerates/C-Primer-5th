//
//  main.cpp
//  liqi
//
//  Created by liqi on 16/8/13.
//  Copyright © 2016年 liqi. All rights reserved.
//
#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;
int main()
{
    vector<string> chart;
    
    chart.reserve(100);
    
    for (int beg = 0; beg !=100; ++beg) {
        chart.push_back(to_string(beg));
    }
    
    for (auto beg = chart.cbegin(); beg != chart.cend(); ++beg) {
        cout <<*beg<<endl;
    }
    
    return 0;
}