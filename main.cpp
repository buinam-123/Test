#include <iostream>

using namespace std;
void Nhap(float &dt, float &ct)
{
    do
    {
        cout << "\nNhap vao tien dien dau thang: ";
        cin>>dt;
        cout << "\nNhap vao tien dien cuoi thang: ";
        cin>>ct;
        if (dt<=0 || ct<=0 || ct<=dt)
        {
            cout << "\nSo dien khong hop ly, hay nhap la";
        }
    }
    while(dt<=0 || ct<=0 || ct<=dt);
}
float Tinh_tien(float dt, float ct)
{
    //So dien trong thang ct-dt;
    float so_dien = ct - dt;
    if (so_dien<=100)
        return 1000*so_dien;
    else if (so_dien>=101 && so_dien<=200)
        return 1000*100 + 1700*(so_dien-100);
    else
        return 1000*100 + 1700*100 + 3500*(so_dien-200);
}
int main()
{
    float dt, ct;
    Nhap(dt, ct);
    cout << "\nSo tien phai tra la: " << Tinh_tien(dt,ct) << " VND";

}
