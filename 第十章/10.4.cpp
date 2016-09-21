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
    vector<float> p{1.11,2.1,3.1,4.1,5.1,2.1};
    //auto num = accumulate(p.cbegin(), p.cend(), 0);
    auto num = accumulate(p.cbegin(), p.cend(), 0.0);
    cout <<num<<endl;
}
