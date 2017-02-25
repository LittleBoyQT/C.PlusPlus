#include <iostream>

using namespace std;

void drawTriangle (int h)
{
    for (int i = 0; i < h; i++) 
    {
        for (int j = h - 1; j > i; j--)   
            cout << " ";

        for (int j = 0; j < i*2 + 1; j++)  
            cout << "*";

        cout << endl;    
    }
}

void drawRectangle(int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int i = 0; i < b; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void drawRectangleBorder(int a, int b)
{
    int i,j;
    for (i=0; i < a; ++i)
    {
        for (j=0; j<b; ++j)
            if (i==0 || j==0 ||i==(a-1) || j==(b-1))
                cout << "*";
            else
                cout << " ";
        cout << endl;
    }
}

int main()
{
    int choice, a,b;
    do
    {
        cout << "______________________________" << endl;
        cout << "Chuong trinh ve hinh don gian." << endl;
        cout << "\t[1] Ve tam giac can." << endl;
        cout << "\t[2] Ve tam hinh chu nhat." << endl;
        cout << "\t[3] Ve hinh chu nhat rong." << endl;
        cout << "[0] Thoat chuong trinh." << endl;
        cout << "______________________________" << endl;
        cout << "==>> Lua chon cua ban:  ";
        cin >> choice;


        switch (choice)
        {
        case 1:
            int h;
            cout << "Nhap chieu cao cua tam giac can: ";
            cin >> h;
            drawTriangle (h);
            break;
        case 2:

            cout << "Nhap chieu rong: ";
            cin >> a;
            cout << "Nhao chieu cao: ";
            cin >> b;
            drawRectangle (a,b);
            break;
        case 3:
            cout << "Nhap chieu rong: ";
            cin >> a;
            cout << "Nhao chieu cao: ";
            cin >> b;
            drawRectangleBorder (a,b);
            break;
        default:
            cout << "Chon chuong trinh khac." << endl;
            break;
        }
    }
    while (choice != 0);
    return 0;
}
