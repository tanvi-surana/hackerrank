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
    if(n==1 || n==2)
        printf("-1");
    else if(n%3==0)
    {
       for(int i=0;i<n;i++) 
           printf("5");
    }         
    else
    {
        int max3=0,max5=0,max31=0; 
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && (n-i)%5==0)
            {
                if(i>max3)
                    max3=i;
            }
            else if(i%5==0)
            {
                if(max31<i)
                    max31=i;
                    
            }   
        }    
       
        if(max3==0)
        {
            if(max31!=0 && max31==n)
            {
                while(max31--)
                    printf("3");
            }  
            else
            {
                printf("-1");
            }    
        }    
        else
        {
            max5=n-max3;
            int current=5;  
            
            max5=n-max3;
            for(int i=0;i<max3;i++)
                printf("5");
            for(int i=0;i<max5;i++)
                printf("3");
           /* while(max3!=1)
            {
                current=current*10;
                current+=5;
                max3--;
                
            }    
            
            current=current*10+3;
            
            while(max5!=1)
            {
                current=current*10;
                current+=3;
                max5--;
            }*/
            
            
            
        }    
    }
    printf("\n");      
}    

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
        calculate();
    return 0;
}
