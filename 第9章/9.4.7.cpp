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
#include <cctype>
#include <cstdio>
#include <cstdlib>
using namespace std;
vector<int> findNumViaFirst(const string& v)
{
    vector<int> num;
    for(auto beg = v.cbegin();beg != v.cend();++beg)
    {
        if (isdigit(*beg)) {
            num.push_back(atoi(&*beg));
        }
    }
    return num;
}
vector<char> findChar(const string& v)
{
    vector<char> num;
    for (auto beg = v.cbegin(); beg != v.cend(); ++beg) {
        if (isalpha(*beg)) {
            num.push_back(*beg);
        }
    }
    return num;
}

void output(const vector<int>& v)
{
    for(auto beg = v.cbegin();beg != v.cend();++beg)
    {
        cout <<*beg<<endl;
    }
}
void output(const vector<char>& v)
{
    for(auto beg = v.cbegin();beg != v.cend();++beg)
    {
        cout <<*beg<<endl;
    }
}
int main()
{
    string letter("ab2c3d7R4E6F");
    vector<int> num;
    vector<char> chart;
    num = findNumViaFirst(letter);
    output(num);
    
    chart = findChar(letter);
    
    output(chart);
    
    
    
    
    
    return 0;
}
