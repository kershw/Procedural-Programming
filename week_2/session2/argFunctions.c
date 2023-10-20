# include <stdio.h>

int sum (int a, int b) { //parameters in function
    int answer;
    answer = a + b;
    return answer;
}

int main() {
    int y = 2;
    int z = sum(5,y); //calling the function and passing args 5 and y into it

    printf("The sum of 5 and %d is %d\n", y, z);
}
