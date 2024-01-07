#include<stdio.h>

int main() {
//	int angka = 0;
//	
//	if(angka ==0) {
//		printf("nol");
//	}
//	else if(angka%2 == 1){
//		printf("ganjil");
//	}
//	else if(angka%2 == 0) {
//		printf("genap");
//	}

//	int angka = 3;
//	switch(angka) {
//		case 0:
//			printf("nol");
//			break;
//		case 1:
//			printf("satu");
//			break;
//		case 5:
//			printf("lima");
//			break;
//		default :
//			printf("Selain nol satu dan lima");
//	}

	int angka = 3;
	
	//kondisi ? benar : salah
//	printf("%s", (angka%2 ==0? "genap": "ganjil"));
	
	printf("%s", (angka < 2? "lebih kecil dari 2" : 
					angka > 2? "lebih besar dari 2" : "2"));
	
	return 0;
}
