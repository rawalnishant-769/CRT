#include <iostream>
using namespace std;
int main ()
{
    int age;
    char licence;
    cout << "enter your age:";
    cin >> age;
    

    if (age >= 18)
   {
    cout << "have a licence (y/n)=";
    cin >> licence;

    if (licence == 'y')
    {
        cout << "adult";
    }

   }
   return 0;
    }

