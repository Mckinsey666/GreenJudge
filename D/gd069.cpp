#include<iostream>

using namespace std;

int biggest (int a,int b,int c)
{
    return max(max(a,b),c);
}
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(biggest(a,b,c)==c)
        {
            if(a+b>c)
            {
                if(a>b)
                    cout<<"��"<<endl;
                else
                    cout<<"�A"<<endl;
            }
            else
                cout<<"��"<<endl;
        }

        if(biggest(a,b,c)==b)
        {
            if(a+c>b)
            {
                if(a>c)
                    cout<<"��"<<endl;
                else
                    cout<<"��"<<endl;
            }
            else
                cout<<"�A"<<endl;
        }

        if(biggest(a,b,c)==a)
        {
            if(c+b>a)
            {
                if(c>b)
                    cout<<"��"<<endl;
                else
                    cout<<"�A"<<endl;
            }
            else
                cout<<"��"<<endl;
        }
    }
    return 0;
}
