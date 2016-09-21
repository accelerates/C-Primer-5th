//
//  main.cpp
//  liqi
//
//  Created by liqi on 16/8/13.
//  Copyright © 2016年 liqi. All rights reserved.
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdio>
#include <list>
using namespace std;
int main()
{
    list<int> lis;
    string file = "/Users/liqi/Documents/git/liqi/liqi/num.txt";//绝对路径
    
    fstream ifs(file,fstream::in);
    
    int num;
    //检验文件是否成功打开
    if(!ifs.is_open())
    {
        cout <<"文件打开失败"<<endl;
        return 0;
    }
    
    while (ifs >> num) {
        lis.push_back(num);
    }
    for(auto beg = lis.cbegin();beg != lis.cend();++beg)
    {
        cout <<*beg;
    }
    cout <<endl;
    
    lis.sort();
    for(auto beg = lis.cbegin();beg != lis.cend();++beg)
    {
        cout <<*beg;
    }
    cout <<endl;
    
    lis.sort(greater<int>());
    for(auto beg = lis.cbegin();beg != lis.cend();++beg)
    {
        cout <<*beg;
    }
    cout <<endl;
    return 0;
}