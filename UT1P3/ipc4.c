#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
void factorial(int numero){
	int fact = 1;
	for (int c = 1; c <= numero; c++){
        fact = fact * c;
    }
	printf("el factorial de %d es %d", numero, fact);
}

void pipe1(){
	srand(time(NULL));
	int n = rand() % 11;
	char numChar[3];
	sprintf(numChar, "%d", n);
	numChar[2] = '\n';
	int  fp;
	fp = open("FIFO1",1);
	write(fp,numChar,sizeof(numChar));
	close(fp);
}

void pipe2(){
	int  fp;
	fp = open("FIFO2",1);
	srand(time(NULL));
		char numChar[2];
		int n = rand() % 11;
		sprintf(numChar, "%d", n);
		write(fp,numChar,sizeof(numChar));
	close(fp);
}

void padre(){
	pipe1();
}

void hijo(){
	int cont = 0;
	char numero[2];
	int  fp;
	int  p,  leidos;
	char buffer[10];
	p=mkfifo("FIFO1",  S_IFIFO|0666);
	fp = open("FIFO1", 0);
	do{
		leidos=read(fp,buffer,1)	;
		if (buffer[0] >= '0' && buffer[0] <= '9'){
			numero[cont] = buffer[0];
			cont++;
		}
	}while(leidos != 0);
	int n;
	sscanf(numero,"%d",&n);
	factorial(n);
	close(fp); 
}

int main()
{
	pid_t pid;
	pid = fork();
	if(pid==0){
		wait(NULL);
		hijo();	
	}else {
		padre();
	}	
	return 0;
}