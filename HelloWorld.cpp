#include <iostream>
// using namespace std
using namespace std;

// Khai báo và định nghĩa hàm đầy đủ ở đây, trước hàm main
float f_thi_du(float x, int b, int c)
{
    float gia_tri; // Khai bao bien cuc bo
    gia_tri = x*x+b*x+c;
    return gia_tri;
}

int main()
{
    //float f_thi_du(float, int, int) không cần nữa
    float x=1.5;
    float y, z;
    int n=3, p=5, q=10;

    y = f_thi_du(x, n, p);
    cout << "Gia tri cua y = " << y << endl;

    z= f_thi_du(x+0.5, q, n-1);
    cout << "Gia tri cua z = " << z << endl;

    return 0;
}