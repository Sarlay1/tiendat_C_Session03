#include <stdio.h>

int main() {
    float toan, van, anh; // Khai bao bien luu diem Toan, Van, Anh
    float tong, trungBinh; // Khai bao bien luu tong diem va diem trung binh

    // Nhap diem Toan
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    // Nhap diem Van
    printf("Nhap diem Van: ");
    scanf("%f", &van);

    // Nhap diem Anh
    printf("Nhap diem Anh: ");
    scanf("%f", &anh);

    // Tinh tong diem va diem trung binh
    tong = toan + van + anh; // Tong diem
    trungBinh = tong / 3;    // Trung binh cong

    // In ket qua voi 2 chu so thap phan
    printf("Tong diem: %.2f\n", tong);
    printf("Diem trung binh: %.2f\n", trungBinh);

    return 0;
}

