#include <cstdio>

void dyadic(int vec1[], int vec2[], int n) {
	int arr[n][n];
	for(int i{0}; i < n; ++i) {
		for(int j{0}; j < n; ++j) {
			arr[i][j] = vec1[i] * vec2[j];
			printf("%d ", arr[i][j]);
		}
	}
	printf("\n");
}

int main() {
	int n = 3;
	int vec1[n] = {1, 2, 3};
	int vec2[n] = {3, 2, 1};
	
	dyadic(vec1, vec2, n);

	return 0;
}
