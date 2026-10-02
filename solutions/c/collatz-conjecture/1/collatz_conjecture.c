#include "collatz_conjecture.h"

int steps (int start){
    if (start < 1)
        return ERROR_VALUE;

    int stepsQty = 0;
    
    while (start != 1){
        if (start % 2 == 0){
            stepsQty++;
            start /= 2;
        } else {
            stepsQty++;
            start = (start * 3) + 1;
        }
    }
    
   return stepsQty; 
}
