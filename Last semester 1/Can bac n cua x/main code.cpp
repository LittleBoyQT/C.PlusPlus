#include <iostream>
// Library for pow function...
#include <math.h>
using namespace std;

int main()
{
    int x, n;

    cin >> x;
    cin >> n;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

	float result = pow(x, (float) 1/n);
	cout << result << endl;

    return 0;
}
