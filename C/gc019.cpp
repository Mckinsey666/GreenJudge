#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<deque>
#include<cmath>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    string s=" ";
    while(cin>>s)
    {
        int index=0;
        for(int i=6;i>=3;--i)
        {
            bool is=true;
            for(int j=i;j<s.size();++j)
                if(s[j]!=s[j-i])
                    {is=false;
                    break;}
            if(is==true&&s.size()>=2*i)
                index=i;
        }
        cout<<index<<endl;
    }
    return 0;
}
