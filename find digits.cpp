#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void calculate()
{
    long long int n,count=0,n1;
    scanf("%lld",&n);
    n1=n;
    while(n1!=0)
    {
        int temp=n1%10;
        if(temp!=0 && n%temp==0)
            count++;
        n1/=10;
        
    }       
    
    printf("%lld\n",count);
    
}    

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
       calculate();
    }
    return 0;
}