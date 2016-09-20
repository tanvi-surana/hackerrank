#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 1000
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,arr[MAX],count=0;
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++)
        {
           scanf("%d",&arr[i]);
            if(arr[i]<=0)
                count++;
        } 
        if(count>=k)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}