#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    float zero=0,pos=0,neg=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]>0)
        {
            pos++;
        }
        else
        {
            neg++;
        }    
            
    }    
    
    printf("%6f\n",pos/n);
    printf("%6f\n",neg/n);
    printf("%6f\n",zero/n);
    return 0;
}