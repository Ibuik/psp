#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void main()
{
  printf("Alexander Cristopher Berenguel Vivanco");
  printf("\n\tEl proceso se está ejecutando en la terminal:");
  printf("%d",system("ls -sl /home/alumno/Descargas"));
  sleep(30);
  printf("\n\tInformación del proceso");
  printf("\nFin de programa....\n");
}
