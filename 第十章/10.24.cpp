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
bool check_size(const string &str,string::size_type sz)
{
    return str.size() >= sz;
}
int main()
{
    string str("string");
    vector<int> vec{1,2,3,4,5,6,7,8};
    vector<int> res;
    
    auto check_len = bind(check_size, str,_1);
    
    for(auto num : vec)
    {
        if(check_len(num))
        {
            res.push_back(num);
        }
    }
    
    outPut(res);
    
    
    return 0;
}
