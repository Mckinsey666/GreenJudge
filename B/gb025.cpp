#include<iostream>
#define L 33

using namespace std;
int main()
{
    int x=0,y=0;
    while(cin>>x>>y)
    {
        long long int path[L][L]={};
        for(int i=0;i<=y;++i)
            path[0][i]=1;
        for(int i=0;i<=x;++i)
            path[i][0]=1;

        for(int i=1;i<=x;++i)
            for(int j=1;j<=y;++j)
                path[i][j]=path[i-1][j]+path[i][j-1];

        cout<<path[x][y]<<endl;
    }
    return 0;
}
