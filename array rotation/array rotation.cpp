#include<iostream>
using namespace std;
int main() {
	int arr[] = { 1,2,3,4,5,6,7 };
	int temp[7] = {0};
	int d;
	cin >> d;
	/* NAIVE APPROACH
	int k = 0;
	for (int i = d; i < 7; i++) {
		temp[k] = arr[i];
		k++;
	}
	for (int i = 0; i < d; i++) {
		temp[k] = arr[i];
		k++;
	}
	
	for (int i = 0; i < 7; i++) {
		arr[i] = temp[i];
	}
	for (int i = 0; i < 7; i++) {
		cout << arr[i] << " ";
	}
	*/
	/* POINTER APPROACH 
	int p = 1;
	while (p <= d) {
		int last = arr[0];
		for (int i = 0; i < 6; i++) {
			arr[i] = arr[i + 1];

		}
		arr[6] = last;
		p++;
	}
	for (int i = 0; i < 7; i++) {
		cout << arr[i] << " ";
	}
	*/


}