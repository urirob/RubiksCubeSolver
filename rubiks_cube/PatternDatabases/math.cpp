//printing number of combinations and number of permutations

#include <math.h>

uint32_t factorial(uint32_t n){
    if(n<=1){
        return n;
    }else{
        return n*(factorial(n-1));
    }
}

//permutatoin nck=n!/(n-k)!

uint32_t pick(uint32_t n,uint32_t k){
    return (factorial(n)/factorial(n-k));
}

//combination ncr=n!/(n-r)!*r!

uint32_t choose(uint32_t n,uint32_t r){
    if(n<r){
        return 0;
    }else{
        return ((factorial(n))/(factorial(n-r)*factorial(r)));
    }
}

