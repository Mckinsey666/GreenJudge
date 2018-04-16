#include <iostream>
#include <string>
#include<stack>

using namespace std;

int prec(char c)
// Check precedence of operators
{
    if(c == '*' || c == '/')
        return 2;
    if(c == '+' || c == '-')
        return 1;
    return 0;
}

void to_postfix(string& infix)
{
    stack <char> _operator;

    int i=0;

    while(i<infix.size())
    //check every character input
    {
        if((infix[i] >= 'A' && infix[i] <='Z') || (infix[i] >= 'a' && infix[i] <= 'z'))
            cout<<infix[i];
        else
        {
            if(infix[i] == '(')
                _operator.push('(');

            else if(infix[i] == ')')
            {
                while(!_operator.empty() && _operator.top() != '(')
                {
                    cout << _operator.top();
                    _operator.pop();
                }
                _operator.pop();
                //pops '('s
                //'(' serves as only a mark. We can get rid if it after we made use of it.
            }

            else
            {
                while(!_operator.empty() && prec(_operator.top()) >= prec(infix[i]))
                {
                    cout<<_operator.top();
                    _operator.pop();
                }

                _operator.push(infix[i]);
                //as soon as the operator doesn't meet the conditions of the while loop
            }
        }
        ++i;
    }

    //Output remaining operators
    while(!_operator.empty())
    {
        cout<<_operator.top();
        _operator.pop();
    }

    cout<<endl;
}

int main()
{
    string s;
    while(cin>>s)
        to_postfix(s);
    return 0;
}
