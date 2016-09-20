#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void insertionSort(int ar_size, int *  arr) {
    int i;  
    int j;
    for(i=0;i<ar_size-1;i++)
        {
              j=i+1;
            while(j>0 && arr[j-1]>arr[j])
             {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
             }
             int k;
             for(k=0;k<ar_size;k++)
             {
                printf("%d ",arr[k]);
             }
             printf("\n");
        }
       
}
int main(void) {
   
   int _ar_size,i;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
 
   return 0;
}