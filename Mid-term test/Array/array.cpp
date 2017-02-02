#include <iostream>
using namespace std;

void fillArray(int a[], int& size, int& changed_size);
int MAX_VALUE(int a[], int changed_size);
int SUM(int a[], int changed_size);
void ORDER_BY_ASC(int a[], int changed_size);

int main ()
{
    int MAXIMUM = 100;
    int changed_size;
    int a[MAXIMUM];
    // FILL ARRAY
    fillArray(a, MAXIMUM, changed_size);

    // MAX VALUE
    cout << MAX_VALUE(a, changed_size) << endl;

    // SUM of array
    cout << SUM(a, changed_size) << endl;

    // ORDER BY
    ORDER_BY_ASC(a, changed_size);

}

void fillArray (int a[], int& size, int& changed_size)
{

    cout << "How many values you want to enter? ...";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << endl << endl;
    changed_size = size;
}

int MAX_VALUE(int a[], int changed_size)
{
    int max_val = a[0];
    for (int i = 1; i < changed_size;i++)
    {
        if (a[i] > max_val)
        {
            max_val = a[i];
        }
    }
    return max_val;
}

int SUM (int a[], int changed_size)
{
    int s = 0;
    for (int i = 0; i < changed_size; i++)
    {
        s+=a[i];
    }
    return s;
}

void ORDER_BY_ASC(int a[], int changed_size)
{
    for (int before = 0; before < changed_size - 1; before++)
    {
        for (int after = before + 1; after < changed_size; after++)
        {
            if (a[before] > a[after])
            {
                int temp = a[before];
                a[before] = a[after];
                a[after] = temp;
            }
        }
    }
    for (int i = 0; i < changed_size; i++)
    {
        cout << a[i] << " ";
    }
}
