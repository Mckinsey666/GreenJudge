#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

class data{
public:
    int index;
    int ranking;
    double value;
    data(int a,int b,double c){index=a;ranking=b;value=c;};
};

bool comp_value (data a, data b)
{
    return a.value<b.value;
}

bool sort_index (data a, data b)
{
    return a.index<b.index;
}

int main()
{
    int n=0;
    while(cin>>n)
    {
        vector<data>set1;
        vector<data>set2;

        int k=0;
        for(int i=0;i<n;++i)
            {cin>>k;
            data d(i,0,k);
            set1.push_back(d);}
        for(int i=0;i<n;++i)
            {cin>>k;
            data d(i,0,k);
            set2.push_back(d);}

        sort(set1.begin(),set1.end(),comp_value);
        for(int i=0;i<n;++i)
            set1[i].ranking=i+1;
        sort(set1.begin(),set1.end(),sort_index);

        sort(set2.begin(),set2.end(),comp_value);
        for(int i=0;i<n;++i)
            set2[i].ranking=i+1;
        sort(set2.begin(),set2.end(),sort_index);

        double sum=0;
        for(int i=0;i<n;++i)
            sum+=(set1[i].ranking-set2[i].ranking)*(set1[i].ranking-set2[i].ranking);

        double c=6*sum/(n*(n*n-1));
        if(1-c<0)
            cout<<fixed<<setprecision(3)<<double(1-c)<<endl;
        else
            cout<<fixed<<setprecision(3)<<'+'<<double(1-c)<<endl;
    }
    return 0;
}
