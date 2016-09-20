#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int calculate(string str)
{
    int count=0;
    set<char> s;
    for(int i=0;i<str.length();i++)
    {
        if(s.count(str[i])==0)
        {
            count++;
            s.insert(str[i]);
        }    
    }    
    
    return count;
}    

int main(){
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++)
    {
        string s;
        cin >> s;
        cout<<calculate(s)<<endl;
    }
    
    
    
    return 0;
}