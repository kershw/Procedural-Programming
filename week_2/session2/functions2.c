# include <stdio.h>

float fahr_to_celsius(float f_temp){
    float c_temp = ((f_temp - 32) * (5.0/9.0));
    return c_temp;
}

float fahr_to_kelvin(float f_temp){
    float k_temp = (fahr_to_celsius(f_temp) + 273.15);
    return k_temp;
}

int main () {
    float input;
    scanf("%f", &input);

    printf("Fahrenheit converter!\n\n");

    printf("A for Fahrenheit to Celsius\n");
    printf("B for Fahrenheit to Kelvin\n");
    printf("Q to quit \n");

    char option;
    printf("%c", getchar()); //scanf(" %c", &options), this is needed because otherwise the enter from the previous scanf will be the input of this scan f
    scanf("%c", &option);

    switch(option){
        case 'A': 
            printf("Your value in Celsius is %f", fahr_to_celsius(input));
            break;
        
        case 'B':
            printf("Your value in Kelvin is %f", fahr_to_kelvin(input));
            break;

        case 'Q':
            printf("You're quitting now!");
            break;

        default:
            printf("loser");

    
    }
    return 0;
}