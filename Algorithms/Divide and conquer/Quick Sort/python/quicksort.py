# Python program for quick sort
def partition(array,low,high):
    pivot = array[high]
    i = low -1
    for j in range(low,high):
        if array[j] < pivot:
            i=i+1
            # swap array[i] & array[j]
            (array[i],array[j]) = (array[j],array[i])
    # swap array[i+1] & array[high]
    (array[i+1],array[high])=(array[high],array[i+1])
    return i +1
def quickSort(array,low,high):
    if low < high:
        pi = partition(array,low,high)
        quickSort(array,low,pi-1)
        quickSort(array,pi+1,high)

data = [3, 11, 23, 6, 1, 15]
size = len(data)
quickSort(data,0,size -1)
print(data)
