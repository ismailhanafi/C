//Arrays 
int ft_array_sum(int *tab, int size){
    int sum = 0;
    int i;
    
    i = 0;
    while(i < size){
        sum += *(tab + i);
        i++;
    }
    return sum;
}
int ft_array_first(int *tab, int size){
    return *(tab + 0);
}
int ft_array_last(int *tab, int size){
    return *(tab + size - 1);
}
int ft_array_count_even(int *tab, int size){
    int count = 0;
    int i = 0;

    while(i < size){
        if (*(tab + i) % 2 == 0){
            count++;
        }
        i++;
    }
    return count;
}
int ft_array_contains(int *tab, int size, int value){
    int i = 0;
    while(i < size){
        if(value == *(tab + i)){
            return 1;
        }
        i++;
    }
return 0;
}
void ft_array_double(int *tab, int size){
    int i = 0;
    while(i < size){
        *(tab + i) *= 2;
        i++;
    }
}
void ft_array_swap_first_last(int *tab, int size){
    int temp;

    temp = *(tab + 0);
    *(tab + 0) = *(tab + size - 1);
    *(tab + size - 1) = temp;
}

//Pointers
void ft_add_to(int *nb, int value){
    *nb += value;
}
void ft_negate(int *nb){
    if(*nb >= 0){
        *nb;
    }
    else{
        *(nb) *= -1;
    }
}
void ft_square_it(int *nb){
    *nb = *nb ^ 2;
}
void ft_order(int *a, int *b){
    if(*a >= *b){
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
    }
}
int ft_double_and_return(int *nb){
    int original;
    original = *nb;

    *nb *= 2;
    return original;
}
int ft_swap_if_needed(int *a, int *b){
    if(*a > *b){
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;

        return 1;
    }
return 0;
}
void ft_clamp_positive(int *nb){
    if(*nb < 0){
        *nb = 0;
    }
}
void ft_min_max(int a, int b, int *min, int *max){
    if(a > b){
        *max = a;
        *min = b;
    }
    else if((a < b)){
        *max = b;
        *min = a;
    }
    else{
        a = b;
    }
}
void ft_swap_and_negate(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

    *(a) *= -1;
    *(b) *= -1;
}
void ft_sort_three(int *a, int *b, int *c){
    int temp;
    
    if(*a >= *b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*b >= *c){
        temp = *c;
        *c = *b;
        *b = temp;
    }
}
void ft_clock_tick(int *month, int *day, int *hours, int *minutes){
    *minutes += 1;

    if(*minutes == 60){
        (*minutes) = 0;
        (*hours)++;
    }
    if(*hours == 24){
        (*minutes) = 0;
        (*hours) = 0;
        (*day)++;
    }
    if(*day == 30/*some times though*/){
        (*minutes) = 0;
        (*hours) = 0;
        (*day) = 1;
        (*month)++;
    }
}
int ft_transfer(int *from, int *to, int amount){
    if(*from <= amount){
        (*from) -= 1000;
        (*to) += 1000;
        return 1;
    }
    return 0;
}
void ft_temperature_alert(int *temp, int *alert){
    if(*temp > 40 || *temp < 0){
        *alert = 1;
    }
    else{
        *alert = 0;
    }
}
void ft_health_potion(int *hp, int max_hp, int amount){
    if(*hp < max_hp){
        *hp += amount;
        if(*hp > max_hp){
            *hp = max_hp;
        }
    }
}
void ft_traffic_light(int *state){
    if(*state == 2){
        *state = 0;
    }
    else{
        *state++;
    }
}
void ft_elevator_step(int *current_floor, int destination){
    while(current_floor < destination){
        current_floor++;
        if(current_floor == destination){
            return 0;
        }
    }
    while(current_floor > destination){
        current_floor--;
        if(current_floor == destination){
            return 0;
        }
    }
}
int ft_take_damage(int *lives, int damage){
    *lives -= damage;
    if(*lives <= 0){
        *lives = 0;
        return 1;
    }
return 0;
}
int ft_array_count_negative(int *tab, int size){
    int i = 0;
    int count = 0;
    while(i < size){
        if(*(tab + i) < 0){
            count++;
        }
        i++;
    }
    return count;
}
double ft_array_average(int *tab, int size){
    int i = 0;
    int avg;

    while(i < size){
        avg = *(tab + i) / size;
        i++;
        return avg;
    }
}