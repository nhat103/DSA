/*c program Merge two sorted arrays*/
#include <stdio.h>

void mert(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    // get all element 2 array and store to arr3
    // becase conddition while (i < n1 && j < n2) dont get all arr2 if arr2>arr1
    while (i < n1)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < n2)
    {
        arr3[k++] = arr2[j++];
    }
}

int main()
{

    // diver code
    int array1[] = {1, 3, 6, 10, 16, 17, 18};
    int array2[] = {2, 5, 11};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);
    int arr3[n1 + n2];
    mert(array1, n1, array2, n2, arr3);
    // return array mert = {1,2.....25};
    for (int k = 0; k < n1 + n2; k++)
    {
        printf("%d  ", arr3[k]);
    }
}
