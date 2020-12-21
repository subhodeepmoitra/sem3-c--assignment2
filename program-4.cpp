/*
NAME OF PROJECT: DATE INCREMENT
STATEMENT OF THE PROJECT: DISPLAYING THE NEXT DATE
DEVELOPER: SUBHODEEP MOITRA
COMPILER USED: MinGW-64-X86
CODE WRITTEN IN: VISUAL STUDIO CODE
OS PLATFORM USED FOR CODE DEVELOPMENT: WINDOWS 10 2020 H2
OS PLATFORM USED FOR CODE TESTING: UBUNTU 20.05, KALI LINUX, WINDOWS 10
FUTURE STATEMENT: THIS CODE IS OPEN TO UPGRADATION, ANY NEW IDEAS AND SUGGESTIONS ON THIS SOLUTION WILL BE HIGHLY APPRICIABLE BY THE DEVELOPER.
                  THIS CODE HAS BEEN TESTED SOMETIMES. 
                  THIS CODE IS NOT CLASSIFIED AS BUG FREE.
                  ALL CASES HAVE BEEN TESTED, BUT IF NEW BUGS ARE ENCOUNTERED THEN THE DEVELOPER WILL DE-BUG IT.
*/

#include "date.inc"//header file for checking whether an year is leap-year or not
#include<iostream>
using namespace std;
class Date_increment{
    private:
        int date;
        int month;
        int year;
    public:
        void getdata();//method for accepting all the necessary details
        void putdata();//this is the main function for the calculation and validation of the next day increment
};
void Date_increment :: getdata()
{
    cout << "\nDate(dd): ";
    cin >> date;
    cout << "\nMonth(mm): ";
    cin >> month;
    cout << "\nYear(yyyy): ";
    cin >> year;
}
void Date_increment :: putdata()
{
    cout << "\n########## OUTPUT SECTION ##############\n";
    int check;
    check = leapyear(year);//function defined within the user-defined header-file
    if(check == 0)
    {
        if(((date == 31) && (month == 1))||((date == 31) && (month == 3))||((date == 31) && (month == 5))||((date == 31) && (month == 7))||((date == 31) && (month == 8))||((date == 31) && (month == 10)))
        {
            cout << "Date: 01" << endl;
            cout << "Month: " << ++month << endl;//pre-fix increment of the month date
            cout << "Year: " << year << endl;
        }
        else if ((date == 31) && (month == 12))
        {
            cout << "Date: 01" << endl;
            cout << "Month: 01" << endl;
            cout << "Year: " << ++year << endl;//pre-fix increment of the year
        }
        else if ((date == 29) && (month == 02))//case for leap year
        {
            cout << "Date: 01" << endl;
            cout << "Month: " << ++month << endl;//month increment by 1
            cout << "Year: " << year << endl;
        }
        else if(((date == 30) && (month == 4))||((date == 30) && (month == 6))||((date == 30) && (month == 9))||((date == 30) && (month == 11)))
        {//this part is for the months with 30 days
            cout << "Date: 01" << endl;
            cout << "Month: " << ++month << endl;//increment month by 1
            cout << "Year: " << year << endl;
        }
        else//section for incrementing the date to the immediate next date
        {
            cout << "Date: " << ++date << endl;
            cout << "Month: " << month << endl;
            cout << "Year: " << year << endl;
        }
        
    }
    //code for non-leap year date increment else if case
    else if(check == 1)
    {
        if(((date == 31) && (month == 1))||((date == 31) && (month == 3))||((date == 31) && (month == 5))||((date == 31) && (month == 7))||((date == 31) && (month == 8))||((date == 31) && (month == 10)))
        {
            cout << "Date: 01" << endl;
            cout << "Month: " << ++month << endl;
            cout << "Year: " << year << endl;
        }
        else if ((date == 31) && (month == 12))
        {
            cout << "Date: 01" << endl;
            cout << "Month: 01" << endl;
            cout << "Year: " << ++year << endl;
        }
        else if ((date == 28) && (month == 02))
        {
            cout << "Date: 01" << endl;
            cout << "Month: " << ++month << endl;
            cout << "Year: " << year << endl;
        }
        else if ((date == 29) && (month == 02))
        {
            cout << year << " is not leap-year, so this date is not possible";
        }
        else if(((date == 30) && (month == 4))||((date == 30) && (month == 6))||((date == 30) && (month == 9))||((date == 30) && (month == 11)))
        {
            cout << "Date: 01" << endl;
            cout << "Month: " << ++month << endl;
            cout << "Year: " << year << endl;
        }
        else
        {
            cout << "Date: " << ++date << endl;
            cout << "Month: " << month << endl;
            cout << "Year: " << year << endl;
        }
        
    }
    // OTHER EXCEPTION CASES
    
}
int main()
{

    Date_increment di;
    di.getdata();
    cout << "The next date is:-" << endl;
    di.putdata();
    return 0;
}