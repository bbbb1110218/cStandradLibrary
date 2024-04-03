#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
	if(argc !=2){
		printf("Usage: %s <fileFd>\n",argv[0]);
		return 1;
	}
	FILE *fp = fdopen(atoi(argv[1]),"r");
	if(fp == NULL){
		perror("fdopen");
		return 1;
	}
	char buf[1024];
	while(fgets(buf,sizeof(buf),fp) != NULL){
		printf("%s",buf);
	}
	fclose(fp);

}
