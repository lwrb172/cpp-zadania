#include <cstdio>

void show_elements(float arr1[], int n, int arr2[], int m) {
	for(int i{0}; i < m; ++i) {
		if(arr2[i] <= n) {
			printf("[%d]=%0.1f ", arr2[i], arr1[arr2[i]]);
		} else {
			printf("[%d]=NAN ", arr2[i]);
		}
	}
	printf("\n");
}

int main() {
	float arr1[5] = {2.3, 3.1, 0.5, 3.4, 5.2};
	int arr2[5] = {4, 1, 3, 9, 1};

	show_elements(arr1, 5, arr2, 5);

	return 0;
}
