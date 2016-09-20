#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;
#define MAX 101

void calculate()
{
     int n;
     cin>>n;
     char arr[n][n];
     int flag=0;
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>arr[i][j];
         }    
     }    
    
     for(int i=0;i<n;i++)
     {
         sort(arr[i],arr[i]+n);
     }    
    
     for(int i=0;i<n;i++) 
     {
         for(int j=0;j<n-1;j++)
         {
             if((arr[j][i]-'a')>(arr[j+1][i]-'a'))
             {
                 flag=1;
                 printf("NO\n");
                 break;
             }    
                 
         }    
         
         if(flag==1)
             break;
     }    
    
    if(flag==0)
        printf("YES\n");
}    

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
        calculate();
    return 0;
}
 