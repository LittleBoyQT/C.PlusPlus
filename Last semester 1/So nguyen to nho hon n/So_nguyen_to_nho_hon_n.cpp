#include <iostream>

using namespace std;

int main()
{
    int n,c;

    cin >> n;

    for (int i = 2; i < n; i++)
    {
        c = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i%j==0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            cout << i << endl;
        }
    }

    return 0;
}
