# include <stdio.h>
# include <math.h>

double volumeSphere(float radius) {
    double answer;
    const double pi = 3.14159265358979323846;
    answer = (4./3.) * pi * pow(radius, 3);
    return answer;
}


int main() {
    double radius = 3;
    double answer = volumeSphere(radius);
    printf("%lf", answer);
    return 0;
}