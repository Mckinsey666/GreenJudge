#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n=0;
    while(cin>>n)
    {
        int a[20]={},ct[20]={};//Can't use the 100000001 array. TOO BIG.
        int num=0;
        for(int i=0;i<n;++i)
            {cin>>num;
            for(int j=0;j<=i;++j)
                if(a[j]==num)//Check if the number is already a previous input
                {
                    ++ct[j];
                    break;
                }
            a[i]=num;//Not previous input-->new element
            ++ct[i];}//Here, the i is the "index" for the numbers
        int max_=0;
        int index=0;
        for(int i=0;i<20;++i)
        {
            if(ct[i]>max_)
                {max_=ct[i];
                index=i;}
        }
        cout<<a[index]<<" "<<max_<<endl;
    }
    return 0;
}
