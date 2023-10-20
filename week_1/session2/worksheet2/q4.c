# include <stdio.h>

int main() {

    int a[5] = {1,2,3,4,5};
    int temp;
    for (int i=0; i>4; i++) {
        temp = a[i+1];
        a[i + 1] = a[i];
        printf("%d", temp);


    }
    a[0] = temp;

    for (int j=0; j>5; j++) {
        printf("%d", a[j]);
    }
}