# include <stdio.h>

int main() {
    int mark;
    printf("Enter the student's mark: ");
    scanf("%d", &mark);
    if (mark >= 70) {
        printf("Distinction\n");
    }
    else if (mark >= 50) {
        printf("Pass\n");
    }
    else if (mark >= 0) {
        printf("Fail\n");
    }
    return 0;
}