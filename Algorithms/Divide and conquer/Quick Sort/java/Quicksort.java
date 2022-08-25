package javacode.sort;

import java.util.Arrays;

public class Quicksort {

	int partition(int array[], int low, int high) {
		int pivot = array[high];
		int i = (low - 1);
		for (int j = low; j < high; j++) {
			if (array[j] <= pivot) {
				i++;
				// swap array[i] & array[j]
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}

		}
		// swap array[i+1] & array[high]
		int temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;

		return (i + 1);
	}

	public void quicksort(int array[], int low, int high) {
		if (low < high) {
			int pi = partition(array, low, high);
			quicksort(array, low, pi - 1);
			quicksort(array, pi + 1, high);
		}
	}

	public static void main(String[] args) {
		int[] data = { 3, 11, 23, 6, 1, 15 };
		int size = data.length;
		Quicksort quick_sort = new Quicksort();
		quick_sort.quicksort(data, 0, size - 1);
		System.out.println(Arrays.toString(data));
	}
}
