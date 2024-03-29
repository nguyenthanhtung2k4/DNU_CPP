#include <iostream>
#include <cmath>
using namespace std;

bool laChinhPhuong(int n) {
    int canBacHai = sqrt(n);
    return (canBacHai * canBacHai == n);
}

int main() {
    //  so chinh  phuong la so  can binh phuong len bang so  n 
    //  vd: 9=3*3 >>  la  so  chinh  phuong
    int a, tong = 0;
    cin >> a;

    int mang[a];
    for (int i = 0; i < a; i++) {
        do {
            cin >> mang[i];
        } while (mang[i] <= 0);
    }

    for (int i = 0; i < a; i++) {
        if (laChinhPhuong(mang[i])) {
            tong += mang[i];
        }
    }

    if(tong==0)cout<<"-1"<<endl;
    else{cout<<tong<< endl;}

    return 0;
}
