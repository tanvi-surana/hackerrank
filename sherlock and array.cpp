#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void calculate()
{
    long int n;
    scanf("%ld",&n);
    long int arr[n],arrL[n],arrR[n];
    long long int currL=0,currR=0;
    for(long int i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
        currL+=arr[i];
        arrL[i]=currL;
    }
    
    for(long int i=n-1;i>=0;i--)
    {
        currR+=arr[i];
        arrR[i]=currR;
    }    
    
    int flag=0;
    for(long int i=0;i<n;i++)
    {
        if(arrL[i]==arrR[i])
        {
            printf("YES\n");
            flag=1;
            break;
        }    
    }
    
    if(flag==0)
        printf("NO\n");
    return;
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