#include <iostream>
// using namespace std
using namespace std;

int i; /* Bien toan cuc, truoc main */

int main()
{
    void thi_du(void);

    for(i=1; i <= 5; i++) thi_du();
    return 0;
}

void thi_du(void)
{
    int m = 3; /* Bien dia phuong */
    m++;
    cout << i << " " << m << endl;
}

// int main()
// {
//     void hoan_vi(int a, int b); // prototype

//     int n = 10, m = 20;
//     cout << " Truoc khi goi ham: " << n << " " << m << endl;

//     hoan_vi(n, m);

//     cout << " Sau khi goi ham " << n << " " << m << endl;

//     return 0;
// }

// void hoan_vi(int a, int b)
// {
//     int t;
//     cout << " Truoc khi hoan vi: " << a << " " << b << endl;
//     t=a;
//     a=b;
//     b=t;
//     cout << " Sau khi hoan vi: " << a << " " << b << endl;
// }

// // Them gia tri con tro
// int main()
// {
//     void hoan_vi(int *p, int *q); // prototype

//     int n = 10, m = 20;
//     cout << " Truoc khi goi ham: " << n << " " << m << endl;

//     hoan_vi(&n, &m);

//     cout << " Sau khi goi ham " << n << " " << m << endl;

//     return 0;
// }

// void hoan_vi(int *p, int *q)
// // p va q bay gio la 2 dia chi
// {
//     int t;
//     cout << " Truoc khi hoan vi: " << *p << " " << *q << endl;
//     t = *p;
//     *p = *q;
//     *q = t;
//     cout << " Sau khi hoan vi: " << *p << " " << *q << endl;
// }


