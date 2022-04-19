#include <bits/stdc++.h>
using namespace std;
//*****************************************************
void double1(int x)
{
    // khi goi ham nay thi gia tri cua bien k he thay doi
    x *= 2;
}
void double2(int &x)
{
    // lam viec voi dia chi cua bien
    //  khi goi ham gia tri cua bien co the thay doi
    x *= 2;
}
void double3(int *x)
{
    // *x dau tien khai bao con tro x
    // tham so truyen vao la mot dia chi cua bien
    //(*x) o day la gia tri cua bien ma con tro tro vao
    (*x) *= 2;
}
void doicho(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
struct SinhVien
{
    string ten, tuoi, diachi;
};
int main()
{
    // int a = 100;
    //  null: la ki tu

    //  con tro ptrnull(NULL) la con tro chua tro den vi tri nao
    // if (ptr == ptrnull)
    // {
    //     cout << "Con tro null" << endl;
    // }

    //&a la dia chi cua bien a trong bo nho dang hexa
    // cout << &a << endl;

    // int *ptr;               // khai bao con tro
    // ptr = &a;               // gan gia tri con tro vao dia chi cua a
    // cout << &a << endl;     // dua ra dia chi trong bo nho
    // cout << ptr << endl;    // dua ra dia chi trong bo nho
    // cout << (*ptr) << endl; // dua ra gia tri cua vi tri ma con tro tro den
    // // bay gio thay doi *ptr cung giong nhu a
    // // co the co nhieu con tro tro vao a
    // int *ptr2 = &a; // int *ptr2=ptr;(phep gan hai con tro)
    // cout << ptr2 << endl;

    // //******************************************************
    // SinhVien x;
    // x.ten = "Nguyen Van Hung";
    // x.tuoi = "18";
    // x.diachi = "Thanh Hoa";
    // SinhVien *ptr = &x; // khai bao con tro doi voi struct
    // cout << ptr->ten << "  " << ptr->tuoi << " " << ptr->diachi << endl;
    // cout << (*ptr).ten << " " << (*ptr).tuoi << " " << (*ptr).diachi << endl;

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    // int a[5]; // hang con tro
    // printf("%d\n", a);
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> &a[i];
    //     cin >> *(a + i);
    // }
    // cout << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     // hai cach tuong tu
    //     printf("%d ", &a[i]);
    //     printf("%d ", (a + i));
    // }
    // int *b = a;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << b[i] << " ";
    // }

    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    // cap phat dong
    int *a = new int[1000000];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    delete[] a;
    return 0;
}