#include <cstdio>
#include <cstring>

int bin_to_dec(char bin[]) {
	int num = 0;
	for(int i{0}; bin[i]; ++i)
		num = (num << 1) | (bin[i] - '0');

	return num;
}

int bin_to_dec2(int binary) {
	int decimal = 0, weight = 1, rem = 0;

	while(binary != 0) {
		rem = binary % 10;
		decimal = decimal + rem*weight;
		binary = binary / 10;
		weight = weight*2;
	}

	return decimal;
}

int bin_to_dec_rec(char bin[], int i = 0) {
	int size = strlen(bin);
	if (i == size - 1) {
		return bin[i] - '0';
	}
	
	return ((bin[i] - '0') << (size - i - 1)) + bin_to_dec_rec(bin, i + 1);
}
	
	

int main() {
	char bin[] = "10010011";

	printf("%d\n", bin_to_dec_rec(bin));
	
	return 0;
} 
