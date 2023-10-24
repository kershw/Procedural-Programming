# include <stdio.h>

//null character = '\0'
int main() {
    int count;
    char a [7] = 'Archie';
    for (count = 0; a[count] == '\0'; count++);
    printf("%d", count);
    return 0; 
}