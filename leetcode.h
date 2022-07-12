#include <stdlib.h>

/* header file that includes the definitions relevant to various
   leetcode problems. each definition SHOULD have clarifying comments
   as to their respective problems, design choices.
   however one will see whether or i not i succeed in this convention */

/* given an int array (nums), returns an int array with
   two indices of numbers within nums that add up to int (target).
   its assumed that there exists a single unique solution where the
   same elemnt can not be used twice. assume caller frees malloc'd
   array */

int *twoSum(int *nums, int numsSize, int target, int *returnSize){
    // took me some searching to understand why that 4th argument
    // exists but apparently its needed or else the compilation
    // fails for some reason
    *returnSize=2;
    int *indices=malloc( sizeof(int) * (*returnSize));
    int i, j, k, l;
    for (k=0; k < numsSize; k++){
        i = nums[k];
        for (l=k+1; l < numsSize; l++){
            j = nums[l];
            if (i + j == target){
                indices[0]=k;
                indices[1]=l;
                return indices;
            }
        }
    }
    // with the given assumptions, control should never reach this
    // but return some garbage memory anyways to please the compiler
    return indices;
}
