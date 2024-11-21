#include <stdio.h>

int main() {
    float canhDay, chieuCao, dienTich; // Khai bao cac bien: canh day, chieu cao va dien tich

    // Nhap do dai canh day cua tam giac
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &canhDay);

    // Nhap chieu cao cua tam giac
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &chieuCao);

    // Tinh dien tich cua tam giac
    dienTich = (canhDay * chieuCao) / 2;

    // In ket qua dien tich tam giac
    printf("Dien tich cua tam giac: %.2f\n", dienTich);

    return 0;
}
