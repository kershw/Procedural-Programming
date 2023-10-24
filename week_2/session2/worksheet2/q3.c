# include <stdio.h>

int main() {
    int a[5] = {1,60,21,150,5};
    int max = 0;
    for (int i = 0; i<5; i++){
        if (a[i] > max){
            max = a[i];
        }
    }
    printf("%d\n", max);
    return 0;
}