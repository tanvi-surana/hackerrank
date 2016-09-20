#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    scanf("%d",&n);
    int arr[n],val[n];
    int sum=0;
    
    for(int i=0;i<n;i++)
        val[i]=1;
    
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(int i=1;i<n;i++)
        if(arr[i-1]<arr[i])
           val[i]=val[i-1]+1;
    
    for(int i=n-1;i>=0;i--)  
       if(arr[i]<arr[i-1]) 
        {
           val[i-1]=max(val[i-1],val[i]+1);
        }
    for(int i=0;i<n;i++)
        sum+=val[i];
    
    printf("%d\n",sum);
    return 0;
}