function bubbleSort(array, size){
  for(let i=0; i<size-1; i++){
    for(let j= i+1;j< size;j++){
      if (array[i]>array[j]) {
        // swap array[i] & array[j]
        let temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
  }

  let data =[23,11,6,15,1,3];
  let size = data.length;
  bubbleSort(data,size);
  console.log(data);
