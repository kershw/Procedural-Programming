# include <stdio.h>

int main() {
    float temperature;
    printf("What's the temperature today? ");
    scanf("%f", &temperature);

    if (temperature > 20) {
        printf("Bit hot there you won't need a jacket\n");

    }
    else if (temperature > 10) {
        printf("Might need one\n");

    }
    else {
        printf("JACKET NOW!!\n");
    }
    return 0;
}