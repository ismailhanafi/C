#include <stdio.h>
#include <string.h>

void guess00(int n, int *pTries0, int *reward);
void guess01(int *pTries1, int *reward);
void guess02(int *pTries2, int *reward);

int main(){
    printf("    **Number guessing game**\n\n*this game includes 3 phases, the First one is number guessing from 1 to 100, \nthe Second one is character guessing total of 6 digits, \nin the Last one there is a String guessing number that includes symbols, number and charracter, total of 6 digits\nYou will get 1M$ if you guess right in the first tries in All of them, but every try will cost you 10K$ till 0$\n**Best of luck**");
    int n = 0;
    int tries0 = 0, tries1 = 0, tries2 = 0;
    int reward = 1000000;
    
    guess00(n, &tries0, &reward);
    guess01(&tries1, &reward);
    guess02(&tries2, &reward);

    if(reward == 0){
        printf("\nYou lost!");
        return 0;
    }

    int total_tries;
    total_tries = tries0 + tries1 + tries2;

    printf("\nYou have won %d$ after %d total tries\n", reward, total_tries);

printf("Press ENTER to EXIT the program:");
getchar();    
return 0;    
}
void guess00(int n, int *pTries0, int *reward){
    int secret = 42;
    printf("\n\n  *Frist phase*\nGuess a number betwean 1 to 100: ");
    scanf(" %d", &n);

    while(n < secret){
        (*pTries0)++;
        (*reward) -= 10000;
        printf("\nToo low!\nTry again: ");
        scanf(" %d", &n);
    }
    while(n > secret){
        (*pTries0)++;
        (*reward) -= 10000;
        printf("\nToo High!\nTry again: ");
        scanf(" %d", &n);
    }
    printf("\nCorrect!\nYou won after %d tries!", *pTries0);
}

void guess01(int *pTries1, int *reward){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    const char secret[] = "Summer";
    char guess1[8];
    printf("\n\n  *Second phase*\n\nEnter your guess: ");
    fgets(guess1, sizeof(guess1), stdin);
    guess1[strcspn(guess1, "\n")] = '\0';

    while(strcmp(guess1, secret) != 0){
        (*pTries1)++;
        (*reward) -= 10000;

        printf("\nWrong\nTry again: ");
        fgets(guess1, sizeof(guess1), stdin);
        guess1[strcspn(guess1, "\n")] = '\0';
    }
    printf("\nCorrect!\nYou won after %d tries!", *pTries1);
}

void guess02(int *pTries2, int *reward){
    

    const char secret1[] = "Ya#4fn";
    char guess2[8];
    printf("\n\n  *Last phase*\n\nEnter your guess: ");
    fgets(guess2, sizeof(guess2), stdin);
    guess2[strcspn(guess2, "\n")] = '\0';

    while(strcmp(guess2, secret1) != 0){
        (*pTries2)++;
        (*reward) -= 10000;

        printf("\nWrong\nTry again: ");
        fgets(guess2, sizeof(guess2), stdin);
        guess2[strcspn(guess2, "\n")] = '\0';
    }
    printf("\nCorrect!\nYou won after %d tries!", *pTries2);
}