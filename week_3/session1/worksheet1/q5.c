# include <stdio.h>

int main() {
    int option;
    printf("Enter the option you want to choose between 1 and 5: ");
    scanf("%d", &option);
    switch (option) {
        case 1:
            printf("You chose option 1\n");
            break;
        case 2:
            printf("You chose option 2\n");
            break;
        case 3:
            printf("You chose option 3\n");
            break;
        case 4:
            printf("You chose option 4\n");
            break;
        case 5:
            printf("You chose option 5\n");
            break;
        
        
    }
    if (option < 1 || option > 5) {
        printf("Invalid choice!");
    }
    return 0;
}