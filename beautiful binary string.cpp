#include <bits/stdc++.h> 
using namespace std;

#define PRIME 3

int calculateHash(string str,int len)
{
    long long res=0;
    for(int i=0;i<len;i++)
    {
        res+=str[i]*pow(PRIME,i);
    }    
    
    return res;
}    

int calculate(string str,int len)
{
    string pattern="010";
    long long tHash=calculateHash(str,3);
    long long pHash=calculateHash(pattern,3);
    
    int count=0;
   // cout<<pHash<<endl;
    for(int i=0;i<len-3+1;)
    {
        bool change=false;
        //cout<<i<<" "<<tHash<<endl;
        if(tHash == pHash)
        {
            //check if the strings match
            bool flag=true;
            for(int i1=0;i1<3;i1++)
            {
                if(pattern[i1] != str[i+i1])
                {
                    flag=false;
                    break;
                }    
            }
            if(flag)
            {
                i=i+3;
                count++;
                change=true;
            }    
        }
        
        //recalculating the hash
        if(change)
        {
            if(i<len-2)
            {
                tHash=0;
                int x=i;
                for(int j=0;j<3;j++)
                {
                    tHash+=str[x]*pow(PRIME,j);
                    x++;
                }  
            }    
        }
        else
        {
            tHash-=str[i];
            tHash/=3;
            tHash+=str[i+3]*pow(PRIME,2);
            i++;
        }    
        
        
    } 
    
    return count;    
    
}

int main(){
    int n;
    cin >> n;
    string B;
    cin >> B;
    cout<<calculate(B,n);
    return 0;
}
