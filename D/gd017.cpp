#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<deque>
#include<cmath>
#include<vector>
#include<queue>
#include<sstream>

using namespace std;

bool comp (int i, int j)
{
    return (i>j);
}

int main()
{
    string s=" ";
    while(cin>>s)
    {
        sort(s.begin(),s.end(),comp);
        cout<<s<<endl;
    }
    return 0;
}
