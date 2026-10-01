#include "binary_search.h"

const int *binary_search(int value, const int *arr, size_t length){
    if(!arr || !length)
        return NULL;

    int start = 0;
    int end = (int)length - 1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == value)
            return (arr + mid);
        else if(arr[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return NULL;
}