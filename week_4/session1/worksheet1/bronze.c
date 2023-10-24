# include <stdio.h>
# include <math.h>

int main() {
    int n = 10;
    
    char filename[] = "squares.dat";
    FILE *file = fopen(filename, "w");

    
    for (int i = 1; i <= n; i++) {
        fprintf(file, "%d\n", i * i);
    }
    fclose(file);
    return 0;
}