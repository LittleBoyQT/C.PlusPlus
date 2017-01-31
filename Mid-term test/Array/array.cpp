#include <iostream>
using namespace std;

int MAX_VALUE(int a[]);
int SUM(int a[]);
void ORDER_BY(int a[]);

int main ()
{
    int a[4] = {-1,6,7,10};

    // MAX VALUE
    cout << MAX_VALUE(a) << endl;

    // SUM of array
    cout << SUM(a) << endl;

    // ORDER BY
    ORDER_BY(a);

}
int MAX_VALUE(int a[])
{
    int max_val = a[0];
    for (int i = 1; i < 4;i++)
    {
        if (a[i] > max_val)
        {
            max_val = a[i];
        }
    }
    return max_val;
}

int SUM (int a[])
{
    int s = 0;
    for (int i = 0; i < 4; i++)
    {
        s+=a[i];
    }
    return s;
}

void ORDER_BY(int a[])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; i < 4; j++)
        {
            int temp = 0;
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }
}

