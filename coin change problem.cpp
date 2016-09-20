#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

long long calculate()
{
    int sum,n;
    cin>>sum>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    long long dp[sum+1][n];
    //memset(dp,0,sizeof(dp));
    
    for(int i=0;i<=sum;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j]=0;
        }    
    }    
    
    for(int i=0;i<n;i++)
        dp[0][i]=1;
    
    for(int i=1;i<=sum;i++)
    {
        for(int j=0;j<n;j++)
        {
            long x=0,y=0;
            if(i-arr[j]>=0)
                x=dp[i-arr[j]][j];
            if(j>0)
                y=dp[i][j-1];
            
            dp[i][j]=x+y;
        }    
    }
    
    return dp[sum][n-1];
    
}    

int main() {
     cout<<calculate(); 
    return 0;
}

