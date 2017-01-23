#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    char c;
    cin >> c;
	if (c >= 'a' && c <= 'z')
	{
    	c = int(c) - 32;
		// Chu hoa thanh chu thuong thi + 32;		
    	cout << char(c);
	}
	else
		cout << "Nhap lai" << endl;
}
