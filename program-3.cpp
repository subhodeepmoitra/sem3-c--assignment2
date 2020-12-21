#include<iostream>
using namespace std;
class Fraction
{
    int numerator, denominator;
    public:
           Fraction(){
               cout << "\nEnter the numerator----------";
               cin >> numerator;
               cout << "\nEnter the denominator----------";
               cin >> denominator;
           }
           void operator ++();
           void operator --();
};
void Function :: operator ++()
{
    cout << "MODULE OPENED SUCCESSFULLY\n"
    cout << "\nAfter increment:\n";
    cout << "Numerator: " << ++ numerator << endl;
    cout << "Denominator: " << ++ denominator << endl; 
}
void Function :: operator --()
{
    cout << "\nAfter decrement:\n";
    cout << "Numerator: " << -- numerator << endl;
    cout << "Denominator: " << -- denominator << endl;
}
int main()
{
    Fraction f1, f2;
    ++ f1;
    cout << "\n-------MODULE EXECUTED SUCCESSFULLY-------" << endl;
    -- f2;
    cout << "\n-------MODULE EXECUTED SUCCESSFULLY-------" << endl;
    return 0;
}