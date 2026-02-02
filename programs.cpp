
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

