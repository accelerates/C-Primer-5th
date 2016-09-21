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
using namespace std;
int main()
{
    vector<char> chart;
    string letter;
    chart.push_back('H');
    chart.push_back('e');
    chart.push_back('l');
    chart.push_back('l');
    chart.push_back('o');
    
    for(const auto little: chart ¡)
    {
        letter += little;
    }
    
    cout <<letter<<endl;
    
    return 0;
}