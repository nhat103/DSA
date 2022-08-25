#include <stdio.h>
void mertsubarray(int arr[], int l, int m, int r)
{

    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }

    for (j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k++] = L[i++];
    }
    while (j < n2)
    {
        arr[k++] = R[j++];
    }
}

void mertsort(int arr[], int l, int r)
{
    if (r > l)
    {
        int m = l + (r - l) / 2;
        mertsort(arr, l, m);
        mertsort(arr, m + 1, r);
        mertsubarray(arr, l, m, r);
    }
}

void printfArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
}

int main()
{
    int data[] = {3, 23, 11, 15, 1, 6};
    int size = sizeof(data) / sizeof(data[0]);
    printf("array befor sort:\n");
    printfArray(data, size);
    mertsort(data, 0, size - 1);
    printf("\narray after sort:\n");
    printfArray(data, size);

    return 0;
}
