#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;
int main()
{
    string s=" ";
    int ct=0;

    for(int i=1;i<4;++i)
    {
        string name=" ";
        getline(cin,s);
        stringstream stream(s);
        int j=1;
        while(stream>>name)
            {
                if(name=="BILL")
                    {cout<<i<<" "<<j<<endl;
                    ++ct;
                    break;}
                ++j;
            }
    }
    if(ct==0)
        cout<<"NO"<<endl;
    return 0;
}
