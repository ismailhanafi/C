#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void dis_student_senior(float *pPrice);
void discount_code(float *pPrice);
int main(){
    printf("     ***Check-out Program***\n\n\n");

    char student;
    char sinior;
    float price = 1500;
    printf("The inital price of this item is %.2f$\n", price);
    dis_student_senior(&price);
    discount_code(&price);

    printf("*The Final price of this item is %.2f$*\n", price);


printf("Press ENTER to Exit the program ");
getchar();
return 0;
}
void dis_student_senior(float *pPrice){
    char student;
    printf("\nAre you a Student? (y/N): ");
    scanf(" %c", &student);
    
    if(student == 'y' || student == 'Y'){
        (*pPrice) *= 0.15;
        printf("\nYou have a 15%% Students Discount NOW!\n");
        
        
        char sinior;
        printf("Are you a Sinior? (y/N): ");
        scanf(" %c", &sinior);
        if(sinior == 'y' || sinior == 'Y'){
        printf("\nYou have a 25%% Sinior Discount NOW!\n");
        (*pPrice) *= 0.25;

        printf("The Total of The Price NOW is %.2f", *pPrice);
        }
    }
    else{
        char sinior;
        printf("Are you a Sinior? (y/N): ");
        scanf(" %c", &sinior);
        if(sinior == 'y' || sinior == 'Y'){
        printf("\nYou have a 25% Sinior Discount NOW!");
        (*pPrice) *= 0.75;

        printf("The Total of The Price NOW is %.2f", *pPrice);
        }
    }
    
}
void discount_code(float *pPrice){
    char do_discount_code;
    printf("\nDo you have a Discound Code? (y/N): ");
    scanf(" %c", &do_discount_code);

    if(do_discount_code == 'Y' || do_discount_code == 'y'){
        char discount_code[29];
        int tries = 5;
        printf("\nEnter the discount code: ");
        getchar(); /* consume leftover newline */
        fgets(discount_code, sizeof(discount_code), stdin);
        discount_code[strcspn(discount_code, "\n")] = '\0';

        while(strcmp(discount_code, "Nothing") != 0){
            tries--;
            printf("\nInvalide Discount code!\nTry again: ");
            fgets(discount_code, sizeof(discount_code), stdin);
            discount_code[strcspn(discount_code, "\n")] = '\0';

            if(tries == 0){
                char contin;
                printf("\nPlease try again later");
                printf("\nPress ENTER to exit the program");
                getchar();
                return;
            }
        }
        printf("\nYou Get a discound for 20%!\nThe total now is %.2f", (*pPrice) * 0.80);
        *pPrice = (*pPrice) * 0.80;
    }
}
