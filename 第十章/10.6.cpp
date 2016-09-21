//
//  main.cpp
//  liqi
//
//  Created by liqi on 16/8/13.
//  Copyright © 2016年 liqi. All rights reserved.
//
#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector<int> vec;
fill_n(back_inserter(vec), 10, 0);
auto insert_beg = vec.cbegin();
while (insert_beg != vec.cend()) {
cout <<*insert_beg<<endl;
++insert_beg;
}
return 0;
}
