#include "stack.h"

int main () {
  int tam = 6;
  Stack *s = create (tam);
  Stack *aux = create (tam);
  srand(time(NULL));
  int i;
  for (i = 0; i < tam; i++) {
    push (s, rand()%10);
  }
  print (s);
  while(!empty(s)){
    if(get_peek(s) & 1)
      push(aux, pop(s));
    else {
      pop(s);
    }
  }
  while(!empty(aux))
    push(s, pop(aux));
  print(s);
  destroy(aux);
  destroy (s);
}
