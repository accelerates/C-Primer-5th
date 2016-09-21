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
const vector<int>::const_iterator &exist(vector<int>::const_iterator &beg,vector<int>::const_iterator &end,const int &val)
{
    while (beg != end) {
        if(*beg == val) return beg;
        ++beg;
    }
    return  end;
}
int main()
{
    vector<int> vint{1,2,3,4,5};
    int val = 1;
    auto beg =vint.cbegin();
    auto end = vint.cend();
    const vector<int>::const_iterator it = exist(beg, end, val);
    if(it != end) cout <<1<<endl;
    
    
    return 0;
}