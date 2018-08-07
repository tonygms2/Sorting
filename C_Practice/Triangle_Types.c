#include <stdio.h>
#include<math.h>
int shift(char a);
int main() {
  char input[20];
  scanf("%s",input);
  printf("%c",(char)shift(input));
  return 0;
}

int shift(char *a){
  int b;
  b = a+3;
  return b;
}
