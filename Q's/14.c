#include <stdio.h>
#include <ctype.h>

int main() {
  char c;

  printf("Enter a character: ");
  scanf("%c", &c);

  if (isupper(c)) {
    printf("The character is a capital letter.\n");
  } else if (islower(c)) {
    printf("The character is a small letter.\n");
  } else if (isdigit(c)) {
    printf("The character is a digit.\n");
  } else {
    printf("The character is a special symbol.\n");
  }

  return 0;
}
