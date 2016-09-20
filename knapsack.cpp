#include <bits/stdc++.h>
using namespace std;
vector <int> c; int dp[2005]; 
int main()
{
    int tc; cin >> tc;
    for (int g=0;g<tc; g++){c.clear(); memset(dp,0,sizeof(dp)); 
    int a,b; cin >> a >> b;
    for (int g=0;g<a; g++)
    {
    int d; cin >> d; c.push_back(d); 
    }
    sort(c.begin(), c.end());
    for (int g=1;g<=b; g++)
    {
        for (int y=0;y<c.size(); y++)
        {
            if (c[y]>g) continue;
            dp[g]=max(dp[g], c[y]+dp[g-c[y]]); 
        }
    }
    cout << dp[b] << '\n';} return 0; 
}