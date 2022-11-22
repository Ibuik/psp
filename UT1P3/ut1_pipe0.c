#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h> 

void main(){
	
	/*Arraya para almacenar descriptores del fichero, 0 = lectura y 1 = escritura*/
     int fd[2]; 
     char buffer[30];
     pid_t pid;
    
     // Creamos el pipe
     pipe(fd); 
     
     //Se crea un proceso hijo
     pid = fork();

     if (pid==0)
     
     {
		 		close(fd[0]); // Cierra el descriptor de lectura
                printf("El hijo escribe en el PIPE...\n");
                write(fd[1], "Hola padre", 15);
                 
         
     
     }
     
     else
     
     {
                close(fd[1]); // Cierra el descriptor de escritura
                printf("El padre se dispone a leer del PIPE \n");
                read(fd[0], buffer, 15);
                printf("\t Mensaje leido del pipe: %s \n", buffer);
		 		
     }
     
        
}
