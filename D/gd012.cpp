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
    int n=0;
    while(cin>>n)
    {
        vector<char>name;
        vector<double>x1v;
        vector<double>x2v;

        double x1=0,x2=0;
        char c=0;

        for(int i=0;i<n;++i)
        {
            cin>>c>>x1>>x2;
            x1v.push_back(x1);
            x2v.push_back(x2);
            name.push_back(c);
        }

        vector<int>rankv;
        for(int i=0;i<n;++i)
        {
            int ct=0;
            for(int j=0;j<n;++j)
                if((x1v[i]>x1v[j])&&(x2v[i]>x2v[j]))
                    ++ct;
            rankv.push_back(ct);
        }


        for(int i=0;i<n;++i)
            cout<<name[i]<<" "<<rankv[i]<<endl;
    }
    return 0;
}
