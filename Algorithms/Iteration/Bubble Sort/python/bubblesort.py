# program for Bubble Sort for python
def bubble_Sort(array, size):
    for i in range(size-1):
        for j in range(i+1, size):
            if array[i] > array[j]:
                (array[i], array[j]) = (array[j],array[i])

data = [3, 11, 23, 6, 1, 15]
size = len(data)
bubble_Sort(data,size)
print(data)
