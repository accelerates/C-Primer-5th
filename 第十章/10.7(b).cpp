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
    vec.reserve(10);
    fill_n(back_inserter(vec), 10, 0);
    for(auto elm : vec)
        cout <<elm<<endl;
    return 0;
}
