#include <iostream>

void NUMBERofDAYS(int month, int nam);

using namespace std;

int main ()
{
    int month, year;

    do
    {
        cout << "Input month : ";
        cin >> month;

        cout << "Input year : ";
        cin >> year;
    }
    while(year < 0 || month <= 0 || month > 12);

    // Call SO_NGAY void function
    NUMBERofDAYS (month, year);
}

void NUMBERofDAYS(int month, int year)
{

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Month " << month << ", year " << year << " has 31 days";
        break;
    case 2:
        if ((year%4 == 0 && year%100 != 0) || (year%400 == 0))
            cout << "Month " << month << ", year " << year << " has 29 days";
        else
            cout << "Month " << month << ", year " << year << " has 28 days";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "Month " << month << ", year " << year << " has 30 days";
        break;
    }
}
