#include<iostream>
#include<vector>

using namespace std;

//CLASSIC HANOI TOWER

void hanoi (int n, char a, char b, char c, int &t)
{
    if(n!=0)
    {hanoi(n-1,a,c,b,t);
    cout<<"ring "<<n<<" : "<<a<<" => "<<c<<endl;
    ++t;
    hanoi(n-1,b,a,c,t);}//a to c
}

//int main()
//{
//    int n=0;
//    while(cin>>n)
//        {int ct=0;
//        hanoi(n, 'a', 'b', 'c', ct);
//        cout<<ct<<endl;}
//    return 0;
//}

void new_hanoi(int n,char a, char b, char c, int &t)
{
    if(n==2)
        {cout<<"ring "<<1<<" : "<<a<<" => "<<b<<endl;
        ++t;
        cout<<"ring "<<2<<" : "<<a<<" => "<<c<<endl;
        ++t;}
    else
    {
    new_hanoi(n-2,a,b,c,t);
    hanoi((n-2)/2,b,a,c,t);

    cout<<"ring "<<n-1<<" : "<<a<<" => "<<b<<endl;
    ++t;

    new_hanoi(n-2,c,a,b,t);
    hanoi((n-2)/2,a,c,b,t);

    cout<<"ring "<<n<<" : "<<a<<" => "<<c<<endl;
    ++t;

    new_hanoi(n-2,b,a,c,t);
    hanoi((n-2)/2,a,c,b,t);
    }
}

int main()
{
    int n=0;
    while(cin>>n)
    {
        int ct=0;
        new_hanoi(n,'A','B','C',ct);
        cout<<"共需"<<ct<<"個步驟"<<endl;
    }
    return 0;
}
