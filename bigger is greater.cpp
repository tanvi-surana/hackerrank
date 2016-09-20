#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 10001

void calculate()
{
    char str[MAX];
    cin>>str;
    bool flag=false;
    int i;
    for(i=strlen(str);i>0;i--)
    {
        if(str[i-1]<str[i])
        {
            flag=true;
            break;
        }    
    }    
    
    if(!flag)
    {
        cout<<"no answer"<<endl;
    } 
    else
    {
        char current=str[i-1];
        char greater=str[i];
        int j=i+1,index=i;
        for(;j<strlen(str);j++)
        {
            if(str[j]>current && str[j]<greater)
            {
                greater=str[j];
                index=j;
            }    
        }    
        //cout<<i<<" "<<index<<endl;
        swap(str[i-1],str[index]);
        sort(str+i,str+strlen(str));
        cout<<str<<endl;
        
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