void ft_swap(int *a, int *b){
    int swap;

    swap = *a;
    *a = *b;
    *b = swap; //this project includes a super impotant intiger (swap in this Ex) that we gives it
}
void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / 2;
    *mod = b / 2;
}
void ft_ultimate_swap(int *a, int *b, int *c){


    *a = *b;
    *b = *c; 
    *c = *a; // or maybe ill d the same as hte first one but honestly I dint get the logic biind adding another intiger
}
int ft_strlen_ptr(char *str){ //Srill TRY
    int count;

    if(*str != '\0'){
        count++;
        str++;
    }
    return count;
}
void ft_reverse_array(int *arr, int len){ //Din't get a shit but ill TRY
    int start;
    int end;
    int temp;

    start = arr;
    end = arr + len - 1;
    while(start > end != 0){
        temp = *arr;
        *arr = len;
        len = temp;
        start++;
        end--;
    }
}
int ft_get_value(int *nb){
    return (*nb);
}
void ft_add_one(int *nb){
    return (*nb)++;
}
void ft_print_ptr(char *str){
    while(*str != 0){
        putchar(*str);
        str++;
    }
}
void ft_set_index(int *arr, int i, int value){ // Well, Easy but couldn't help it
    value = (*(arr + i));
}
int ft_sum_array(int *arr, int len){
    for(int i = 0; i <= len - 1; i++){
        (*(arr + i));
    }
}
void ft_swap_index(int *arr, int i, int j){ //Just test
    int temp;
    for(int i = 0; i < 3; i++){
        (*(arr + i));
        for(int j = 0; j < 5; j++){
            (*(arr + i));
            temp = i;
            i = j;
            j = temp;

        }
    }
}
void ft_double(int *nb){
    return *(nb) *= 2;
}
void ft_reset(int *nb){
    return *(nb) *= 0;
}
int ft_is_positive(int *nb){
    if(*nb >+ 0){
        return 1;
    }
    else{
        return 0;
    }
}
void ft_copy(int *src, int *dst){
    int temp;

    temp = *src;
    *src = *dst;
    *dst = temp;
}
void ft_negate(int *nb){
    if(*nb < ){
        return -*(nb);
    }
    else{
        return *(nb); //
    }
}
int ft_first_element(int *arr){
    return (*(arr + 0));
}
int ft_last_element(int *arr, int len){
    return (*(arr + len)); // z we dk thats the last elemnt is looks or how far is it
}
void ft_set_first(int *arr, int value){
    (*(arr + 0)) = value;
}
void ft_set_last(int *arr, int len, int value){
    (*(arr + len)) = value;
}
int ft_second_element(int *arr){
    return (*(arr + 1));
}
void ft_set_second(int *arr, int value){
    (*(arr + 1)) = value;
}
int ft_middle_element(int *arr, int len){
    return (*(arr + (len / 2)));
}
void ft_swap_first_last(int *arr, int len){
    int temp;

    temp = (*(arr + 0));
    (*(arr + 0)) = (*(arr + len - 1));
    (*(arr + len - 1)) = (*(arr + 0));
}
void ft_copy_first(int *src, int *dst){
    *(src + 0) = *(dst + 0);
}
void ft_copy_last(int *src, int *dst, int len){
    *(src + len - 1) = *(dst + len - 1);
}
int ft_compare_first(int *arr1, int *arr2){
    if(*(arr1 + 0) == *(arr2 + 0)){
        return 1;
    }
    else{
        return 0;
    }
}
void ft_swap_seconds(int *arr1, int *arr2){
    int temp;

    temp = *(arr1 + 1);
    *(arr1 + 1) = *(arr2 + 1);
    *(arr2 + 1) = temp;
}
void ft_copy_second(int *src, int *dst){
    *(dst + 1) = *(src + 1);
}
int ft_compare_last(int *arr1, int *arr2, int len){
    if(*(arr1 + len - 1) == *(arr2 + len - 1)){
        return 1;
    }
    else{
        return 0;
    }
}
void ft_add_firsts(int *arr1, int *arr2, int *result){
    *result = *(arr1 + 0) = *(arr2 = 0); //Well thsi is the limit of my knolage
}
int ft_equal_at(int *arr1, int *arr2, int i){
    i++;
    if(*(arr1[i]) == *(arr2[i])){ // No damn idea though
        return 1;
    }
    else{
        return 0;
    }
}