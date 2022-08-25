
def selection_sort(array, size):
    for i in range(0, size - 1):
        min_index = i
        for j in range(i + 1, size):
            if array[min_index] > array[j]:
                min_index = j
        # swap array[i] & array[min_index]
        (array[min_index], array[i]) = (array[i], array[min_index])


data = [3, 11, 23, 6, 1, 15]
size = len(data)
selection_sort(data, size)
print(data)
