#include <stdio.h>
#include <math.h>

int main() {
	//Deklarasi variabel untuk menyimpan panjang sisi
	float alas = 4.0, tinggi = 5.0, miring;
	
	//Menghitung panjang sisi miring menggunakan rumus phytagoras 
	miring = sqrt((alas*alas)+(tinggi*tinggi));
	
	//Menampilkan hasil panjang sisi miring
	printf("panjang sisi miring segitiga adalah %.2f cm", miring);
	
	return 0; 
}
