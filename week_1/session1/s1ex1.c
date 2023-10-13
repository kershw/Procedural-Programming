#include <stdio.h>

int main() {
    float width;
    printf("Enter the width: ");
    scanf("%f", &width);
    float length;
    printf("Enter the length: ");
    scanf("%f", &length);
    float area = width * length;
    printf("%f", area);
    return 0;
}