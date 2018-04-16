#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n=0;
    while(cin>>n)
    {
        int post[21]={};
        int length=0;

        for(int i=1;i<=n;++i)
        {   cin>>length;
            post[i]=length; }

        int ll=0,rl=0;
        vector<int>lp,rp;

        lp.push_back(1);
        ll+=post[1];
        rp.push_back(2);
        rl+=post[2];

        for(int i=3;i<=n;++i)
        {
            if(ll<=rl)
            {   lp.push_back(i);
                ll+=(post[i]+10);   }
            else
            {   rp.push_back(i);
                rl+=(post[i]+10);   }
        }

        for(int i=0;i<lp.size();++i)
            cout<<lp[i]<<" ";
        cout<<ll<<endl;
        for(int i=0;i<rp.size();++i)
            cout<<rp[i]<<" ";
        cout<<rl<<endl;
    }
    return 0;
}
