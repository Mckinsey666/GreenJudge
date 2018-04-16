#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;++i)
        {
            int k;
            cin>>k;//k zeros

            int start=1;

            int ct=0;
            while(ct!=k)
            {
                int temp=start;
                while(temp!=0)
                {
                    ct += (temp/5);
                    temp/=5;
                }
                ++start;
                ct=0;
            }
            cout<<start<<endl;
        }
    }
    return 0;
}
