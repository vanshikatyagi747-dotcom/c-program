/*Write a Program To Take
Five Input From the User in
Integer array and Print Those values*/
#include <stdio.h>
void inputArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter The Value Of a[%d] ", i);
        scanf("%d", &a[i]);
    }
}
void printArray(int a[], int size)
{
    // Print the Array
    for (int i = 0; i < size; i++)
    {
        printf("The [%d]th Value Of a is %d \n", i, a[i]);
    }
}
// Function to Add the values of Array
int addArray(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}
// Write a Code for Sequential search
int search(int *nums, int numsSize, int target)
{
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}
// Bubble Sort
void bubbleSort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int deletePosition(int a[], int size, int pos)
{

    for (int i = pos; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }
    size--;
    return size;
}
// Write a Function to insert A value at given position
int insertPosition(int a[], int size, int pos, int val)
{
    for (int i = size - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = val;
    size++;
    return size;
}

int main()
{
    int size;
    // Unsorted array
    printf("Enter the Size of Arrar \n");
    scanf("%d", &size);
    int a[size];
    inputArray(a, size);
    // printf("The Unsorted Array As Follows \n");
    // printArray(a, size);
    //  printf("The Sorted Array As Follows \n");
    //  bubbleSort(a, size);
    //  printArray(a, size);
    //  // size = deletePosition(a, size, 2);
    //  printArray(a, size);
    // size = insertPosition(a, 3, 2, 999);
    printArray(a, size);

    return 0;
}