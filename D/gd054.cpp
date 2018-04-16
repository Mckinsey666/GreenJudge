#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<deque>
#include<cmath>
#include<vector>
#include<queue>
#include<list>


using namespace std;

int main(void)
{
    char data[8][80]={};

    char c=' ';
    for(int i=0;i<10;++i)
        for(int a=0;a<8;++a)
            for(int b=0;b<8;++b)
                {
                    cin>>c;
                if(c=='0')
                    data[a][8*i+b]='_';
                else
                    data[a][8*i+b]='*';
                }

    int m=0;
    string s=" ";

    char largedata[32][32*4+3*3]={};

    while(cin>>s)
    {
        int m=s[s.size()-1]-'0';

        for(int i=0;i<8*m;++i)
                for(int j=0;j<8*m*(s.size()-2)+3*(s.size()-3);++j)
                    largedata[i][j]='_';

        for(int x=0;x<s.size()-2;++x)
        {
            int n=s[x]-'0';

            for(int i=0;i<8;++i)
                for(int j=8*n;j<8*(n+1);++j)
                    {
                        if(data[i][j]=='*')
                        {
                            for(int a=m*(i+1)-1;a>m*i-1;--a)
                                for(int b=m*(j%8+1)+x*(8*m+3);b>m*(j%8)+x*(8*m+3);--b)
                                    largedata[a][b]='*';
                        }
                    }
        }

        for(int i=0;i<8*m;++i)
                {for(int j=0;j<8*m*(s.size()-2)+3*(s.size()-3);++j)
                    cout<<largedata[i][j];
                cout<<endl;}
    }
    return 0;
}


