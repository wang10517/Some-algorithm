/**
 * Bucket sort is a sorting algorithm that trades space complexity 
 * with the time complexity, i.e superimposing an order on a random 
 * array by a pre-existing list of buckets
 * 
 * m: # of input numbers, n : # of possible values
 * running time: O(m+n), 
 * time complexity: O(n) 
 * 
 * Features: 
 * Pros: 
 * 1. Running time is very fast and therefore suitable to be used in case 
 * where range of possible values is small
 * 2. Has the ability of eliminating the duplicates
 * 
 * Cons:
 * 1. Cannot handle the floating points(Infinite precision)
 * 2. Ineffcient usage of space(large redundency)
 * 3. Does not output the corresponding entity, eg: names
 */

/**
 * Pseduo-code 
 * 
 * 1. Create a list of buckets with each entry being a potential value 
 * 2. Initalize each bucket to zero 
 * 3. Everytime read in a number, set it in appropriate bucket 
 * 4. Read through the list in any order needed
 * 
 * Used variable:
 * 1. one int for storing number of numbers read in 
 * 2. The list of bucket
 * 3. temp ints for looping
 * 
 * DS
 * 1. Array
 * 
 * Assumption: 
 * 1. n < 100 
 * 2. each number is a integer
 */

#include <stdio.h>

int main(void){
    #define size 100

    int n, j , buckets[size+1] = {0} ;
    printf("Enter the total number of numbers: ");
    scanf("%d",&n);

    printf("Enter each number separate by a space or new line: ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&j);
        buckets[j]++;
    }

    for(int i = 0 ; i< size; i++){
        //if(buckets[i] > 0){
            for (int z = 0 ; z < buckets[i] ; z++){
                printf("%d ",i);
            }
       // }
    }

    return 0;

}

/**
 * 
 * Takeaways from the implementation:
 * 1. The buckets variable is initialized to type auto inside the main, which does 
 * not initialize to all zeros, two solutions: one init it as a global variable, two 
 * manually init it to zeros as shown above
 * 2. no semicolon after the define statement 
 * 3. works with or without the if statement
 */ 