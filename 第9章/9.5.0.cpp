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
using namespace std;
int sum_for_int(const vector<string> &v)
{
    int num = 0;
    
    for (auto beg = v.cbegin(); beg != v.cend(); ++beg) {
    
        num += stoi(*beg);
    
    }
    
    return num;
}

double sum_for_double(const vector<string> &v)
{
    double num = 0;
    
    for (auto beg = v.cbegin(); beg != v.cend(); ++beg) {
        
        num += stod(*beg);
        
    }
    
    return num;
}
int main()
{
    vector<string> vs{"1","2","3"};
   
    vector<string> vs_d{"2.14","3.14","4.14"};
   
    cout <<sum_for_int(vs)<<endl;
    
    cout <<sum_for_double(vs_d)<<endl;
    
    return 0;
}
