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
int getMonth(const string v)
{
    int month(0);
    if (v.find("Jan") < v.size()) month = 1;
    if (v.find("Feb") < v.size()) month = 2;
    if (v.find("Mar") < v.size()) month = 3;
    if (v.find("Apr") < v.size()) month = 4;
    if (v.find("May") < v.size()) month = 5;
    if (v.find("Jun") < v.size()) month = 6;
    if (v.find("Jul") < v.size()) month = 7;
    if (v.find("Aug") < v.size()) month = 8;
    if (v.find("Sep") < v.size()) month = 9;
    if (v.find("Oct") < v.size()) month = 10;
    if (v.find("Nov") < v.size()) month = 11;
    if (v.find("Dec") < v.size()) month = 12;
    return month;
}
class LqDate
{
public:
    LqDate(const string& v);
    int output();
private:
    unsigned year;
    unsigned month;
    unsigned day;
};
int main()
{
    LqDate date("1/1/1994");
    date.output();
    LqDate date2("1994-1-1");
    date2.output();
    LqDate date3("Jan 1,1994");
    date3.output();
    LqDate date4("January 1,1994");
    date4.output();
    
    
    
    return 0;
}

LqDate::LqDate(const string& v)
{
    //1/1/1994 1994-1-1
    int pos = static_cast<int>(v.find_first_of("/-"));
    string mon_str("");
    string year_str("");
    string day_str("");
    
    if (pos<3 && pos>0)
    {
        //1/1/1994
        month = stoi(v.substr(0,pos));
        day = stoi(v.substr(pos+1,v.find_first_of("/", pos+1)));
        year = stoi(v.substr(v.find_last_of("/")+1,4));
        
    }else if (pos == 4)
    {
        //1994-1-1
        year = stoi(v.substr(0,pos));
        month = stoi(v.substr(pos+1,v.find_first_of("-", pos+1)));
        day = stoi(v.substr(v.find_last_of("-")+1));
    }
    
    if (pos != string::npos) {
        return;
    }
    
    //january 1 , 2016
    pos = static_cast<int>(v.find(","));
    
    if (pos) {
        year = stoi(v.substr(pos+1));
        int sub_num =static_cast<int>(v.find_first_of("1234567890"));
        day = stoi(v.substr(sub_num,pos-sub_num));
        month = getMonth(v);
        
    }
    
    if (pos != string::npos) {
        return;
    }
    
    pos = static_cast<int>(v.find_first_of(",/-"));
    //jan 1 2016
    if (pos == string::npos) {
        year = stoi(v.substr(v.find_last_of(' ')));
        month = getMonth(v);
        day = stoi(v.substr(v.find("1234567890"),2));
    }
    
}
int LqDate::output()
{
    cout <<year<<" "<<month<<" "<<day<<endl;
    return 0;
}
