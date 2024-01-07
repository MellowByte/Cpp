#include<stdio.h>
#include<string.h>

int main(){
	char str[30];
	
	scanf("%[^\n]", str);
	getchar();
	
	int panjang = strlen(str);
	
	for(int i = 0; i < panjang; i++){
		 //ASCII
		if(str[i] >= 'a' && str[i] <= 'z'){ 
			str[i] -= 32;
		}
	}
	printf("%s",str);
	


	//atau
//	printf("%s", strupr(str));
//	printf("%s", strlwr(str));
//	
	return 0;
}
