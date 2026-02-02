/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void enterpassword(int p)
{
    cout << "enter your password";
    int enter;
    cin>> enter;

        while(p!=enter)
        {
        cout<< "password is wrong please enter";
        cin>> enter;
        }
        cout<< "pass succuseful";
    }
int main(){
    int password=1234;
    enterpassword(password);
    cout<<enterpassword;
}

