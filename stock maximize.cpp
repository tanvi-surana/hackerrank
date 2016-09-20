#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long int max_val(long int a,long int b)
{
    if(a>=b)
        return a;
    return b;
}
void calculate()
{
    //printf("Entered\n")
    long int n;
    scanf("%ld",&n);
    long int arr[n],maximum[n];
    for(long int i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    
    maximum[n-1]=arr[n-1];
    for(long int i=n-2;i>=0;i--)
    {
       maximum[i]=max_val(arr[i],maximum[i+1]);
    }
    
    //calculating profit
    long long int sum=0;
    for(long int i=0;i<n;i++)
    {
        sum+=max_val(0,(maximum[i]-arr[i]));
    }
    
    printf("%lld\n",sum);
}    

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    scanf("%d",&t);
    while(t--)
    {
        calculate();
    }
    return 0;
}
