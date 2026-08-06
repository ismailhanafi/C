void ft_swap(int *a, int *b){//X
    int x;
    x = *a;
    *a = *b;
    *b = x;
}

int ft_div_mod(int a, int b, int *div, int *mod){ //X
    int *resault_div;
    resault_div = a / b;
    int *pResault_div = &div;

    int *resault_mod;
    resault_mod = a % b;
    int *pResault_mod = &mod;
}

int ft_min_max(int a, int b, int *min, int *max){
    if (a > b){
        *min = b;
        *max = a;
    } else {
        *min = a;
        *max = b;
    }
    return 0;
}

void ft_set_zero(int *n){
    *n = 0;
}

void ft_increment(int *n){
    *n++;
}

void ft_add(int a, int b, int *result){
    *result = a + b;
}

void ft_abs(int *n){
    if(n >= 0){
        *(n);
    }
    else{
        -*(n);
    }
}

void ft_negate(int *n){
    -*(n);
}

void ft_is_zero(int *n, int *result){
    if(n == 0){
        *result = 1;
    }
    else{
        *result = 0;
    }
}

void ft_zero_if_negative(int *n){
    if(*n < 0){
        *n = 0;
    }
}

void ft_is_negative(int n, int *result){
    if(n < 0){
        *result = 1;
    }
    else{
        *result = 0;
    }
}

void ft_add_one(int *n){
    *(n++);
}

void ft_is_equal(int a, int b, int *result){
    if(a == b){
        *result = 1;
    }
    else{
        *result = 0;
    }
}

void ft_subtract_one(int *n){
    *(n)--;
}

void ft_multiply(int a, int b, int *result){
    *result = a * b;
}

void ft_is_odd(int n, int *result){
    if(n % 2 == 1){
        *result = 1;
    }
    else{
        *result = 0;
    }
}

void ft_is_greater(int a, int b, int *result){
    if (a > b){
        *result = 1;
    }
    else{
        *result = 0;
    }
}

void ft_is_multiple(int n, int divisor, int *result){
    if((n * divisor) % 2 == 0){
        *result = 1;
    }
    else{
        *result = 0;
    }
}

void ft_is_between(int n, int low, int high, int *result){
    if(n > low && n < high){
        *result = 1;
    }
    else{
        *result = 0;
    }
}

void ft_is_uppercase(char c, int *result){
    if(c = 'C'){
        *result = 1;
    }
    else{
        *result = 0;
    }
}

void ft_toggle(int *flag){
    *flag = 1 - *flag;
}

void ft_is_digit(char c, int *result){
    if(c <= 9 && c >= 1){
        *result = 1;
    }
    else{
        *result = 0;
    }
}

void ft_is_vowel(char c, int *result){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        *result = 1;
    }
    else{
        *result = 0;
    }
}

void ft_smaller(int a, int b, int *result){
    if(a > b){
        *result = b;
    }
    if(a < b){
        *result = a;
    }
}

void ft_clamp(int *n, int min, int max){
    if(*n < min){
        *(n) = min; 
    }
    else if(*n > max){
        *(n) = max;
    }
}

void ft_is_lowercase(char c, int *result){
    if(c >= 'a' && c <= 'z'){
        *result = 1;
    }
    else{
        *result = 0;
    }
}

void ft_bigger_value(int a, int b, int *result){
    if(a > b){
        *result = a;
    }
    else if(a < b){
        *result = b;
    }
}

void ft_abs_diff(int a, int b, int *result){
    *result = a - b;
    if(*result > 0){
        *result = a - b;
    }
    else{
        *result = -(a - b);
    }
}

void ft_is_leap_year(int year, int *result){
    if(year % 4 == 0){
        *result = 1;
    }
    else{
        *result = 0;
    }
}





