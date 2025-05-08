#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src){
  while(*src != '\0'){
    *dst = *src;
    src++;
    dst++;
  }
  *dst = '\0';
}
 
int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
 
  int length = strlen(srcString);
  printf("%i\n\n", length);
  
  char dstString[61];

  copy(dstString, srcString);
  printf("%s", dstString);
}


Improvements: 

char dstString[strlen(srcString) + 1];

// Loop through each character in the source string until the null terminator is reached
while(*src != '\0'){

