#include "fibonacci.h"

int fibonacci(int n){
    int before, val, swap;

    if (n != 0) {
        before = 0;
        val = 1;
        for (int i = 0;i<n-1;i++){
            swap = val + before;
            before = val;
            val = swap;
        }
    } else {
        val = 0;
    }

    return val;
}