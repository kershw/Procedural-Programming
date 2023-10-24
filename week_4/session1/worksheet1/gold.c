# include <stdio.h>
# include <stdlib.h>

int main() {
    char filename [] = "numbers.dat";
    FILE *file = fopen(filename, "a+");
    
    char data [4];
    float count = 0;
    float sum = 0;
    while (fgets(data, 100, file)){
        printf("%s\n", data);
        sum += atof(data);
        count++;
    }

    printf("%lf / %f\n", sum, count); //code is slightly not working as the mean is given as 0.03 higher than it should be
    double mean = sum / count;

    fprintf(file, "%lf\n", mean);
    printf("%lf\n", mean);
    fclose(file);
    return 0;
}