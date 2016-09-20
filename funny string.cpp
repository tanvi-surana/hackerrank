#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void calculate()
{
    string str;
    cin>>str;
    string rstr=str;
    reverse(rstr.begin(),rstr.end());
    
    int len=str.length();
    bool flag=true;
    for(int i=1;i<len;i++)
    {
        if(abs(str[i]-str[i-1]) != abs(rstr[i]-rstr[i-1]))
        {
            flag=false;
            break;
        }    
    }    
    
    if(flag)
    {
        cout<<"Funny"<<endl;
    }   
    else
    {
        cout<<"Not Funny"<<endl;
    }    
}

int main() {
   int t;
    cin>>t;
    while(t--)
    {
        calculate();
    }    
    return 0;
}