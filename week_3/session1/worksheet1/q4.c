# include <stdio.h>

int main() {
    int temp;
    printf("Enter the temperature: ");
    scanf("%d", &temp);

    if (-10 <= temp && temp <= 40) {
        printf("The temperature is within the range\n");
    }
}