/* Find The Duplicate in Array By Two For Loop
If  Array Contains Duplicate
return 1 if Not Return 0*/
#include <stdio.h>
void ArrayCopy(int a[], int b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        b[i] = a[i];
    }
}
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
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("[%d]", a[i]);
    }
    printf("]\n");
}
/* Write A Function Which Reverse The Array */
void reverse(int a[], int beg, int end)
{
    int temp;
    for (int i = beg, j = end; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

int findDuplicate(int a[], int size)
{
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                flag = 1;
            }
        }
    }

    return flag;
}

/* Write a Function Which Rotates The array */
void rotateArray(int a[], int size)
{
    int b[size];
    // Copy Fuction
    ArrayCopy(a, b, size);
    printf("Enter How Many Rotation You Want\n");
    int n;
    scanf("%d", &n);
    n = n % size;
    for (int i = 0; i < size; i++)
    {
        a[(i + n) % size] = b[i];
    }
    printArray(a, size);
}
void rotate(int nums[], int k, int size)
{
    int n = (size - k % size);
    reverse(nums, 0, n - 1);
    reverse(nums, n, size - 1);
    reverse(nums, 0, size - 1);
}

int main()
{
    // int a[] = {2, 4, 5, 6, 2, 3, 4, 5};
    int a[] = {2, 4, 5, 6, 7, 3, 9, 15};
    int size = 8;
    printArray(a, 8);
    // rotateArray(a, size);

    reverse(a, 0, size - 1);
    printArray(a, size);
    // int flag = findDuplicate(a, size);
    // if (flag == 1)
    // {
    //     printf("Duplicate Found \n");
    // }
    // else
    // {
    //     printf("No Duplicate Found \n");
    // }

    return 0;
}