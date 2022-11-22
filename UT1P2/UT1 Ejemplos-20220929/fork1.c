#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void main() {
	/*Se definen 2 variables de tipo pid_t para almacenar los pids de los procesos*/
  pid_t pid, pid_hijo;
  
  		pid = fork();
	printf("El pid del proceso hijo es %d \n",getpid());
	printf("El pid del proceso padre es %d \n",getpid());