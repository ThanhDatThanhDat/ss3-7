#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    // Nhap 4 so nguyen 
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &number);

    // Tinh tong cac chu so 
    sum += number % 10;       
    number /= 10;             

    sum += number % 10;       
    number /= 10;              

    sum += number % 10;       
    number /= 10;              

    sum += number % 10;       

    // In 
    printf("Tong cac chu so cua so da nhap la: %d\n", sum);

    return 0;
}

