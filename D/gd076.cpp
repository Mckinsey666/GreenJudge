#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

//Just a math problem!
//note x*x=0,1(mod4)
//the four squares are either all even or all odd


int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;++i)
        {
            int k;
            cin>>k;

            if(k==1)
                cout<<0<<endl;
            else
            {
            if(k==2)
                cout<<"1 1 1 1"<<endl;
            else
            {
                if((k-2)%2==0)
                    cout<<power(2,(k-2)/2)<<' '<<power(2,(k-2)/2)<<' '<<power(2,(k-2)/2)<<' '<<power(2,(k-2)/2)<<endl;
                else
                    cout<<0<<endl;

            }
            }
        }
    }

    return 0;
}
