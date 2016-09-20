#include <bits/stdc++.h>
using namespace std;
const long MAX= 1e7;
typedef pair<int, int> PII;
bool visited[MAX];
vector<PII> adj[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    long e;
    cin>>n>>e;
    int x,y,w;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y>>w;
        adj[x].push_back(make_pair(w,y));
        adj[y].push_back(make_pair(w,x));
        
    }   
    
    int source;
    cin>>source;
    
    int minCost=0;
   // priority_queue<PII,vector<PII>,greater<PII> > q;
     priority_queue<PII, vector<PII>, greater<PII> > q;
    q.push(make_pair(0,source));
    
    while(!q.empty())
    {
        PII p=q.top();
        q.pop();
        int x=p.second;
        if(visited[x])
            continue;
        minCost+=p.first;
        visited[x]=true;
        for(long i=0;i<adj[x].size();i++)
        {
            int y=adj[x][i].second;
            if(!visited[y])
                q.push(adj[x][i]);
        }    
    }    
    
    cout<<minCost<<endl;
    return 0;
}