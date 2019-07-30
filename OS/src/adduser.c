// Author: Matthew Dean.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char string[26];
	int i;
	
	int FileExists() {
		FILE *fp=fopen("users.txt", "r");
		if(fp) {
			// File exists.
			printf("File exists.\n");
			fclose(fp);
		}
		else {
			// File doesn't exist.
			printf("File does not exist.\n");
			FILE *fpnew;
			fpnew=fopen("users.txt", "w");
			fprintf(fpnew, "root\n");
			fclose(fpnew);
		}
	}
	FileExists();
	
	printf("What is your name? ");
	scanf("%s", string);
	printf("\nYour name is: %s.\n", string);
	/*while(fscanf(fp, "%s", string) != EOF) {
		if(strcmp("%s", string) == 0) {
			printf("FOUND!\n");
		}
		else {
			printf("NOT FOUND!\n");
		}
	}*/
	//fclose(fp);
	
	FILE *fp2;
	fp2=fopen("users.txt", "a+");
	fprintf(fp2, "%s\n", string);
	fclose(fp2);
	return 0;
}
