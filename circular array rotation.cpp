#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

void calculate()
{
    map<long,int> my_map;
    int n,k,q;
    cin>>n>>k>>q;
    
    int* arr=new int[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];   
    } 
    
    for(int i=0;i<n;i++)
    {
        long new_index=(i+k)%n;
        my_map[new_index]=arr[i];
    } 
    
    int index;
    while(q--)
    {
        cin>>index;
        cout<<my_map[index]<<endl;
    }    
    
    delete [] arr;
    
}    

int main() { 
    calculate();
    return 0;
}