#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<time.h>

using namespace std;


int main()
{
    //double START=clock();
    string s="0123456789";
    int ct=0;
    do
    {
        int a=(s[0]-'0')*10+s[1]-'0';
        int b=(s[2]-'0')*100+(s[3]-'0')*10+(s[4]-'0');
        int c=(s[5]-'0')*10000+(s[6]-'0')*1000+(s[7]-'0')*100+(s[8]-'0')*10+(s[9]-'0');

        if(a*b==c&&ceil(log10(c))==5)
            {cout<<a<<" X "<<b<<" = "<<c<<endl;
            ++ct;}

    }while(next_permutation(s.begin(),s.end())&&s[0]!=0&&s[2]!=0&&s[5]!=0);
    cout<<endl<<"共"<<ct<<"種運算式"<<endl;
    //double END=clock();
    //cout<<"time: "<<END-START<<endl;
    return 0;
}
