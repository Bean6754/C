// This file will check the encyption method for /etc/shadow.

#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 256
#define MAX_SALT 12

int main(int argc, char *argv[]) {
    char password[MAX_STR];
    char salt[MAX_SALT];

    printf("salt: ");
    scanf("%s", salt);

    printf("password: ");
    scanf("%s", password);

    printf("Encrypt '%s' : '%s'\n", password, crypt(password, salt));

    return(EXIT_SUCCESS);
}
