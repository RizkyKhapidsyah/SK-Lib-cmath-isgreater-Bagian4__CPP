#include <iostream>
#include <cmath>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	// taking inputs
	int arr[] = { 5, 2, 8, 3, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (isgreater(arr[j], arr[j + 1])) {
				int k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;
			}
		}
	}

	cout << "Sorted array: ";

	for (int i = 0; i < n; i++) {
		cout << arr[i] << ", ";
	}

	_getch();
	return 0;
}
