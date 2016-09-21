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
#include <list>
#include <deque>
using namespace std;
bool exist(vector<int>::const_iterator beg,vector<int>::const_iterator end,int val)
{
    while (beg != end) {
        if(*beg == val) return true;
        ++beg;
    }
    return  false;
}
int main()
{
    vector<int> vint{1,2,3,4,5};
    
    if(exist(vint.cbegin(), vint.cend(), 1)) cout <<1<<endl;
    
    return 0;
}