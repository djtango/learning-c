#include <stdio.h>

void forLoop() {
  for(int i = 0; i < 5; i++) {
    puts("Hello World!");
  };
}

void whileLoop() {
  int i = 0;
  while(i < 5) {
    puts("World, Hello!");
    i++;
  };
}

void nHelloWorlds(int n) {
  for(int i = 0; i < n; i++) {
    puts("nHello World!");
  };
}

int main(int argc, char** argv) {
  forLoop();
  whileLoop();
  nHelloWorlds(3);
    return 0;
}
