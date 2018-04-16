#include<iostream>
#include<cmath>

using namespace std;

int main()

{
    int warehouse[101][101]={};
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int a,b;
        cin>>a>>b;

        for(int i=1;i<=a;++i)
            for(int j=1;j<=b;++j)
                cin>>warehouse[i][j];

        int x,y;
        unsigned long minimum=1000000000;
        for(int i=1;i<=a;++i)
            for(int j=1;j<=b;++j)
        {
            unsigned long sum=0;
            for(int p=1;p<=a;++p)
                for(int q=1;q<=b;++q)
                    if(warehouse[p][q]!=0)
                        sum +=100*(warehouse[p][q])*(abs(p-i)+abs(q-j));
            if(sum<minimum)
            {
                minimum=sum;
                x=i;
                y=j;
            }
        }
        cout<<x<<' '<<y<<endl;
        cout<<minimum<<endl;
    }
    return 0;
}
