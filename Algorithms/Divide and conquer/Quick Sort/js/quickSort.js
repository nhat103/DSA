function partion(array, low, high){
const pivot = array[high];// const vs let what is diffrent
let i = low -1;
for(let j =low;j <high;j++){
  if(array[j]<=pivot){
    i++;
    let temp = array[i];
    array[i] = array[j];
    array[j] = temp;

  }
}
let temp = array[i+1];
array[i+1] = array[high];
array[high] = temp;

return i+1;

}

function quickSort(array, low, high){
  if (low < high) {
    let pi = partion(array, low, high);
    quickSort(array, low, pi -1);
    quickSort(array, pi+1, high);
  }
}

let data = [3, 11, 23, 1, 6];
let size = data.length;
quickSort(data,0,size - 1);
console.log(data);
