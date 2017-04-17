// Code by LittleBoyQT
// Chuyen dinh dang 24 gio sang dinh dang 12 gio
#include <iostream>
using namespace std;

void Nhap(int&, int&, char&);
void ChuyenDoi (int&, int&, char&);
void Xuat(int, int, char);

int main()
{
    int h, m;
    char ap;
    char again;
    do
    {
        Nhap(h, m, ap);
        ChuyenDoi(h, m, ap);
        Xuat(h, m, ap);
        cout << "Ban muon thuc hien tiep ? Y/N ";
        cin >> again;
        cout << "-------------------------------" << endl << endl;
    }while(again == 'y' || again == 'Y');
    return 0;
}

void Nhap(int& h, int& m, char& ap)
{
    do
    {
        cout << "Nhap gio: ";
        cin >> h;
    }while(h > 23);
    // Phut
    do
    {
        cout << "Nhap phut: ";
        cin >> m;
    }while(h > 59);
}

void ChuyenDoi (int& h, int& m, char& ap)
{
    if (h > 12)
    {
        h = h - 12;
        ap = 'p';
    }
    else if (h == 12)
    {
        ap  = 'p';
    }
    else
    {
        ap  = 'a';
    }
}

void Xuat (int h, int m, char ap)
{
    if (ap == 'a')
    {
        if (m < 10)
            cout << h << " : 0" << m << " AM" << endl;
        else
            cout << h << " : " << m << " AM" << endl;
    }
    else
    {
        if (m < 10)
            cout << h << " : 0" << m << " PM" << endl;
        else
            cout << h << " : " << m << " PM" << endl;
    }
}
