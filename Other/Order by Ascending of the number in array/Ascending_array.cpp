#include <iostream>

using namespace std;

int MAXIMUM = 10;

void fillArray (int a[], int&, int&);
void OutArray (int a[], int&);
void orderbyasc (int a[], int&);


int main()
{
    int a[MAXIMUM], size, size_changed;
    cout << "This program will order numbers input by ascending." << endl;
    fillArray (a, MAXIMUM, size_changed);
    OutArray (a, MAXIMUM);
    orderbyasc(a, size_changed);
    return 0;
}
void fillArray (int a[], int& size, int& size_changed)
{
    //int size_changed;
    cout << "Do you want how many numbers are? ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "]" << " = ";
        cin >> a[i];
    }
    cout << endl;
    size_changed = size;
}
void OutArray (int a[], int& size)
{
    cout << "The numbers which you input are: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void orderbyasc (int a[], int& size)
{
    for (int before = 0; before < size - 1; before++)
    {
        for (int after = before + 1; after < size; after++)
        {
            if (a[before] > a[after])
            {
                float temp = a[before];
                a[before] = a[after];
                a[after] = temp;
            }
        }
        cout << endl;
    }
    cout << "The order of numbers after ordering are: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl << endl;
}
