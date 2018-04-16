#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
    {
        int k=0;
        vector<int>nv;
        for(int i=0;i<n;++i)
        {
            cin>>k;
            nv.push_back(k);
        }
        int comp=0;
        cin>>comp;
        int smaller=0, bigger=0;
        for(int i=0;i<n;++i)
        {
            if(nv[i]>comp)
                ++bigger;
            else if(nv[i]<comp)
                ++smaller;
        }
        cout<<bigger<<" "<<smaller<<endl;
    }
    return 0;
}
