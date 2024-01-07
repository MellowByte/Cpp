#include<stdio.h>

int main(){
	
	
	//Filebase
	
	//read, write, append
	//r -> read
	//w -> write
	//a -> append
	//r+ -> read,write
	//w+ => read,write
	
	//open, process, close
	
	char txt[200];
	FILE *fp;
	
	fp = fopen("data.txt", "a+");
	
	fprintf(fp, "123");
	rewind(fp);
	fscanf(fp, "%[^\n]", txt);
	printf("%s", txt);
	
	
	fclose(fp);
	
	
	return 0;
}
