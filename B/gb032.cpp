#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
    {
        vector<int>grades(n,0);
        vector<int>LIS(n,1);

        int num=0;
        for(int i=0;i<n;++i)
        {

            cin>>num;
            grades[i]=num;
        }

        for(int i=0;i<n;++i)
            for(int j=i+1;j<n;++j)
                if(grades[j]>grades[i])
                    LIS[j]=max(LIS[j],LIS[i]+1);

        int max_=0;
        for(int i=0;i<n;++i)
            max_=max(max_,LIS[i]);
        cout<<max_<<endl;
    }

    return 0;
}
