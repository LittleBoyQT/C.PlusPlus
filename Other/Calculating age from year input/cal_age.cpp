#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int nAge;
    int nYear;

    cout << "Input your birthday year: ";
    cin >> nAge;

    // Lay gia tri thoi gian thuc tu may tinh
    time_t Time = time(NULL);

    tm* Now = localtime(&Time);
    nYear = Now->tm_year + 1900;

    cout << "Your age is " << nYear - nAge << endl;

	return 0;
}
