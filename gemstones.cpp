#include <cmath>
#include <cstdio>
#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    long int freq[26]={0}; 
    int num=t;
    while(t--)
    {
        string str;
        cin>>str;
        set<char> s;
        for(int i=0;i<str.length();i++)
        {
            s.insert(str[i]);
        }  
        
        for (set<char>::iterator i = s.begin(); i != s.end(); i++) {
                char element = *i;
                freq[element-'a']++;
            } 
    }    
    
    
    int count=0;
    
    for(int i=0;i<26;i++)
    {
        //cout<<freq[i]<<" ";
        if(freq[i]>=num)
        {
            count++;
        }    
    }    
    
    cout<<count;
    return 0;
}