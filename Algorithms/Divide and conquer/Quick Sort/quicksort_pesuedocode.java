/*Algorithm quick sort:
chose last emement of array is pivot
rerang array --all elemen smaler pivot in the leff
               all elemen greater pivot in the right

quick sort the left
quick sort the right         

*/
int partition(int arr[],int low,int high)
{
// pirov = last possition of arry
    int pivot = arr[high];
    int i = low -1;
    for(int j= low; j<high; j++) {
        if(arr[j]<=pivot) {
            i++;
            swap(arr[i],arr[j]);

        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

quickSort(int array[],int low,int high){
// find partition
if(low < high){
pi = partition(arr[],low,high);
// quickSort left
quickSort(arra[], low,pi-1);
//quickSort right
quickSort(arra, pi+1, high);
}

}
