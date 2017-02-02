#include <iostream>

using namespace std;


void fillArray (int a[], int& size)
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

}
//void OutArray (int a[], int& size)
//{
//    cout << "The numbers which you input are: ";
//    for (int i = 0; i < size; i++)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//}
void orderbyasc (int a[], int& size)
{
    for (int before = 0; before < size; before++)
    {
        //cout << "Vong 1; Lan " << before << endl;
        for (int after = before + 1; after < size; after++)
        {
            //cout << "\tVong 2; Lan " << after << endl;
            if (a[before] > a[after])
            {
                float temp = a[before];
                a[before] = a[after];
                a[after] = temp;
            } // 8 6 9 2
            cout << a[before] << endl;
            cout << a[after] << endl;
        }
        cout << endl;
    }
    cout << "The order of numbers after ordering are: ";
    for (int i = 0; i < size; i++)
    {
       // int temp;
        cout << a[i] << " ";
    }
    cout << endl << endl;
}

int main()
{
    int size = 10, a[size];
    cout << "This program will order numbers input by ascending." << endl;
    fillArray (a, size);
    //OutArray (a, MAXIMUM);
    orderbyasc(a, size);
    return 0;
}
