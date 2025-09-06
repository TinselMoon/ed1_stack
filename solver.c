#include "stack.h"

int compute_polish_expression (char *c) {
  Stack *s = create(strlen(c));
  int result, a, b;
  for(int i = 0; c[i] != '\0'; i++){
    if(c[i] >= '0' && c[i] <= '9'){
      push(s, c[i]-48);
    }
    else{
      switch (c[i]) {
        case '+':
          a = pop(s);
          b = pop(s);
          push(s, a+b);
          break;
        case '*':
          a = pop(s);
          b = pop(s);
          push(s, a*b);
          break;
        case '-':
          a = -pop(s);
          b = pop(s);
          push(s, a+b);
          break;
        case '/':
          a = pop(s);
          b = pop(s);
          push(s, b/a);
          break;
      }
    }
  }
  result = pop(s);
  destroy(s);
  return result;
}

int main () {
  char *c = "9 0 1 + 2 3 * * +";
  printf("Resultado: %d\n", compute_polish_expression(c));
  return 0;
}
