#include<stdio.h>

int getNumber(){
	return 5;
}

//int sum(int first, int second){
//	int total = first + second;
//	return total;
//}

int sum(int first, int *second){
	first = 4;
	int total = first + *second;
	return total;
}

int main(){
	
	//Pointer
//	int a = 0;
//	int *p;
//	int **p2;
//	p = &a;
//	p2 = &p;
//	printf("%d\n", *p2);
//	printf("%d\n", &a);
	
	
	//Passing by value
	//Passing by reference
	
//	int a = getNumber();
//	printf("%d\n", getNumber());
//	int first = 3;
//	int second = 5;
//	int hasilSum = sum(getNumber(),second);
//	printf("%d\n", hasilSum);

	int first = 3;
	int second = 5;
	int hasilSum = sum(first, &second);
	printf("%d\n", first);
	return 0;
	
}
