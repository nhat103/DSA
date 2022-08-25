fun mertArray(int array[],int left,int middle,right){
    int i,j,k;
    n1 = middle -left +1;
    n2 = right -middle
    int L[n1], R[n2];
    for(i=0;i<n1;i++){
        L[i] = array[l+i];
    }

    for(j=0;j<n2;j++){
        R[j] = array[middle+1+j]
    }
    i= 0;
    j=0;
    k=l;
    while(i<n1){
        array[k++] = L[i++];
    }

    while(j<n2){
        array[k++] = R[j++];
    }
}
fun mertSort(int array[],int left, int right){
    int middle = left + (right-left)/2;

   if(right>left){
    mertSort(array,left,middle);
    mertSort(array,middle+1,right);
    mertArray(LeftArray,RightArray)
   }
}
