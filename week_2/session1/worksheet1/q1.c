# include <stdio.h>

int main(){
    int a;
    scanf("%d", a);

    if (a > 0) {
        printf("The number %d is positive\n", a);
    }
    else if (a < 0) {
        printf("The number %d is negative\n", a);
    }

    else {
        printf("The number %d is equal to 0\n", a);
    }
    return 0;
}