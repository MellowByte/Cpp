#include<stdio.h>

int main() {
	//for, while, do while
	//continue break
//	
//	for(int i = 1;i<=10;i+=2) {
//		if(i == 5) continue;
//		printf("%d\n", i);
//	}
	
//	int j= 1;
//	while(j <= 10) {
//		printf("%d\n",j++);
//	}
//	
//	int k = 10;
//	do{
//		printf("%d\n", k++);
//	}while(k <= 10);
	
	
	int size =10;
	scanf("%d", &size);
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			if(i ==0 || j ==0 || j == size-1 || i == size-1){
				printf("*");
			}
			else {
				printf(" ");
			}
			
		}
		printf("\n");
	}
	
	return 0;
}
