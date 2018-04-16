#include<iostream>
#include<string>

using namespace std;

char alpha[5][5]=
{
    {'L','O','V','E','I'},
    {'S','A','M','N','Y'},
    {'P','D','R','T','H'},
    {'G','B','C','F','K'},
    {'Q','U','W','X','Z'},
};

int index_x (char c)
{
    for(int i=0;i<5;++i)
        for(int j=0;j<5;++j)
            if(alpha[i][j]==c)
                return i;
    if(c=='J')//Special case!!! Very important!
        return 0;
}

int index_y (char c)
{
    for(int i=0;i<5;++i)
        for(int j=0;j<5;++j)
            if(alpha[i][j]==c)
                return j;
    if(c=='J')
        return 4;
}

int main()
{
    string s=" ";
    while(cin>>s)
    {
        for(int i=0;i<s.size()-1;++i)
            {
                if((s[i]==s[i+1])||((s[i]=='I'||s[i]=='J')&&(s[i+1]=='I'||s[i+1]=='J')))
                    s.insert(i+1,1,'X');
            }
        if(s.size()%2==1)
            s+='X';

        for(int i=0;i<=s.size()-1;i+=2)
        {
            if(index_x(s[i])==index_x(s[i+1]))
            {
                s[i]=alpha[index_x(s[i])][(index_y(s[i])+1)%5];
                s[i+1]=alpha[index_x(s[i+1])][(index_y(s[i+1])+1)%5];
            }
            else if(index_y(s[i])==index_y(s[i+1]))
            {
                s[i]=alpha[(index_x(s[i])+1)%5][index_y(s[i])];
                s[i+1]=alpha[(index_x(s[i+1])+1)%5][index_y(s[i+1])];
            }
            else
            {
                char temp=s[i];
                s[i]=alpha[index_x(s[i+1])][index_y(s[i])];
                s[i+1]=alpha[index_x(temp)][index_y(s[i+1])];
            }
        }
        cout<<s<<endl;

    }
    return 0;
}
