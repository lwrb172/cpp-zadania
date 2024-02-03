#include <cstdio>
#include <cmath>

void sequence(float arr[], int n) {
	float prev = 0;

	for(int i{0}; i < n; ++i) {
		float curr = pow(-1, i+1) * arr[i] + prev;
		printf("%f ", curr);
		prev = curr;
	}
	
	printf("\n");			
}

int main() {
	int n;

	scanf("%d", &n);

	if(n >= 20) {
		printf("Enter a number lower than 20");
		return 1;
	}

	float arr[n];
	
	for(int i = 0; i < n; ++i) {
		scanf("%f", &arr[i]);
	}

	sequence(arr, n);

	return 0;
}	
