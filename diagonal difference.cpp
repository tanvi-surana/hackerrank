#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    int sum1=0,sum2=0;
    int num=n-1;
    for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if(i==j)
                   sum1+=a[i][j];
               if(i+j==num)
                   sum2+=a[i][j];
           }
    }
    
    printf("%d\n",abs(sum1-sum2));
    
    return 0;
}