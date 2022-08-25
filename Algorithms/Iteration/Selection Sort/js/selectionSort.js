function selectionSort(inputArray){
  let n = inputArray.length;
  for(let i = 0; i<n-1; i++){
    let min_idex = i;
    for(let j = i+1;j<n; j++){
      if(inputArray[min_idex]> inputArray[j]){
        min_idex = j;
      }
    }
    let temp = inputArray[min_idex];
    inputArray[min_idex] = inputArray[i];
    inputArray[i] = temp;
  }

}

let data = [3, 11, 23, 6, 1];
selectionSort(data);
console.log(data);


