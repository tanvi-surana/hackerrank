#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        LL a,b,ans=0,i;
        cin >> a >> b;
        
        assert(b>=a);
        for(i=1; ; i++)
        {
            if(i*i>b)break;
            if( i*i<=b && i*i>=a)ans++;
        }
        cout << ans << endl;
    }
    return 0;
}