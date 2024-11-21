#include <stdio.h>

int main() {
    float celsius, fahrenheit; // Khai bao bien de luu nhiet do

    // Yeu cau nguoi dung nhap nhiet do theo do Celsius
    printf("Nhap nhiet do (Celsius): ");
    scanf("%f", &celsius); // Nhap gia tri nhiet do

    // Cong thuc chuyen doi tu Celsius sang Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Hien thi ket qua
    printf("Nhiet do %.2f do Celsius tuong ung voi %.2f do Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}

