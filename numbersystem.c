#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

void decimalToOctal(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int octal[32];
    int i = 0;
    while (n > 0) {
        octal[i] = n % 8;
        n = n / 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
}

void decimalToHexadecimal(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    char hex[32];
    int i = 0;
    while (n > 0) {
        int temp = n % 16;
        if (temp < 10) {
            hex[i] = temp + 48;
        } else {
            hex[i] = temp + 55;
        }
        n = n / 16;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
}

int main() {
    int number, choice;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    printf("Choose the conversion type:\n");
    printf("1. Binary\n");
    printf("2. Octal\n");
    printf("3. Hexadecimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("The result is: ");
    switch (choice) {
        case 1:
            decimalToBinary(number);
            break;
        case 2:
            decimalToOctal(number);
            break;
        case 3:
            decimalToHexadecimal(number);
            break;
        default:
            printf("Invalid choice");
    }

    printf("\n");
    return 0;
}