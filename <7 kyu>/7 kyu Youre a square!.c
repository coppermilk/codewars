#include <stdbool.h>
#include <math.h>
#include <stdio.h>

bool is_square(int n) {
    bool is_sq = false;
    int sqrt_n = sqrt(n);
    for(int i = 0; i <= sqrt_n; ++i){
        if((i * i) == n){
            is_sq = true;
            break;
        }
    }
    return is_sq;
}

int main(){

    int test[] = {-1, 0, 2, 4, 5, 25};
    for(int i = 0; i < 6; ++i){
        printf("%d is square: %d", test[i], is_square(test[i]));
    }
    return 0;
}