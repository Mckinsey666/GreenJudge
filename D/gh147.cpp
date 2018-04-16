#include<iostream>
#define M 500
using namespace std;

bool valid(int arr[M][M], int l1,int l2,int w1,int w2)
{
    int sum = 0;
    for(int i=l1;i<=l2;++i)
        for(int j=w1;j<=w2;++j)
            sum+=arr[i][j];
    return (sum == 0);
}

int main()
{
    int n;
    int arr[M][M]={};
    while(cin>>n)
    {
        for(int i=0;i<n;++i)
        {
            int l,w;
            cin>>l>>w;

            char c;
            for(int i=0;i<l;++i)
                for(int j=0;j<w;++j)
                {
                    cin>>c;
                    switch(c)
                    {
                    case 'A': arr[i][j]=1; break;
                    case 'B': arr[i][j]=0; break;
                    case 'C': arr[i][j]=-1; break;
                    }
                }

            int _max=0;
            for(int p=0;p<l-1;++p)
                for(int q=p+1;q<l;++q)
                    for(int r=0;r<w-1;++r)
                        for(int s=r+1;s<w;++s)
                            if(valid(arr,p,q,r,s))
                                _max=max(_max,(q-p)*(s-r));
            cout<<_max<<endl;
        }
    }
    return 0;
}
