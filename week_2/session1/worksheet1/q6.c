# include <stdio.h>

int main() {
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);
    while (a != -1) {
        printf("Enter a value: ");
        scanf("%d", &a);
        if (a >= 0 && a <= 100) {
            printf("The number is in the range 0 to 100\n");
        }
        if (a == -1) {
            printf("The loop has been terminated\n");
        }
    }
}