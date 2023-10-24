# include <stdio.h>

int main() {
    char filename[] = "data.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("File I/O");
        return 1;
    }
    fprintf(file, "Hello World!");
    fclose(file);
    return 0;
}