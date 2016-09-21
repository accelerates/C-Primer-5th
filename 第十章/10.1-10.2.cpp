//
//  main.cpp
//  liqi
//
//  Created by liqi on 16/8/13.
//  Copyright © 2016年 liqi. All rights reserved.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> p{1,2,3,4,5,2};
    auto num = count(p.cbegin(), p.cend(), 1);
    cout <<num<<endl;
    
    vector<string> str{"a","b","c","a"};
    num = count(str.cbegin(), str.cend(), "a");
    cout <<num<<endl;
    return 0;
}
