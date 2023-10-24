# include <stdio.h>
# define _USE_MATH_DEFINES
# include <math.h>


double circleArea(float radius) {
    double answer;
    const double pi = 3.14159265358979323846;
    answer = pow(radius, 2) * pi;
    return answer;
}

int main() {
    double radius = 344;
    double answer = circleArea(radius);
    printf("%lf", answer);
    return 0;
}