#include "stack.h"

int compute_polish_expression (char *c) {
  Stack *s = create(strlen(c));
  for(int i = 0; c[i] != '\0'; i++){
  }
}

int main () {
  char *c = "9 0 1 + 2 3 * * +";
  printf("Resultado: %d\n", compute_polish_expression(c));
  return 0;
}
