/*Program for bubble sort in java*/
package javacode.sort;

import java.util.Arrays;

public class Bubblesort {

	public void bubble_sort(int array[], int size) {
		int i, j;
		for (i = 0; i < size - 1; i++) {
			for (j = i + 1; j < size; j++) {
				if (array[i] > array[j]) {
					// swap array[i] & array[j]
					int temp = array[i];
					array[i] = array[j];
					array[j] = temp;

				}
			}

		}

	}

	public static void main(String[] args) {
		int[] data = { 3, 11, 23, 6, 1, 15 };
		Bubblesort bubblesort = new Bubblesort();
		int size = data.length;
		bubblesort.bubble_sort(data, size);
		System.out.println(Arrays.toString(data));
	}

}
