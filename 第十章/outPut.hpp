//
//  outPut.hpp
//  liqi
//
//  Created by liqi on 16/9/20.
//  Copyright © 2016年 liqi. All rights reserved.
//

#ifndef outPut_hpp
#define outPut_hpp

#include <stdio.h>
using namespace std;

void outPut(vector<string>& vec)
{
    for(auto str : vec)
    {
        cout <<str<<endl;
    }
}
void outPut(vector<string>& vec,vector<string>::const_iterator beg,  vector<string>::const_iterator end )
{
    
    for (;beg != end ; ++beg) {
        cout <<*beg<<endl;
    }
    cout <<endl;
}


#endif /* outPut_hpp */
