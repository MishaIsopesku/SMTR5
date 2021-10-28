#include <stdlib.h>
#include <stdio.h>
unsigned num(unsigned n, unsigned m) {
return n > m? n * num(n - 1, m) : 1;
}
unsigned den(unsigned n) {
return n? n * den(n - 1) : 1;
}
int main(void) {
unsigned a = 30, b = 3;
unsigned x = num(a, a - b) / den(b);
printf("Кількість способів: %u\n", x);

return 0;
}