#include "etherCalculator.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	int accept;
	do{
			menu();
			printf("Would you want to do another operation?If you want please type 1 : ");
			scanf("%d",&accept);
	}
	while(accept==1);
	printf("\nThanks for using our service dear costumer");
	return 0;
}
