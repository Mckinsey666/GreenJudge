#include<iostream>

using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
    {
        int sevenct=100000000;
        int elevenct=0;

        for(int i=0;i<=n/11;++i)
        {
            if((n-11*i)%7==0)
                {
                    if((n-11*i)/7<=sevenct)
                        {sevenct=(n-11*i)/7;
                        elevenct=i;}
                }
        }
        if(elevenct==0&&sevenct==100000000)
            cout<<"No"<<endl;
        else
            cout<<"Yes 7:"<<sevenct<<" 11:"<<elevenct<<endl;
    }
    return 0;
}
