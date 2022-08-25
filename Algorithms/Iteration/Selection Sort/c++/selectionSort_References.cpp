/*C++ Program for Selection Sort Algorithm*/
#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void selectionSort(int array[], int size)
{
    int i, j, min_index;
    for(i=0; i< size-1; i++) {
        min_index = i;
        for(j = i+1; j<size; j++) {
            if(array[min_index]> array[j])
                min_index = j;
        }

       /* int temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
        */
        swap(array[min_index], array[i]);
    }
}

void printArray(int array[], int size)
{
    for(int i = 0; i< size; i++) {
        cout << array[i] << "  ";
        // cout << endl;
    }
    cout << endl;
}

int main()
{
    int data[] = {64, 12, 22, 25, 11, 23, 100, 99};
    int size = sizeof(data)/sizeof(data[0]);
    selectionSort(data, size);
    printArray(data, size);
    // return 0;
}
