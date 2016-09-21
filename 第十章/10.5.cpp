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
#include <numeric>
using namespace std;

int main()
{
    char str1[] = "abc";
    char str2[] = "aa";
    bool s;
    vector<char> vec,vec2;
    vec.push_back(*str1);
    vec2.push_back(*str2);
    s = equal(vec.cbegin(), vec.cend(), vec2.cbegin());
    if (s) {
        cout <<1<<endl;//如果是C风格字符串无论比较的是什么都会返回true
    } else {
        cout <<0<<endl;
    }
}
