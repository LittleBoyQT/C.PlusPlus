#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int n1, n2, rou, r;
    int max = 99;
    srand(time(0));

    int c = 1, ncorrect=0, nwrong=0;
    int ntimes = 1;

    cout << "CHUONG TRINH HOC TINH PHEP NHAN." << endl;
    cout << "--------------------------------------------------" << endl;
    do
    {
        n1 = rand() % max;
        n2 = rand() % max;
        r = n1 * n2;
        cout << "Phep tinh so " << ntimes << endl;
        do
        {
            c++;
            cout << n1 << " * " << n2 << " = ";
            cin >> rou;
            int rand_str = 1 + rand() % 2;
            if (r != rou)
            {
                switch(rand_str)
                {
                    case 1:
                        cout << "Sai roi. Moi ban tra loi lai!" << endl;
                        break;
                    case 2:
                        cout << "Dap an khac co. Ban tinh lai nhe!" << endl;
                        break;
                    case 3:
                        cout << "Ban oi dung bo cuoc." << endl;
                        break;
                    case 4:
                        cout << "Sai roi. Tiep tuc co gang ban nhe!" << endl;
                        break;
                }
                cout << "-" << endl;
                nwrong++;
            }
            if (r == rou)
            {
                ntimes++;
                ncorrect++;
                switch(rand_str)
                {
                    case 1:
                        cout << "Tot!" << endl;
                        break;
                    case 2:
                        cout << "Dung day!" << endl;
                        break;
                    case 3:
                        cout << "Dap so chuan day! Tiep tuc giai dung nhe!" << endl;
                        break;
                }
                cout << "--------------------------------------------------" << endl;
            }
        }while(r != rou && c <= 10);

    }while(c <= 10);
    float per_cor = ncorrect / 10;
    cout << "================================" << endl;
    cout << "So lan sinh vien tra loi dung: " << ncorrect << endl;
    cout << "So lan sinh vien tra loi sai: " << nwrong << endl;
    if(per_cor < 0.75)
        cout << "=>> Hay nho thay co phu dao them" << endl;
    return 0;
}
