#include<iostream>

using namespace std;
int main()
{

    string s1,s2=" ";
    while(cin>>s1>>s2)
    {
        int a[105]={},b[105]={};
        int sum[105]={};
        for(int i=s1.size()-1;i>=0;--i)
            a[s1.size()-1-i]=s1[i]-'0';
        for(int i=s2.size()-1;i>=0;--i)
            b[s2.size()-1-i]=s2[i]-'0';

        for(int i=0;i<105;++i)
            sum[i]=a[i]+b[i];
        for(int i=0;i<105;++i)
        {
            if(sum[i]>=10)
                {sum[i+1]+=sum[i]/10;
                sum[i]=sum[i]%10;}
        }

        int j=0;
        for(int i=104;i>=0;--i)//Check from back.
        {
            if(sum[i]!=0)//Find the first number(from the back)that is not 0.
            {
                j=i;//Assign the number's position to j.
                break;
            }
        }

        for(int i=j;i>=0;--i)//Output from the back.
            cout<<sum[i];
        cout<<endl;
    }
    return 0;
}
