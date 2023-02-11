#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    if (num1 % num2 == 0) {
        printf("First number is divisible by the second number");
    } else {
        printf("First number is not divisible by the second number");
    }
    return 0;
}


//Make usre you are Enabled run in terminal option if you about to use scanf function in your code!!!