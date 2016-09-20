#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool checkIfPalindrome(string str)
{
    int l=0,h=str.length()-1;
    
    while(l<=h)
    {
        if(str[l]!=str[h])
            return false;
        l++;
        h--;
            
    }     
    
    return true;
}


void calculate()
{
    string str;
    cin>>str;
    if(checkIfPalindrome(str))
    {
        cout<<"-1"<<endl;
        return;
    } 
    else
    {
        for(int i=0;i<str.length();i++)
        {
            string strN=str.substr(0,i)+str.substr(i+1);
            if(checkIfPalindrome(strN))
            {
                cout<<i<<endl;
                return;
            }    
        }    
    }    
}    

int main() {
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        calculate();
    }
    return 0;
}
