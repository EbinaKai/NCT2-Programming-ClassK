#include "binomial.h"

int binomial(int n, int r){
    if (n == r || r ==0) return 1;
    
    else if (r == 1) return n;
    
    else return binomial(n-1, r) + binomial(n-1, r-1);
}