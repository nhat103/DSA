#include <iostream>
using namespace std;

void mertArray(int arr[], int left, int middle, int right)
{
    int i, j, k;
    middle = left + (right - left) / 2;
    int n1 = middle - left + 1;
    int n2 = right - left;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = arr[middle + 1 + j];
    }

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] < R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
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

void mertSort(int arr[], int left, int right)
{
    int middle = left + (right - left) / 2;
    if (right > left)
    {
        mertSort(arr, left, middle);
        mertSort(arr, middle + 1, right);
        mertArray(arr, left, middle, right);
    }
}
void printfSArray(int A[], int sise)
{
    for (int i = 0; i < sise; i++)
    {
        cout << A[i] << " ";
    }
}
int main()
{
    int data[] = {15, 6, 1, 11, 3, 23};
    int size = sizeof(data) / sizeof(data[0]);

    cout << "\narray befor sort : ";
    printfSArray(data, size);

    mertSort(data, 0, size - 1);

    cout << "\narray after sort : ";
    printfSArray(data, size);
    cout << endl;
    return 0;
}