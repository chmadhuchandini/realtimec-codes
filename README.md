

#include <iostream>
using namespace std;
void pinvrification(int q)
{
   int entrpin;
   cout << "enter pin";
   int attempt=1;
    while(attempt<=3){
          cin>> entrpin;
        if(entrpin==q)
        {
            cout<< "succesuful";
        }
        else{
            cout<< "not succ";
        }
        attempt++;
    }
}

int main(){
 int pin=124;
 pinvrification(pin);
}
