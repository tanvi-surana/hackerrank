#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max(int a,int b)
{
  if(a>=b) 
      return a;
    return b;
}

void calculate()
 {
    long int n;
    scanf("%ld",&n);
    long long int arr[n];
    long int neg=0;
    long long int total_sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        if(arr[i]<0)
         {
           neg++;   
         }
        total_sum+=arr[i];
    }
    
    //contiguous subarray
    long long int current_max=arr[0];
    long long int max_so_far=arr[0];
    for(int i=1;i<n;i++){
        current_max=max(arr[i],current_max+arr[i]);
        max_so_far=max(max_so_far,current_max);
        
    }
    
    printf("%lld ",max_so_far);
    
    //non contiguous
    sort(arr,arr+n);
    
    if(neg==0)
    {
        printf("%lld\n",total_sum);
        return;
    }
    
    if(neg!=0)
    {
        int sum=0;
       if(neg<n)
        {
           for(int i=n-1;i>=neg;i--) 
               sum+=arr[i];
           printf("%lld\n",sum);    
        } 
       else
       {
           printf("%lld\n",arr[n-1]);
       }   
    }     
    
    
    
 }
int main() {
   int t;
   scanf("%d",&t);
    while(t--)
    {
      calculate();   
    }
    return 0;
}