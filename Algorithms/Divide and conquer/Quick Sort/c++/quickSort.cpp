/* C++ program for quick Sort*/
#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int parti(int arr[],int low,int high)
{
    // int pivot = arr[high];
    int i = low -1;
    for(int j= low; j<high; j++) {
        if(arr[j]<=arr[high]) {
            i++;
            swap(arr[i],arr[j]);

        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quicksort(int arr[],int low, int high)
{
    if(low< high) {
        int pi = parti(arr,low,high);

        quicksort(arr,low,pi -1);
        quicksort(arr,pi+1,high);
    }
}

void printArray(int arr[],int size)
{
    for(int i = 0; i<size; i++) {
        cout << arr[i] <<" ";

    }
    cout << endl;
}

int main()
{
    int data[] = {3, 11, 23, 6, 1, 15};
    int size = sizeof(data)/sizeof(data[0]);
    quicksort(data,0,size -1);
    printArray(data,size);
}
