/*
Viết chương trình nhập vào thông tin của một sinh viên bao gồm: mã số sinh viên, họ tên,
quê quán, năm sinh, điểm trung bình các năm học; xuất ra thông tin của sinh viên vừa
nhập
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{

    int num_student, birth_year, avg_year;
    string name, place;
    cout << "====Nhap vao thong tin sinh vien====" << endl << endl;

    cout << "Ma so sinh vien: ";
    cin >> num_student;
    cin.get();

    cout << "Ho ten: ";
    getline(cin, name);

    cout << "Que quan: ";
    getline(cin, place);

    cout << "Nam sinh: ";
    cin >> birth_year;

    cout << "Diem trung binh cac nam hoc: ";
    cin >> avg_year;

    cout << endl << endl << "Thong tin cua sinh vien: " << name << endl
        << "\t+ Ma so sinh vien: " << num_student << endl
        << "\t+ Que quan: " << place << endl
        << "\t+ Nam sinh: " << birth_year << endl
        << "\t+ Diem trung binh cac nam hoc: " << avg_year << endl;


    return 0;
}
