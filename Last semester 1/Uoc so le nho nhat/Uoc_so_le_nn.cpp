#include <iostream>

using namespace std;

int main()
{
    int n;
    int i, r;

    cin >> n;

    for(i = n-1; i > 0; i-=2)
    {
        if (n%i ==0)
        {
            r = i;
        }
    }
    cout << r;
}
