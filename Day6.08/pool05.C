int ft_array_count_positive(int *tab, int size){
    int count = 0;
    int i = 0;

    while(i < size){
        if(*(tab + i) > 0){
            count++;  
        }
        i++;
    }
    return count;
}
int ft_array_product(int *tab, int size){
    int product = 1;;
    int i = 0;

    while(i < size){
        product *= *(tab + i);
        i++;
    }
    return product;
}
int ft_array_find_index(int *tab, int size, int value){
    int i = 0;

    while(i < size){
        
        if(*(tab + i) == value){
        return i;
        }
        i++;
    }
    return -1;
}
int ft_array_count_zero(int *tab, int size){
    int i = 0;
    int count = 0;

    while(i < size){
        if(*(tab + i) == 0){
            count++;
        }
        i++;
    }
    return count;
}
int ft_array_second(int *tab, int size){
    return *(tab + 1);
}
int ft_array_all_positive(int *tab, int size){
    int i = 0;

    while(i < size){
        if(*(tab + i) <= 0){
            return 0;
        }
        i++;
    }
    return 1;
}
int ft_array_first_negative_index(int *tab, int size){
    int i = 0;

    while(i < size){
        if(*(tab + i) < 0){
            return i;
        }
        i++;
    }
    return -1;
}
void ft_array_swap_indices(int *tab, int size, int i, int j){
    int temp;

    temp = *(tab + i);
    *(tab + i) = *(tab + j);
    *(tab + j) = temp;
}
int ft_array_sum_positive(int *tab, int size){
    int i = 0;
    int sum = 0;

    while(i < size){
        if(*(tab + i) > 0){
            sum = sum + *(tab + i);
        }
        i++;
    }
    return sum;
}
int ft_array_is_sorted(int *tab, int size){
    int i = 0;

    while(i < size - 1){
        if(*(tab + i) >= *(tab + i + 1)){
            return 0;
        }
        i++;
    }
    return 1;
}
int ft_array_count_odd(int *tab, int size){
    int i = 0;
    int count = 0;

    while(i < size){
        if(*(tab + i) % 2 != 0){
            count++;
        }
        i++;
    }
    return count;
}
int ft_array_sum_negative(int *tab, int size){
    int i = 0;
    int sum = 0;

    while(i < size){
        if(*(tab + i) < 0){
            sum = sum + *(tab + i);
        }
        i++;
    }
    return sum;
}
int ft_array_count_outside_range(int *tab, int size, int min, int max){
    int i = 0;
    int count = 0;

    while(i < size){
        if(*(tab + i) < min || *(tab + i) > max){
            count++;
        }
        i++;
    }
    return count;
}
int ft_array_index_of_max(int *tab, int size){
    int best_value = *(tab + 0);
    int best_index = 0;
    int i = 0;

    while(i < size){
        if(*(tab + i) > best_value){
        *(tab + i) = best_value;
        best_index = i;
        }
        i++;
    }
    return best_index;
}
void ft_array_reverse(int *tab, int size){
    int best_one = *(tab + 0);
    int best_index = 0;
    int i = 0;

    while(i < size){
        if(*(tab + i) < best_one){
            best_one = *(tab + i);
            best_index = i;
        }
        i++;
    }
    
    return best_index;
}
int ft_array_last_index_of_max(int *tab, int size){
    int larget_one = *(tab + 0);
    int bes_index = 0;
    int i = 0;

    while(i < size){
        if(*(tab + i) > larget_one){
            larget_one = *(tab + i);
            bes_index = i;
        }
        i++;
    }
    return bes_index;
}
int ft_array_is_equal(int *tab1, int *tab2, int size){
    int i = 0;

    while(i  < size){
        if(*(tab1 + i) != *(tab2 + i)){
            return 0;
        }
        i++;
    }
    return 1;
}


//Pointers 
void ft_apply_discount(int *price, int percent){
    percent = 0.75;

    *(price) *= percent;
    return *price;
}
void ft_level_up(int *level, int *xp, int xp_needed){
    if(*xp >= xp_needed){
        *xp = 0;
        *(level)++;
    }
}

