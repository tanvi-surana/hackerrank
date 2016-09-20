#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;

long calculate()
{
    string s;
    cin>>s;
    map<string,int> anagram;
    
    for(int i=1;i<s.length();i++)
    {
        for(int j=0; j<s.length()-i+1; j++)
        {
            string str=s.substr(j,i);
            sort(str.begin(),str.end());
            if(anagram.count(str)==0)
            {
                anagram[str]=1;
            }
            else
            {
                anagram[str]++;
            }    
        }    
    }    
    long result=0;
    map<string,int>::iterator it;
    for(it=anagram.begin();it!=anagram.end();it++)
    {
        int val=it->second;
        if(val>=0)
        {
            result+=(val*(val-1))/2;
        }    
    }    
    
    return result;
    
}    

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cout<<calculate()<<endl;
    }    
    return 0;
}