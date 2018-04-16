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
    int a=0,b=0;
        vector<int>av;
        cin>>a;

            int an=0;
            for(int i=0;i<a;++i)
            {cin>>an;
                av.push_back(an);}

        vector<int>bv;
        cin>>b;
            int bn=0;
            for(int i=0;i<b;++i)
                {cin>>bn;
                bv.push_back(bn);}

        int ct=0;
        for(int i=0;i<av.size();++i)
        {
            for(int j=0;j<bv.size();++j)
                {
                    if(av[i]==bv[j])
                    {
                        ++ct;
                        break;
                    }
                }
        }
        cout<<ct<<endl;

    return 0;
}
