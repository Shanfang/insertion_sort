#include <iostream>

using namespace std;
void insertionSort(int *&arr, int size);
int main() {
	int N;
	cin >> N;
	int input;
	int *arr;
    arr = new int[N] ;
	
	//get user input for the array
	for(int i = 0; i < N; i++) {
		cin >> input;
		arr[i] = input;
	}

    //sort the array
	insertionSort(arr, N);

	//print out the sorted array
	for(int i = 0; i < N; i++) {
		cout << arr[i] << endl;
	}

	delete[] arr;
	return 0;
}

void insertionSort(int *&arr, int size) {
	int j, num;
	for(int i = 1; i < size; i++) {
		num = arr[i];
		j =i-1;
		while(arr[j] > num && j >=0) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = num;
	}
}
