/** Bubble sorts is a sorting algorithm that keeps comparing the 
 * neightboring entires for n-1 times until all numbers are in the 
 * right position, is named after since the flow of numbers is like the 
 * process of a bubbling rising up
 * 
 * time complexity: O(N^2) N: inputted numbers
 * space complexity: O(N) N: assumed upper bound
 * 
 * Pros: 
 * 1. More space efficient than Bucket sort: only storing inputted 
 * numbers
 * 2. Retain the corresponding information
 * 3. Allows the usage of floats
 * 
 * Cons: 
 * 1. Slower than the optimal
 */

/** 
 * Pseduocode
 * 1. Read numbers in a array of its own size 
 * 2. Starting from the left and keep comparing each pair of neighboring 
 * numbers, if the left one larger than the right one, swap
 * 3. Keep swapping until all sorted, print the results
 * 
 * DS:
 * 1. array
 * 
 * Vars used: 
 * 1. array storing inputs 
 * 2. n 
 * 3. index vars 
 */
#include <stdio.h>

int main (void){
    #define size 101 
    int n, arr[size] = {0};
    printf("Enter the total number of numbers: ");
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 1 ; j < n - i; j++ ){
            if(arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }

    return 0 ;
}
 
 