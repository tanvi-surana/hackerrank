#include<stdio.h>
#include<string.h>
int main()
{
   int i=0,index,pangram=1;
   char str[1001],x[26]={0};
   gets(str);
   for(i=0;i<=strlen(str);i++)
   {
       if(str[i]>='A' && str[i]<='Z')
       {
           index=str[i]-'A';
       }
       else if(str[i]>='a' && str[i]<='z')
       {
           index=str[i]-'a';
       }
       else
       {
           continue;
       }
       x[index]=1;
   }
   for(i=0;i<26;i++)
   {
       if(x[i]==0)
       {
           pangram=0;
       }
   }
   if(pangram==1)
   {
       printf("pangram");
   }
   else
   {
        printf("not pangram");
   }
    return 0;
}