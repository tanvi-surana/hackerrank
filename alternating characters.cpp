#include <cmath>
#include <cstdio>
#include <vector>
#include<cstring>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000001

void calculate()
{
    char str[MAX];
    scanf("%s",str);
    int len=strlen(str);
    char current=str[0];
    int sum=0,cur=0;
    for(int i=1;i<len;i++)
    {
        if(str[i]==current)
        {
            sum++;
        }
        else
        {
            current=str[i];
        }    
    }    
    
    printf("%d\n",sum);
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