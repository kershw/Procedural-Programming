# include <stdio.h>
# include <stdlib.h>

int main() {
    char filename[] = "squares.dat";
    FILE *file = fopen(filename, "r");

    char data [10];

    float count = 0;
    float sum = 0;
    while (fgets(data, 100, file)) {
        printf("%s", data);
        sum += atoi(data);
        count++;
    }
  
    
    fclose(file);
    printf("%f\n", sum);
    printf("%f\n", count);
    printf("%f", sum/count);
    return 0;

}