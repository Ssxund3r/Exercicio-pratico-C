#include <stdio.h>

int main ()
{
   int X, Y;
   printf("Digite dois numeros:\n");
   scanf("%d", &X);
   scanf("%d", &Y);

     while (X != Y) {
     if (X < Y){
     printf("CRESCEMTE\n");
}
     else {
     printf("DECRESCENTE\n");
}
   printf("Digite outros dois nuemros:\n");
   scanf("%d", &X);
   scanf("%d", &Y);
}
  return 0;
}
