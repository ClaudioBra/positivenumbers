#include <stdio.h>
#include <stdlib.h>

int main(){

int i=1, positivo = 0;
float n;

for (i; i<=6; i++){
printf("Valor: "); scanf("%f", &n);
if(n > 0){

positivo++;
}
}
printf("%d valores positivos\n", positivo);
return 0;
}
