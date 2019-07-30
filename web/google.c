#include <stdio.h>
#include <string.h>

// Global variables.
char browser[26];
char *browserp;

void browser_detect() {
  // &client=firefox-b-ab
  printf("Enter browser type (e.g: 'firefox')\n");
  scanf("%s", browser);
  if (strcmp(browser, "firefox") == 0) {
      browserp = "&client=firefox-b-ab";
  } else {
    browserp = "";
  }
}

int main(void) {
  char string[26];
  char *stringp = string;
  
  browser_detect();
  
  printf("Enter URL: ");
  scanf("%s", string);
  
  int i = 0;
  for(i=0; string[i] != '\0' ;i++) {
    if(string[i]==' ') {
        string[i] = '+';
        }
    }
    for(i=0; sentence[i] != '\0' ;i++){
        pritnf("string[i]");
        }
  /*for (; *stringp; ++stringp) {
    if (*stringp == ' ') {
        *stringp = '+';
    }
}*/
  
  printf("https://www.google.com/search?q=%s", string);
  printf("%s", browserp);
  printf("&ie=utf-8&oe=utf-8");
  return 0;
}
