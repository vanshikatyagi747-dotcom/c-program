#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortArray(int *nums, int numsSize, int *returnSize)
{
    int flag;
    for (int i = 0; i < numsSize; i++)
    {
        flag = 0;
        for (int j = 0; j < numsSize - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                flag = 1;
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    *returnSize = numsSize;
    return nums;
}

int main()
{
    int nums[] = {5, 2, 3, 1};
    int numsSize = 4;
    sortArray(nums, numsSize, &numsSize);
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}