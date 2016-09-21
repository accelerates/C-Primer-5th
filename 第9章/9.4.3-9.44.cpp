//
//  main.cpp
//  liqi
//
//  Created by liqi on 16/8/13.
//  Copyright © 2016年 liqi. All rights reserved.
//
#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>
using namespace std;
class replaceStr
{
public:
    replaceStr(string &str,const string &odVlaue,const string &nwVlaue);
    void replacePos();
    void replaceIt();
    void replaceItCp();
    void replace();
    void output();
private:
    string s;
    string oldValue;
    string newValue;
    unsigned long oldlen,newlen;
};
replaceStr::replaceStr(string &str,const string &odVlaue,const string &nwVlaue)
:s(str),oldValue(odVlaue),newValue(nwVlaue)
{
    oldlen = oldValue.size();
    newlen = newValue.size();
}
void replaceStr::replacePos()
{
    unsigned long pos = 0;
    while ((pos = s.find(oldValue,pos)) != string::npos) {
        s.erase(pos,oldlen);
        s.insert(pos,newValue);
        pos = pos+newlen;
    }
    
}
void replaceStr::replaceIt()
{
    unsigned long pos = 0;
    while ((pos = s.find(oldValue,pos)) != string::npos) {
        s.erase(pos,oldlen);
        s.insert(pos,newValue);
        pos = pos+newlen;
    }
}
void replaceStr::replaceItCp()
{
    unsigned long pos = 0;
    while ((pos = s.find(oldValue,pos)) != string::npos) {
        s.erase(pos,oldlen);
        s.insert(s.cbegin()+pos,newValue.cbegin(),newValue.cend());
        pos = pos+newlen;
    }
}
void replaceStr::replace()
{
    unsigned long pos = 0;
    while ((pos = s.find(oldValue,pos)) != string::npos) {
        s.replace(pos, pos+oldlen, newValue);
        pos = pos+newlen;
    }
}
void replaceStr::output()
{
    cout <<s<<endl;
}
int main()
{
    string str("tho2tho");
    replaceStr r(str,"tho","tthough");
    r.replace();
    r.output();
    
    return 0;
}