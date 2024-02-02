#include <cstdio>
#include <cstdlib>

int str_to_int(const char* str) {
	int num = atoi(str);
	
	if(num >= 0 && num <= 65535) {
		return num;
	} else {
		return -1;
	}
}

int main() {
	const char* str = "1234";
	
	printf("%d\n", str_to_int(str));

	return 0;
} 
