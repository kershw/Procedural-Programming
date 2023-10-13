#include <stdio.h>

int three() { //the data type that is declared before the function identifier refers to the data type of the return value
    int a;
    a = 3;
    return a;
}

int main() {
    int x = three();
    printf("%d\n", x);
    return 0;
}


