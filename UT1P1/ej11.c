#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void main()
{
  printf("Alexander Cristopher Berenguel Vivanco");
  printf("\nEl proceso se está ejecutando en la terminal:");
  printf("%d",system("ls -sl /home/alumno/Descargas"));
  printf("\nInformación del proceso");
  printf("%d",system("ps -e|grep ej11"));
  printf("\nMe voy a dormir 1 minuto");
  sleep(60);
  printf("%d",system("ps -ef | grep ej11"));
  printf("\nFin de programa....\n");
  exit(0);
}

