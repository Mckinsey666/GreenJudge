#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

int main()
{
    string s=" ";
    vector<int>sumv;
    for(int i=0;i<3;++i)
    {
        getline(cin,s);
        istringstream num(s);
        int sum=0,x=0;
        while(num>>x)
            sum+=x;
        sumv.push_back(sum);
    }
    int temp=1;
    int maxsum=sumv[0];
    for(int i=0;i<3;++i)//Should use dynamic programming
        if(sumv[i]>maxsum)
            {maxsum=sumv[i];
            temp=i+1;}
    cout<<temp<<" "<<maxsum;
    return 0;
}
