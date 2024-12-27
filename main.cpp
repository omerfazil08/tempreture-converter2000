#include <iostream>
#include <cmath>

using namespace std;

int main()
{

   
   int a;

    cout << "Welcome to the tempreture converter2000  " << endl;

    cout << "Please choose an option for temperature conversion." << endl;

    cout << "Type 1 if you want to convert temperature from Celsius to Fahrenheit." << endl;

    cout << "Type 2 if you want to convert temperature from Fahrenheit to Celsius." << endl;

    cout << "Please type 1 or 2 : ";
    cin >> a;


    if (a == 1)
    {

        double Tc, Tf;

        cout << "Please enter the temperature value in celsius: ";
        cin >> Tc;

        Tf = (Tc * 9 / 5) + 32;
        cout << "The temperature in Fahrenheit is: " << Tf <<endl;
        return 0;
    }


    if (a == 2) {

        double Tc,Tf;
        cout << "Please enter the temperature value in fahrenheit: ";

        cin >> Tf;

       Tc = (Tf - 32) * 5 / 9;
        cout << "The temperature in Celsius is: " << Tc << endl;
        return 0;
    }


    else 
    {
        cout << "invalid choice!" << endl << "Please type ONLY 1 or 2" << endl;
        return 0;
    }

    return 0;

}
