package javacode.sort;

public class Mertsort {

	public void mert(int arr[], int left, int middle, int right) {
		int i, j, k;
		middle = left + (right - left) / 2;
		int n1 = middle - left + 1;
		int n2 = right - middle;
		int L[] = new int[n1];
		int R[] = new int[n2];

		for (i = 0; i < n1; i++) {
			L[i] = arr[left + i];
		}

		for (j = 0; j < n2; j++) {
			R[j] = arr[middle + j + 1];
		}
		i = 0;
		j = 0;
		k = left;
		while (i < n1 && j < n2) {

			if (L[i] < R[j]) {
				arr[k++] = L[i++];

			} else {
				arr[k++] = R[j++];

			}

		}

		while (i < n1) {
			arr[k++] = L[i++];

		}

		while (j < n2) {
			arr[k++] = R[j++];

		}

	}

	public void mertSort(int arr[], int left, int right) {
		int middle = left + (right - left) / 2;
		if (right > left) {
			mertSort(arr, left, middle);
			mertSort(arr, middle + 1, right);
			mert(arr, left, middle, right);
		}

	}
	 static void printArray(int arr[])
	    {
	        int n = arr.length;
	        for (int i = 0; i < n; ++i)
	            System.out.print(arr[i] + " ");
	        System.out.println();
	    }

	public static void main(String[] args) {

		int data[] = { 3, 11, 15, 1, 23, 6 };
		Mertsort mertsort = new Mertsort();
		mertsort.mertSort(data, 0, data.length - 1);
		printArray(data);

	}

}
