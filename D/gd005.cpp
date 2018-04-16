#include <iostream>
#include <cstdio>
#include <cctype>

using namespace std;

char c;

int maxSum()
{
    int leftsum,rightsum;
    int leaf=0;
    bool is_negative=false;

    cin>>c;//Reaches the value

    if(c==')')
        return 0;
    else if(c=='-')
    {
        is_negative=true;
        cin>>c;
    }

    leaf = c-'0';
    cin>>c;
    while(isdigit(c))
    {
        leaf = 10*leaf+(c-'0');
        cin>>c;//Reaches the next left parenthesis (the left sub-leaf)
    }
    if(is_negative)
        leaf = -leaf;


    leftsum=maxSum();

    cin>>c;//Reach the next left parenthesis (right sub-leaf)
    rightsum=maxSum();


    cin>>c;//Right parenthesis of the main leaf

    return(leaf+max(leftsum,rightsum));
}
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0; i<n;++i)
        {
            string num[10] ={"一","二","三","四","五","六","七","八","九","十"};
            cin>>c;
            int x=maxSum();
            //Read in the first left parenthesis
            cout<<"第"<<num[i]<<"棵二元樹最長路徑長度："<<x<<endl;
        }
    }
    return 0;
}
