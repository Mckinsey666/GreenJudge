#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
    {
        vector<int> num;
        for(int i=0;i<=n;++i)
            num.push_back(i);

        do{
            int ct=0;
            for(int i=1;i<num.size();++i)
            {
                for(int j=1;j<num.size()&&j!=i;++j)
                    if(((num[i]+i)==(num[j]+j))||((num[i]-i)==(num[j]-j)))
                    {
                        ++ct;
                        break;
                    }
                if(ct!=0)
                    break;
            }
            if(ct==0)
                {for(int i=1;i<num.size();++i)
                    cout<<num[i]<<" ";
                cout<<endl;}
        }while(next_permutation(num.begin()+1,num.end()));
    }
    return 0;
}
