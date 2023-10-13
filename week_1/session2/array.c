# include <stdio.h>

int main(){
    int a[10]; //creates an array with 10 integers

    //populate the array
    for (int count = 0; count < 10; count++) {
        a[count] = count * 10 + count;
    }
    int n = sizeof(a)/sizeof(a[0]); //finds the size of the array
    printf("The array has size %d", n);
}