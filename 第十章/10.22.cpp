//
//  main.cpp
//  liqi
//
//  Created by liqi on 16/8/13.
//  Copyright © 2016年 liqi. All rights reserved.
//
#include <iostream>
#include <vector>
#include <string>
#include "outPut.hpp"
using namespace std;
using namespace std::placeholders;
bool longer(string v,size_t len)
{
    return v.size()>len;
}
int main()
{
    vector<string> vec{"asc","assss","a","asd"};
    auto isLonger = bind(longer,_1,3);
    auto num = count_if(vec.cbegin(), vec.cend(), isLonger);
    cout <<num<<endl;
    
    
    return 0;
}
