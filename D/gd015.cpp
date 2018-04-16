#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<deque>
#include<cmath>
#include<vector>
#include<queue>

using namespace std;

int main()
{
    int a[10][10]={};
    int n=0;
    while(cin>>n)
    {
        for(int x=1;x<=n;++x)
        {
            int k=0;
            cin>>k;
            int num=0;
            for(int i=0;i<k;++i)//input context
                for(int j=0;j<k;++j)
                {
                    cin>>num;
                    a[i][j]=num;
                }


            int woman_max_sum=0;//find max woman sum
            for(int i=0;i<k;++i)
            {
                int woman_max=0;
                for(int j=0;j<k;++j)
                {
                    if(a[j][i]>woman_max)
                        woman_max=a[j][i];
                }
                woman_max_sum+=woman_max;
            }

            int man_max_sum=0;//find max man sum
            for(int i=0;i<k;++i)
            {
                int man_max=0;
                for(int j=0;j<k;++j)
                {
                    if(a[i][j]>man_max)
                        man_max=a[i][j];
                }
                man_max_sum+=man_max;
            }




            int max_match=0;
            vector<int>z;

            for(int i=0;i<k;++i)
                z.push_back(i);
            do
            {
                int match=0;
                for(int i=0;i<k;++i)
                    match+=a[i][z[i]];
                if(match>max_match)
                    max_match=match;
            }while(next_permutation(z.begin(),z.end()));//find best match sum.

            cout<<"��"<<x<<"�մ��ո�Ƶ��G"<<endl
                <<"(1) ���Ҧ����ͳ��̺��N���u�t�t�{�סv�`����"<<man_max_sum<<"��"<<endl
                <<"(2) ���Ҧ��p�j���̺��N���u�t�t�{�סv�`����"<<woman_max_sum<<"��"<<endl
                <<"(3) ���������̰��u�t�t�{�סv�`����"<<max_match<<"��"<<endl;
        }
    }
    return 0;
}
