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
void outPut(vector<int>& vec)
{
    for(auto num : vec)
    {
        cout <<num<<endl;
    }
    cout <<endl;
}
void elimDups(vector<int>& vec)
{
    outPut(vec);
    sort(vec.begin(), vec.end());
    outPut(vec);
    auto end = unique(vec.begin(), vec.end());
    outPut(vec);
    vec.erase(end,vec.end());
    outPut(vec);
}

int main()
{
    vector<int> vec{1,2,3,4,5,1,2};
    elimDups(vec);
    return 0;
}
