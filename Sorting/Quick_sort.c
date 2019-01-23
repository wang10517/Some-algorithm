/** Quick sort is a sorting algorithm that takes divide and conquer 
 *  approach to sorting by selecting a base number and trying to sort the 
 *  numbers around this axis.
 * 
 * time complexity: O(NLogN)
 * space complexity:O(N)
 * 
 * Pros: 
 * 1. Faster than bubble sort but not as space consuming as bucket sort
 * 2. Retain the corresponding information
 * 3. Allows the usage of floats
 * 
 * Cons: 
 * 1. Slower than bucket sort
 */

/** 
 * Pseduocode
 * 1. Read numbers in a array of its own size 
 * 2. Select a base number, could be any number. Default as the first number 
 *    on the left. 
 * 3. Create two pointers from beginning and last of the array,moving each 
 *    sequentially until found a pair of i& j that is not equal to each other or
 *    i = j(stop swapping and swap with base number)
 * 4. Keep doing this recursing on both sides of based number
 * DS:
 * 1. array
 * 
 * Vars used: 
 * 1. array storing inputs 
 * 2. n 
 * 3. index vars 
 */

#include <stdio.h>
#include <string.h>
#define size 101 
int arr[size] = {0};

void swap(int i, int j);
void quick_sort(int i, int j);

int main (void){
    int n; 
    printf("Enter the total number of numbers: ");
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    quick_sort(0,n-1);

    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }

    return 0 ;
}

void swap(int i, int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

}


void quick_sort(int i, int j){
    if( i >= j){
        return;
    }

    int base = arr[i];
    int base_index = i;
    int pivot_index, end = j;

    while(i<j){
        while( arr[j] >= base && j > i){
            j--;
        }

        while( arr[i] <= base && i < j){
            i++;
        }

        if( i < j){
            swap(i,j);
        }else if(i == j){
            swap(base_index,i);
            pivot_index = i;
        }
    }

    quick_sort(base_index,pivot_index-1);
    quick_sort(pivot_index+1, end);  
}


/**
 * Takeaways:
 *  1. a better way of implementing this is to manipulating pointers which is 
 *  more efficient than keeping substringing the entire string, which is very
 *  difficult in c.
 *  2. Base case process is very important as it could incur some annoying bugs not 
 *  easily detected
 *  3. Keep the same values of arguments, to change value, copy the values to a local var
 * 
 */

