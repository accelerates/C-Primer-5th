//
//  main.cpp
//  liqi
//
//  Created by liqi on 16/8/13.
//  Copyright © 2016年 liqi. All rights reserved.
//
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    
    string expression("my name is (liqi) (and what is (your (name)?))");
    
    int times = 0;
    
    char reply('*');
    
    stack<char> liqi;
    
    
    for (auto beg = expression.cbegin(); beg != expression.cend() ; ++beg) {
        
        liqi.push(*beg);
        
        if(*beg == '(') ++times;
        
        if (*beg == ')'&& times ) {
            
            while (!liqi.empty()) {
                
                char i = liqi.top();
                
                liqi.pop();
                
                if (i == '(') {
                    
                    --times;
                    
                    liqi.push(reply);
                    
                    break;
                }
            }
        }
    }
    
    string out;
    while (!liqi.empty()) {
        out.insert(out.begin(), liqi.top());
        liqi.pop();
    }
    
    cout <<out<<endl;
    
    
    return 0;
}
