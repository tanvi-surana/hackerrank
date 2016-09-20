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
    for(int i=0;i<str.length();i+=3)
    {
        if(str[i]!='S')
            count++;
        if(str[i+1]!='O')
            count++;
        if(str[i+2]!='S')
            count++;
    }    
    
    return count;
}    

int main(){
    string S;
    cin >> S;
    cout<<calculate(S);
    return 0;
}