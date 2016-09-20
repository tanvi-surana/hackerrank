#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
   
    string s;
    cin>>s;
     
    int flag = 1;
    int dp[26]={0};
    bool first=false;
    
    for(int i=0;i<s.length();i++)
    {
        dp[s[i]-'a']++;
    }     
    
    for(int i=0;i<26;i++)
    {
       if(dp[i]%2!=0)
       {
           if(first)
           {
               flag=0;
               break;
           }
           else
           {
               first=true;
           }    
       }     
    }
    
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
