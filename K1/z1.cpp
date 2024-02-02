#include <cstdio>

int main() {
	int r, h;
	const float PI = 3.1415;

	scanf("%d %d", &r, &h);
	
	if(r == 0 || h == 0) 
		printf("Bledne dane\n");
	
	float v = (PI * (r * r) * h) / 3;

	printf("%f\n", v);

	return 0;
} 
	
	
