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
    int n=0, m=0;
    while(cin>>n>>m)
    {
        int a[2][101]={};

        int votes=0;

        for(int i=1;i<=n;++i)
            a[1][i]=i;

        for(int i=1;i<=n;++i)
        {
            cin>>votes;
            a[0][i]=votes;
        }

        int x=a[0][m];

        for(int i=2;i<=100;++i)//Bubble Sort
            for(int j=100;j>=i;--j)
                if(a[0][j]>=a[0][j-1])
                {
                    swap(a[0][j],a[0][j-1]);
                    swap(a[1][j],a[1][j-1]);
                }

        for(int i=1;i<=100;++i)
        {
            if(a[0][i]==x)
                {cout<<i<<endl;
                break;}
        }
    }
    return 0;
}
