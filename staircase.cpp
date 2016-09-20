#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void show(int n)
{
   for(int i=0;i<n;i++) 
   {
       int current=n-i-1;
      for(int j=0;j<n;j++)
      {
          if(current==j)
          {
              printf("#");
              current++;
          } 
          else
              printf(" ");
      }   
       
       printf("\n");
   }    
}    


int main(){
    int n;
    cin >> n;
    show(n);
    return 0;
}
