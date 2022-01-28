//
// Name: Andre Birt
// Assignment Lab 1
// Section: 01
//
#include <iostream> // including iostream library
#include <iomanip> // including iomanip library
using namespace std;
int main() // main function that houses the body of code
{
   long double fahrenheit_1; // declaring fahrenheit variable 1
   long double celsius_1;   // declaring celsius variable 1
    long double kelvin_1;   // declaring kelvin variable 1
    long double fahrenheit_2; // declaring fahrenheit variable 2
    long double kelvin_2;   // declaring kelvin variable 2
   long double celsius_2;   // declaring celsius variable 2
   char TempUnit='a';     // declaring temp unit and initializing its value to 'a'
   char TempUnit_2= 'a';  // declaring the second temp unit and initializing its value also to 'a'
while (TempUnit_2 != '.' )  // This while loop serves as a way to do multiple conversions and exit when ready
{
    cout << "Enter the temperature unit:" <<endl; // asks for the user to enter a temperature unit from the list given below
    cout << "(C) Celsius." <<endl; // celsius option for temperature unit
    cout << "(F) Fahrenheit." <<endl; // fahrenheit option for temperature unit
    cout << "(K) Kelvin." <<endl; //kelvin option for temperature unit
    cout << " Enter '.' to close."<<endl; // gives option to close program
    cin >> TempUnit;    // stores the option the user entered for the temperature unit


    if (TempUnit == '.') // *************************************************
    {                   //  if the user inputs the close program command '.'
        return 0 ;      //  these lines will close the program
    }                   //  *************************************************

    while (TempUnit != 'C' && TempUnit != 'K' && TempUnit != 'F') // *************************************************
    {                                                             // *************************************************
        cout<<"Invalid Temperature Unit ... Enter Valid Character:"; // If the user enters an invalid temperature unit
        cin >>TempUnit;                     // these lines of code will ask the user to enter a valid unit and store it
    }                                       // ************************************************************************
    if (TempUnit == 'C') // statement runs when the user enters 'C' for the temp unit
    {
        cout << "Enter the temperature value you would like to convert: " <<endl; // asks user…input a value to convert
        cin >> celsius_1;   // stores the users input into the first variable for celsius
        cout << "Enter the temperature unit you want to convert into:" <<endl; // asks user…input a unit to convert to
        cin >> TempUnit_2; //stores the users input into the second temperature variable
        if (TempUnit_2 == 'F') // statement runs when the user enters 'F' as the unit to convert to
        {
            fahrenheit_2 = (1.8* celsius_1) +32.0; // calculation to convert celsius to fahrenheit
            cout <<fixed<<setprecision (3) <<"The computed temperature is: " <<fahrenheit_2 << " F" <<endl; // *****
            // prints out the computed temperature with a precision of 3 decimal places


        }
        else if (TempUnit_2 == 'K') // statement runs when the user enters 'K' as the unit to convert to
        {
            kelvin_2 = celsius_1 + 273.15; // calculation to convert celsius to kelvin
            cout <<fixed<<setprecision (3) << "The computed temperature is: " <<kelvin_2 << "K" <<endl; // *********
            // prints out the computed temperature with a precision of 3 decimal places
        }
        else // statement runs when the user does not enter 'F' or 'K' to convert to
            cout << " Invalid temperature unit entered."; // informs to user of an error in the unit they entered, then
    }       // ... resets the code

    else if (TempUnit == 'K') // statement runs when the user enters 'K' for the temp unit
    {
        cout << "Enter the temperature value you would like to convert: " <<endl; // asks user…input a value to convert
        cin >> kelvin_1;    // stores the users input into the first variable for kelvin
        cout << "Enter the temperature unit you want to convert into:" <<endl;  // asks user..input a unit to convert to
        cin >> TempUnit_2;  //stores the users input into the second temperature variable
        if (TempUnit_2 == 'F')  // statement runs when the user enters 'F' as the unit to convert to
        {
            fahrenheit_2= ((kelvin_1*9/5)) - 459.67; // calculation to convert kelvin into fahrenheit
            cout << fixed << setprecision(3) <<"The computed temperature is: " << fahrenheit_2 << " F" <<endl;//*****
            // prints out the computed temperature with a precision of 3 decimal places
        }
        else if (TempUnit_2 == 'C') // statement runs when the user enters 'C' as the unit to convert to
        {
            celsius_2= kelvin_1 -273.15; // calculation to convert Kelvin into celsius
            cout << fixed << setprecision(3)<< "The computed temperature is: " << celsius_2 << "C" <<endl;//*********
            // prints out the computed temperature with a precision of 3 decimal places
        }
        else
            cout << " Invalid temperature unit entered."; // informs to user of an error in the unit they entered, then
    }       // ... resets the code

    else if (TempUnit == 'F')   // statement runs when the user enters 'F' for the temp unit
    {
        cout << "Enter the temperature value you would like to convert: " <<endl; // asks user…input a value to convert
        cin >> fahrenheit_1; // stores the user input as the first variable for fahrenheit
        cout << "Enter the temperature unit you want to convert into:" <<endl;  // asks user..input a unit to convert to
        cin >> TempUnit_2;  //stores the users input into the second temperature variable
        if (TempUnit_2 == 'C')  // statement runs when the user enters 'C' as the unit to convert to
        {
            celsius_2= ((fahrenheit_1 - (32))*5/9); // calculation to convert fahrenheit to celsius
            cout << fixed << setprecision(3)<<"The computed temperature is: " << celsius_2 << " C" <<endl;//*********
            // prints out the computed temperature with a precision of 3 decimal places
        }
        else if (TempUnit_2 == 'K') {   // statement runs when the user enters 'K' as the unit to convert to
            kelvin_2 = ((fahrenheit_1 + 459.67) * 5 / 9); // calculation to convert fahrenheit to kelvin
            cout << fixed <<setprecision(3)<< "The computed temperature is: " << kelvin_2 << "K" << endl;//**********
            // prints out the computed temperature with a precision of 3 decimal places
        }
        else
            cout << " Invalid temperature unit entered."; // informs to user of an error in the unit they entered, then
    }       // ... resets the code

}

    return 0; // ... ends program
}
