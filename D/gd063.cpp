#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
//Fixed output
int main()
{
    int h1=0,m1=0,s1=0,h2=0,m2=0,s2=0;
    char c=' ';
    while(cin>>h1>>c>>m1>>c>>s1>>h2>>c>>m2>>c>>s2)
    {
        int t1=3600*h1+60*m1+s1;
        int t2=3600*h2+60*m2+s2;
        if(t1>t2)
            t2+=24*3600;
        int t=t2-t1;

        cout<<setw(2)<<setfill('0')<<t/3600<<':'<<setw(2)<<setfill('0')<<(t%3600)/60<<':'<<setw(2)<<setfill('0')<<t%60<<endl;
    }
    return 0;
}
