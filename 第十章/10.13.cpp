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
bool isShort(const string& str1,const string& str2)
{
    return str1.size()>str2.size();
}

int main()
{
    vector<string> vec{"a","ab","abc","abcd","b"};
    stable_sort(vec.begin(), vec.end(), isShort);
    outPut(vec);
    size_t size = 3;
    auto isEnough = [size](const string& str){
        return str.size()>=size;
    };
    auto end = partition(vec.begin(), vec.end(), isEnough);
    outPut(vec,vec.cbegin(),end);
    
    
    return 0;
}
