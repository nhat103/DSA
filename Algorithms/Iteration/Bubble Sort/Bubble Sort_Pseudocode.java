void bubbleSort(int array[], int size)
{
    int i, j;
    for (i = 0; i < size-1; i++) {
        for (j = i+1; j < size ; j++) {
            if (array[i] > array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }
}
