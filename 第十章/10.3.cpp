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
    vector<int> p{1,2,3,4,5,2};
    auto num = accumulate(p.cbegin(), p.cend(), 0);
    cout <<num<<endl;
}
