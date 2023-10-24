# include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a % 4 == 0 && a % 5 == 0) {
        printf("The number %d is divisible by both 4 and 5\n", a);
    }
    else {
        printf("The number %d is not divisible by both 4 and 5\n", a);
    }
    return 0;
}