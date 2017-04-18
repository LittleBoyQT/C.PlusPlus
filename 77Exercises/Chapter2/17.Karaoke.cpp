/*
Một điểm KARAOKE tính tiền khách hàng theo công thức sau:
• Mỗi giờ trong 3 giờ đầu tiên tính 30 000 đồng/giờ,
• Mỗi giờ tiếp theo có đơn giá giảm 30% so với đơn giá trong 3 giờ đầu tiên.
Ngoài ra nếu thời gian thuê phòng từ 8 – 17 giờ thì được giảm giá 10%.

Viết chương trình nhập vào giờ bắt đầu, giờ kết thúc và in ra số tiền khách hàng phải trả
biết rằng 8 ≤ giờ bắt đầu < giờ kết thúc ≤ 24.
*/
#include <iostream>

using namespace std;

int main()
{
    int start, finish,total_hour;
    double total = 0, total_money_three_hour_first,total_money_three_next_hour, price_after_three_hour_first;
    cout << "*CHUONG TRINH TINH TIEN KARAOKE*" << endl;
    do
    {
        cout << "Gio bat dau (>=8): ";
        cin >> start;
        cout << "Gio ket thuc (<=24): ";
        cin >> finish;
        if (start < 8 || finish > 24)
            cout << "Nhap lai!" << endl << endl;
    } while(start < 8 || finish > 24);
    // Processing
    total_hour = finish - start;
    if (total_hour > 3)
    {
        total_money_three_hour_first = 3 * 30000;
        price_after_three_hour_first = (30*30000)/100;
        total_money_three_next_hour = (total_hour - 3)*price_after_three_hour_first;
        total = total_money_three_hour_first + total_money_three_next_hour;
    }
    else
        total = total_hour * 30000;

    cout << "Tong tien phai tra la: ";
    if (start >=8 && finish <=17)
         total = total - (total/10);
    cout << total << endl;
    return 0;
}
