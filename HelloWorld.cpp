#include <iostream>
// using namespace std
using namespace std;

int main()
{
    // Khai bao ham prototype,
    float f_thi_du(float, int, int); // Luu y co dau ; o cuoi

    // Khai bao cac bien khac
    float x = 1.5;
    int n = 3, p = 5, q = 10;
    float y,z;

    y = f_thi_du(x,n,p); // su dung ham thu nhat
    cout << "Gia tri cua y = " << y << endl;

    z = f_thi_du(x+0.5, q, n-1); // Su dung ham lan thu hai
    cout << "Gia tri cua z = " << z << endl;

    return 0;
}

/* Dinh nghia ham */
float f_thi_du(float x, int b, int c)
{
    float gia_tri; /* Khai bao bien cuc bo */
    gia_tri = x*x + b*x +c;

    return gia_tri; 
}
