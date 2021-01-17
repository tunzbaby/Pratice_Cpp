#include <iostream>
// using namespace std
using namespace std;

/*
 * Tinh giai thua: n!= 1.2.3...(n-1).n 
 */
/* 
long int tinh_giai_thua(int n)
{
    int i;
    long int gt = 1;

    if(n>1)
        for(i = 2; i <= n; i++)
            gt *= i;
    return gt;
}

int main()
{
    //int tinh_giai_thua(int);
    int n;
    cout << "\nn= ";
    cin >> n;
    cout << "\n n! = " << tinh_giai_thua(n) << endl;
    return 0;
}
*/

char chuyen_thanh_chu_hoa(char ch)
{
    char c2;
    c2 = (ch >= 'a' && ch <= 'z') ? ('A' - 'a' + ch) : ch;
    return (c2);
}

int main()
{
    char thuong, hoa;
    cout << "Hay go vao mot ki tu: ";
    cin >> thuong;
    hoa = chuyen_thanh_chu_hoa(thuong);
    cout << "\n Chu hoa tuong ung la " << hoa << endl;
    return 0;
}


