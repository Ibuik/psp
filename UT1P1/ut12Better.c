#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void main()
{
	pid_T pid;
    int mipid=getpid();
    int dni[8]={1,2,3,4,5,6,7,8};

    printf("Cristopher\n");

    for(int i=0; i<((sizeof(dni)/sizeof(dni[0]))); i++){
        printf("%d",dni[i]);
    }

    printf("\n4 ultimas cifras del dni %d%d%d%d\n", dni[4],dni[5],dni[6],dni[7]);
    printf("durmiendo 2 mins\n");
    sleep(120);
}