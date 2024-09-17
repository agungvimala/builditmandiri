#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_prime(long long N){
    if(N < 2){
        return 0;
    }
    if(N == 2){
        return 1;
    }
    if(N % 2 == 0){
        return 0;
    }
    
    
    for(long long i = 3; i * i <= N; i += 2){
        if(N % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    long long N;
    scanf("%lld", &N);
    
    if (is_prime(N)){
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}