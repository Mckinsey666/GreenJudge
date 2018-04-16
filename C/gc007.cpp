#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int php=0,dhp=0,patt=0,datt=0;
    while(cin>>php>>patt>>dhp>>datt)
    {
        int round=1;
        int ct=0;
        while(php!=0&&dhp!=0)
        {
            cout<<"Round "<<round<<":"<<endl;

                cout<<"You hit Dragon "<<patt<<" points."<<endl;
                dhp-=patt;

                if(dhp<=0)
                    dhp=0;

                cout<<"You:"<<php<<" Dragon:"<<dhp<<endl;

                if(dhp==0)
                    {cout<<"You Win!"<<endl;
                    break;}


                cout<<"Dragon hits You "<<datt<<" points."<<endl;
                php-=datt;

                if(php<=0)
                    php=0;

                cout<<"You:"<<php<<" Dragon:"<<dhp<<endl;

                if(php==0)
                    {cout<<"You Lose!"<<endl;
                    break;}
            ++round;
        }
    }
    return 0;
}
