#include <iostream>

using namespace std;

int main()
{
    char b = 'B', o = 'O', k = 'K', u1, u2;
    cout << "Nguoi choi A: "; cin >> u1;
    cout << "Nguoi choi B: "; cin >> u2;

    //
    if(u1 == o && u2 == b || u1 == k && u2 == o || u1 == b && u2 == k)
        cout << "A thang B!" << endl;
    else
        cout << "B thua roi!" << endl;
    return 0;
}
