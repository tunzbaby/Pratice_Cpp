#include <iostream>
// using namespace std
using namespace std;

void DICH_CHUYEN(int N, int C1, int C2, int C3);

int main()
{
    int N;
    cout << " N = ";
    cin >> N;
    DICH_CHUYEN(N, 1, 2, 3);
    return 0;
}

void DICH_CHUYEN(int N, int C1, int C2, int C3)
{
    if (N==1) cout << C1 << " -> " << C2 << endl;
    else
    {
        DICH_CHUYEN(N-1, C1, C3, C2);
        DICH_CHUYEN(1, C1, C2, C3);
        DICH_CHUYEN(N-1, C3, C2, C1);
    };
};

// long int GIAI_THUA(int n); /* function prototype */ 
// int main()
// {
//     int n;
//     long int GIAI_THUA(int n);

//     /* Doc so n */
//     cout << " n= ";
//     cin >> n;

//     /* In ra giai thua */
//     cout << "n! = " << GIAI_THUA(n) << endl;
//     return 0;
// }

// long int GIAI_THUA(int n)
// {
//     if(n == 0) return(1);
//     else return(n*GIAI_THUA(n-1));
// }


// int count; // Global variable, bien toan cuc

// int main()
// {
//     int count; // Local variable, bien dia phuong
//     count = 1234; // Local variable
//     ::count = 4321; // Global variable
//     return 0;
// }


// int main()
// {
//     void thi_du(void); // Prototype
//     int n;
//     for (n = 1; n <= 5; n++)
//         thi_du();
//     return 0;
// }

// void thi_du(void)
// {
//     register int i; // Register: ghi nho kieu thanh ghi
//     /*
//         Goi lan thu 1130197681
//         Goi lan thu 1130197681
//         Goi lan thu 1130197681
//         Goi lan thu 1130197681
//         Goi lan thu 1130197681
//     */
//     // static int i; // Bien dia phuong static khoi tao = 0 cho gia tri lan dau
//     // Bien dia phuong va bien toan cuc ton tai trong suot thoi gian chuong trinh
//     i++;
//     cout << " Goi lan thu " << i << endl;
// }


// int i; /* Bien toan cuc, truoc main */
// int main()
// {
//     void thi_du(void);

//     for(i=1; i <= 5; i++) thi_du();
//     return 0;
// }

// void thi_du(void)
// {
//     int m = 3; /* Bien dia phuong */
//     m++;
//     cout << i << " " << m << endl;
// }

// int main()
// {
//     void hoan_vi(int a, int b); // prototype

//     int n = 10, m = 20;
//     cout << " Truoc khi goi ham: " << n << " " << m << endl;

//     hoan_vi(n, m);

//     cout << " Sau khi goi ham " << n << " " << m << endl;

//     return 0;
// }
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


