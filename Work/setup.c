#include <stdio.h>
#include <stdlib.h> // Needed for : system();
#include <string.h> // Needed for : memset();

int main(void)
{
  system("ChromeStandaloneSetup64.exe");
  system("7z1900-x64.exe");
  system("vlc-3.0.7.1-win64.exe");
  
  char arg1[12] = "/silent";
  char arg2[14] = "/product=0";
  
  char str[512];
  memset(str, '\0', sizeof(512));
  sprintf(str, "AdobeAcroCleaner_DC2015.exe %s %s", arg1, arg2);
  system(str);
  
  char arg3[12] = "/product=1";
  memset(str, '\0', sizeof(512));
  sprintf(str, "AdobeAcroCleaner_DC2015.exe %s %s", arg1, arg3);
  system(str);
  
  system("AcroRdrDC1901220034_en_US.exe");
  
  return 0;
}
