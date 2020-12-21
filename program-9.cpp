/*
Program statement: CONVERT TEMPERATURE FROM CELCIUS TO FARENHEIT AND VICE-VERSA USING CLASSES AND TYPE CONVERSIONS CONCEPT
*/
#include<iostream>
using namespace std;
class temperature
{
    float temp_Far;
    public:
       temperature()//constructor 
       {
           temp_Far = 0;
       }
       void get_data()//method for accepting the Farenheit
       {
           cout << "\nEnter the Temperature in Farenheit: ";
           cin >> temp_Far;
       }
       temperature(int c)//parameterised constructor for calculating the farenheit from celcius
       {
           temp_Far = (1.8*c) + 32;
       }
       void show_data()//method for displaying the farenheit temperature
       {
           cout << "\nTemperature in Farenheit = " << temp_Far;
       }
       operator float()//converting the float type 
       {
           return (float)((temp_Far - 32)/1.8);
       }
};
int main()
{
    temperature T1;
    int Temp_Cal;
    cout << "\nEnter the Temperature in Celsius: ";
    cin >> Temp_Cal;
    T1 = Temp_Cal;
    T1.show_data();
    temperature T2;
    T2.get_data();
    float temp = T2;
    cout << "\nT2 = " << temp;
    return 0;
}