#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/statvfs.h>

int main(int argc, char *argv[]) {
        struct statvfs fiData;
        struct statvfs *fpData;
        char fnPath[128];
        int i;

        if(argc < 2) {
                printf("Usage, echoln (string)\n");
                printf("Type echoln --help for help.\n");
                return(2);
        }

        for(i = 1 ; i < argc; i++) {
                //printf(argv[i]) && printf("\n");
                if (strcmp(argv[i], "--help") {
                    printf("Shall help.\n");
                }
		else {
			printf("%s", argv[i]) && printf("\n");
		}
        }
}
