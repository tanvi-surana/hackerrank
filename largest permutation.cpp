#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void calculate()
{
    int n;
    cin>>n;
    long k;
    cin>>k;
    int* arr=new int[n]; 
    int* index=new int[n+1];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
       index[arr[i]]=i; 
    }    
    
    for(int i=0;i<n && k>0;i++)
    {
        if(arr[i] == n-i)
        {
            continue;
        }    
        
        arr[index[n-i]]=arr[i];
        index[arr[i]]=index[n-i];
        
        arr[i]=n-i;
        index[n-i]=i;
        k--;    
         
    }    
    
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }    
    
}    

int main() {
    
    
    
    calculate();
    return 0;
}
