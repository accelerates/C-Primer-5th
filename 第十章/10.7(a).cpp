//
//  main.cpp
//  liqi
//
//  Created by liqi on 16/8/13.
//  Copyright © 2016年 liqi. All rights reserved.
//
#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

int main()
{
    vector<int> vec;
    list<int> lst;
    int str;
    while (cin >> str) {
        lst.push_back(str);
    }
    copy(lst.cbegin(), lst.cend(), back_inserter(vec));//算法不检查写操作，想要插入元素需要用插入迭代器
    for(auto beg : vec)
        cout <<beg<<endl;
    return 0;
}
