# include <stdio.h>

int main (){
    char a[5] = "Hello";
    for (int i=4; i>=0; i--){
        printf("%c\n", a[i]);
    }
    return 0;
}
