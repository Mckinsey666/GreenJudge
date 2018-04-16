#include<iostream>
#define L 102
#include<algorithm>

using namespace std;
int main()
{
    int x,y=0;
    while(cin>>x>>y)
    {
        int land[L][L];
        int trees=0;
        for(int i=1;i<=x;++i)
            for(int j=1;j<=y;++j)
                {
                    cin>>trees;
                    land[i][j]=trees;
                }

        int length[L][L];

        int a=0;

        for(int i=1;i<=x;++i)
            for(int j=1;j<=y;++j)
            {
                if(land[i][j]==0)
                {
                    length[i][j]=min(min(length[i-1][j-1],length[i-1][j]),length[i][j-1])+1;
                }
                if(length[i][j]>a)
                    a=length[i][j];

            }
    cout<<a*a<<endl;
    }
    return 0;
}
