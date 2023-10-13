# include <stdio.h>

//example decrementing by 2
int secondExample() {
    int i=20;
    while (i >=0) {
        printf("%d\n", i);
        i -= 2;
    }
    return 0;
}

//example using if statement
int main(){
    int i=20;
    while (i >= 0) {
        if ((i % 2) == 0 ){
            printf("%d\n", i);
        }        
        i -= 1;
    }
    secondExample();
    return 0;
}

