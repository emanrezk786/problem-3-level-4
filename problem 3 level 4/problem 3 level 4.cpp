#include <iostream>

using namespace std;

bool IsLeapYear(short Year)
{

    return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);

}

short ReadYear()
{
    short Year;
    cout << "\n Please Enter a Year To Check ?";
    cin >> Year;
    return Year;
}

int main()
{
    short Year = ReadYear();


    if (IsLeapYear(Year))
        cout << "\n Yes, Year [" << Year << "] is a Leap Year. \n";
    else
        cout << "\n NO, Year [" << Year << "] is NOT a Leap Year. \n";

    return 0;
}

