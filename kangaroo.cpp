#include <bits/stdc++.h>
using namespace std;

int calculate(int x1,int v1,int x2,int v2)
{
    while(x1<x2)
    {
        x1+=v1;
        x2+=v2;
        
        if(x1 == x2)
        {
            return x1;
        }    
    }    
    
    return 0;
}    

int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if(x1>x2)
    {
        swap(x1,x2);
        swap(v1,v2);
    }    
    
    int val=calculate(x1,v1,x2,v2);
    if(val)
    {
        cout<<"YES"<<endl;
    }    
    else
    {
        cout<<"NO"<<endl;
    }     
    
    return 0;
}
