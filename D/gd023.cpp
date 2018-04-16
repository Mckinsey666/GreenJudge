#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
    char a,b;
    while(cin>>a>>b)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>a>>b>>s1;
        cin>>a>>b>>s2;

        vector<bool>switches;
        for(int i=0;i<n;++i)
        {
            if(s1[i]==s2[i])
                switches.push_back(0);
            else
                switches.push_back(1);
        }

        bool flag=true;

        int one=0,two=0,three=0,four=0;
        bool test1 = switches[2]//to test 6*k+3, 6*k+5;
        bool test2 = switches[1]//to test 6*k, 6*k+2;
        bool test3 = switches[3]//to test 6*k+4
        bool test4 = switches[0]//to test 6*k+1

        for(int i=0;i<n;++i)
        {
            if((((i+1)%6)==5)||(((i+1)%6)==3))
                if(switches[i]!=test1)
                    {flag=false;
                    break;}
            else if((((i+1)%6)==0)||(((i+1)%6)==2))
                if(switches[i]!=test2)
                    {flag=false;
                    break;}
            else if((i+1)%6==4)
                if(switches[i]!=test3)
                    {flag=false;
                    break;}
            else
                if(switches[i]!=test4)
                    {flag=false;
                    break;}
        }

        if(abs(test1-test3)!=abs(test2-test4))
            flag=false;

    }
    return 0;
}
