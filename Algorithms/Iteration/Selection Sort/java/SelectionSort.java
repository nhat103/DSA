/* C program for Selection Sort Algorithm*/

package javacode.sort;

import java.util.Arrays;

public class Selectionsort {
	
	public  void selectSort(int array[]) {
		int i,j, min_index;
		int n = array.length;
		
		for (i = 0; i < n-1; i++) {
			min_index = i;//one assignment 
			for (j = i+1; j < n; j++) {
				if(array[min_index]>array[j]) //one comparison 
					min_index = j;		// and one assignment	
			}
			// after each for loop for j swap array[i] & array[min_index]
			// and one swap
			int temp = array[min_index];
			array[min_index]= array[i];
			array[i] = temp;
		}		
	}
	
	public static void main(String[] args) {	
		int[] data = {3, 11, 23, 6, 1, 15};
		
		Selection_sort s_sorted =  new Selection_sort();
		s_sorted.selectSort(data);
		System.out.println(Arrays.toString(data));
		
	}	
}
