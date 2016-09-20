#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   long int n;
    scanf("%ld",&n);
    long int arr[n];
    for(long int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    
    int val=1;
    int current=arr[0] ;
        
        for(int j=1;j<n;j++)
        {
            if(arr[j]-current >4)
               { val++;
                current=arr[j];
               }
            
        }    
        
        
        
   // cout<<"The val of max is "<<max<<endl;
   
    cout<<val;
    return 0;
}