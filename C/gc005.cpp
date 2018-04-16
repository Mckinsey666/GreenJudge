#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<deque>
#include<cmath>

using namespace std;

int main()
{
    double n=0;
    while(cin>>n)
    {
        double a[2][21]={};
        double points=0;

        for(int i=0;i<2;++i)
            {
                double sum=0;
                for(int j=0;j<n;++j)
                {
                    cin>>points;
                    a[i][j]=points;
                    sum+=points;
                }
                a[i][20]=sum/n;
            }

        int ct=0;
        for(int i=0;i<n;++i)
            if(a[0][i]>=a[0][20]&&a[1][i]>=a[1][20])
            {   cout<<i+1<<" ";
                ++ct;   }
        cout<<endl;

        if(ct==0)
            cout<<"NO"<<endl;

    }
    return 0;
}
