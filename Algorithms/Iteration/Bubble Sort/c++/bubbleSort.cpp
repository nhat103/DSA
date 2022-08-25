/*Program for bubble sort in c++*/
#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void bubbleSort(int array[],int size)
{
    int i,j;
    for(i=0; i<size -1; i++) {
        for(j = i+1; j<size; j++) {
            if(array[i]>array[j])
                swap(array[i],array[j]);

        }
    }
}

void printArray(int array[],int size)
{
    for(int i =0; i<size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int data[] = {3, 11, 23, 6, 1, 15};
    int size = sizeof(data)/sizeof(data[0]);
    bubbleSort(data,size);
    printArray(data,size);

}
