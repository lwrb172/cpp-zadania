#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>

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

int bin_to_dec_rec(char bin[], unsigned int i = 0) {
	int dec = 0;
	if (i < strlen(bin)) {
		if(bin[i]  == '1') dec = pow(2, i);

		return dec + bin_to_dec_rec(bin, ++i);
	}
	
	return dec;
}
	
	

int main() {
	char bin[] = "1011";
	int bin2 = 1011;	
	printf("%d\n", bin_to_dec_rec(bin));
	
	return 0;
} 
