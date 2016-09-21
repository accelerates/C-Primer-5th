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
int main()
{
    string letter("0123456789");
    string name("r2d2");
    
    auto a = letter.find(name);
    
    cout <<a<<endl;
    

    return 0;
    
    

}
