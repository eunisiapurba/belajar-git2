#include <stdio.h>

void main()
{
    char operator;

    printf("================================\n");
    printf("     KALKULATOR SEDERHANA       \n");
    printf("================================\n");
    printf("Pilih Operator (+, -, *, /): ");
    scanf("%c", &operator);

    switch (operator)
    {
    case '+':
    {
        float a, b;
        printf("Bilangan Pertama: ");
        scanf("%f", &a);
        printf("Bilangan Kedua: ");
        scanf("%f", &b);
        printf("Hasilnya: %.2f\n", a + b);
        break;
    }

    case '-':
    {
        float a, b;
        printf("Bilangan Pertama: ");
        scanf("%f", &a);
        printf("Bilangan Kedua: ");
        scanf("%f", &b);
        printf("Hasilnya: %.2f\n", a - b);
        break;
    }

    case '*':
    {
        float a, b;
        printf("Bilangan Pertama: ");
        scanf("%f", &a);
        printf("Bilangan Kedua: ");
        scanf("%f", &b);
        printf("Hasilnya: %.2f\n", a * b);
        break;
    }

    case '/':
    {
        float a, b;
        printf("Bilangan Pertama: ");
        scanf("%f", &a);
        printf("Bilangan Kedua: ");
        scanf("%f", &b);
        printf("Hasilnya: %.2f\n", a / b);
        break;
    }

    default:
        float a, b;
        printf("Bilangan Pertama: ");
        scanf("%f", &a);
        printf("Bilangan Kedua: ");
        scanf("%f", &b);
        printf("Operator Salah.\n");
        break;
    }
}
