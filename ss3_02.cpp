#include <stdio.h>

int main() {
    const float pi = 3.14159; // Khai bao hang so pi
    float r, chuVi, dienTich; // Khai bao bien de luu ban kinh, chu vi, va dien tich

    // Yeu cau nguoi dung nhap ban kinh
    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &r); // Nhap ban kinh tu ban phim

    // Tinh chu vi va dien tich
    chuVi = 2 * pi * r;             // Cong thuc tinh chu vi: 2 * pi * r
    dienTich = pi * r * r;          // Cong thuc tinh dien tich: pi * r^2

    // In ket qua voi 2 chu so thap phan
    printf("Chu vi hinh tron: %.2f\n", chuVi);
    printf("Dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}

