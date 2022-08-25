/* C program for Selection Sort Algorithms*/

#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void SelectionSort(int array[],int size)
{
    int i, j, min_index;
    for(i = 0; i< size - 1; i++)
    {
        min_index = i;
        for(j = i+1 ; j < size ; j++)
        {
            if(array[min_index] > array[j])
                min_index = j;
        }

        swap(&array[i], &array[min_index]);

    }
}


void printArray(int array[],int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d  ",array[i] );
    }
}

int main()
{
    int data[] = {3, 11, 23, 6, 1, 15};
    int size = sizeof(data)/sizeof(data[0]);
    SelectionSort(data,size);
    printArray(data, size);
}
