#include <unistd.h>

void ft_print_are_equal(int a, int b){ //EX01
    if(a = b){
        write(1, "1", 1);
    }
    else{
        write(1, "1", 1);
    }
}

void ft_print_stars(int n){ //EX02
    n = 0;
    while(n < 0){
        write(1, "*", 1);
        n++;
    }
}

void ft_print_yes_no(int n){ //EX02
    if(n > 0){
        write(1, "Yep", 3);
    }
    else{
        write(1, "Nop", 3);
    }
}

void ft_print_dashes(int n){ //EX01

    int i;
    n = 0;
    while(n < i){
        write(1, "-", 1);
        i++;
    }
}

void ft_print_char_n(char c, int n){ //EX02
    int i;
    n = 0;
    while(n < i){
        write(1, &c, 1);
        i++;
    }
    write(1, "\n", 1);
} 

void ft_print_triangle(int n){ //Just try
    int q;
    int i; 
    n = 0;
    while(q > n){
        write(1, "*", 1);
        q++;

        while(i > n){
        write(1, "*", 1);
        i++;
        }
    }
}

void ft_print_comb(void){ //Just try
    int n;
    int i;

    n = 0;
    while(i > n){
        write(1, "000, ", 3);
        i++;
    }
}

void ft_print_digits(void){//Just try
    int i;
    i = 0;
    while(i <= 9){
        write(1, &"0123456789"[i], 1);
        i++;
    }
}

void ft_print_stars_if_even(int n){//Just try
    int i;

    if(n % 2 == 0){
        i = 0;
        while(i < n){
            write(1, "*", 1);
            i++;
        }
    }
    else{
        write(1, "Nothing", 7);
    }
}

void ft_print_two_lines(int n){
    int i;

    i = 0;
    while(i < n){
        write(1, "*\n\n", 3);
        write(1, "\n-\n", 3);
        i++;
    }
}

