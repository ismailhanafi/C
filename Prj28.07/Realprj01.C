#include <stdio.h>
#include <string.h>

void operation(char *name, int class_num, char *pass);
int main(){

    int class_num;
    printf("\nEnter the number of the class: ");
    scanf(" %d", &class_num);

    while(class_num != 1 && class_num != 2 && class_num != 3 && class_num != 4 && class_num != 4){
        printf("\nThe class you entered isn't Exist\nTry again: ");
        scanf(" %d", &class_num);
    }

    // --- CLEAR BUFFER HERE ---
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    const char passcode[] = "Untcbwvbewbb@3y&79";
    char pass[100];
    if(class_num == 1 || class_num == 2 || class_num == 3 || class_num == 4){
        printf("\nEnter your passcode: ");
        fgets(pass, sizeof(pass), stdin);
        pass[strcspn(pass, "\n")] = '\0';
    }

    if(strcmp(pass, passcode) == 0){
        char name[25] = "";
        printf("\nEnter your full name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';

        int lvl;
        printf("\n1. TCF\n2. 1BAC\n3. 2BAC\nChoose your School level: ");
        scanf(" %d", &lvl);

        while(lvl != 1 && lvl != 2 && lvl != 3){
            printf("\nInvalide choise");
            printf("\nChoose your School level: ");
            scanf(" %d", &lvl);
        }
        if(lvl = 1){
            int branch;
            printf("\n1. 1BAC-PC\n2. 1BAC-SVT\n3. 1BAC-MATH\n4. 1BAC-ECO\nChoose your Branch: ");
            scanf(" %d", &branch);

            while(branch != 1 && branch != 2 && branch != 3 && branch != 4){
                printf("\nInvalide choise\nnChoose your Branch: ");
                scanf(" %d", &branch);
            }
        }
        else if(lvl = 2){
            int branch;
                printf("\n1. 2BAC-PC\n2. 2BAC-SVT\n3. 2BAC-MATH\n4. 2BAC-ECO\nChoose your Branch: ");
            scanf(" %d", &branch);

            while(branch != 1 && branch != 2 && branch != 3 && branch != 4){
                printf("\nInvalide choise\nnChoose your Branch: ");
                scanf(" %d", &branch);
            }
        }

        operation(name, class_num, pass);
    }

    else{
        int tries = 3;
        
        while(strcmp(pass, passcode) != 0){
            tries--;
            if(tries <= 0){
                printf("\nToo many tries\nExiting..");
                return 0;
            }
            printf("\nUncorrect password\n%d more tries left\nTry again: ", tries);
            fgets(pass, sizeof(pass), stdin);
            pass[strcspn(pass, "\n")] = '\0';
        }
    }
return 0;    
}
void operation(char *name, int class_num, char *pass){

    printf("  **Hello %s,**\n\n", name);

    int choose_op;
    printf("\n1. STATUS\n2. Change the class\n3. EXIT\nChoose the operation you want: ");
    scanf(" %d", &choose_op);

    while(choose_op != 1 && choose_op != 2 && choose_op != 3 && choose_op != 4){
        printf("\nInvalide choise\nTry again: ");
        scanf(" %d", &choose_op);
    }

    if(choose_op == 1){
        printf("\nName: %s\nClass: %d\nPasscode: %s\n", name, class_num, pass);        
        printf("Press ENTER to EXIT:");
        getchar();
    }
    else if(choose_op == 2){
        int new_class;
        printf("Enter the nember of the class you want to transfer to: ");
        scanf("%d", &new_class);
        
        while(new_class != 1 && new_class != 2 && new_class != 3 && new_class != 4 && new_class != 4){
            printf("\nThe class you entered isn't Exist\nEnter the nember of the class you want to transfer to: ");
            scanf("%d", &new_class);
        }

        printf("\n*You have transfered succesfully*");

        printf("\nPress ENTER to EXIT:");
        getchar();
    }
    else if(choose_op == 3){
        printf("\nPress ENTER to EXIT:");
        getchar();
    }
}