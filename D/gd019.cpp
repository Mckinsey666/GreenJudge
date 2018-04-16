#include <iostream>
#include <vector>

using namespace std;

//Looped fractions

//Function to check whether a repeated partial quotient has appeared in the process
bool appeared(vector<int>& digits, int n, int& index)
{
    if(digits.size() == 0)
        return false;

    for(int i = 0 ; i < digits.size() ; ++i)
        if(digits[i] == n)
        {
            index = i;
            return true;
        }
    return false;
}

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a%b == 0)
            cout<<a/b<<".0"<<endl;
        else
        {
            bool loop = true;//Check if it is a looped fractional
            cout<<a/b<<'.';
            a %= b;

            vector <int> digits;
            vector <int> quotient;//stores the digits of the quotient



            int index = -1;//index to store the start of the looped component

            while(!appeared(digits,a,index))
            {
                digits.push_back(a);
                a *= 10;
                while(a<b)
                    {
                        if(appeared(digits,a,index))//if x has not appeared, 10*x, 100*x ...may still have
                                                    //appeared previously.
                            break;
                        quotient.push_back(0);
                        a*=10;
                    }
                quotient.push_back(a/b);
                a %= b;

                if(a == 0)
                {
                    loop = false;//not a looped fraction
                    break;
                }
            }

            if(loop)
            {
                for(int i = 0 ; i < quotient.size() ; ++i)
                    cout<<quotient[i];
                cout<<" (";
                for(int i = index ; i < quotient.size() ; ++i)
                    cout<<quotient[i];
                cout<<"´`Àô)"<<endl;
            }
            else
            {
                for(int i = 0 ; i < quotient.size() ; ++i)
                    cout<<quotient[i];
                cout<<endl;
            }
        }
        //First output integral part
    }
    return 0;
}
