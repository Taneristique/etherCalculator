#include "etherCalculator.h"
void menu(){
	printf("Eth Calculator by TaNeRisTique\n******************************\n");
	printf("1.Ether to Wei\n2.Wei to Eth\n3.Ether to Gwei\n4.Gwei to Eth\n");
	printf("Please chose the operation as writing its index as integer : ");
	int selection;
	double eth,gwei,wei;
	scanf("%d",&selection);
	switch(selection){
		case 1:
			printf("Type Ether Value : ");
			scanf("%lf",&eth);
			double ethToWei=eth_to_wei(eth);
			printf("\nIt does %.f wei\n",ethToWei);
			break;
		case 2:
			printf("Type Wei Value :   ");
			scanf("%lf",&wei);
			double weiToEth=wei_to_eth(wei);
			printf("\nIt does %.18f eth\n",weiToEth);
			break;
		case 3:
			printf("Type Ether Value : ");
			scanf("%lf",&eth);
			double ethToGwei=eth_to_gwei(eth);
			printf("\nIt does %.f gwei\n",ethToGwei);
			break;
		case 4:
			printf("Type Gwei Value :  ");
			scanf("%lf",&gwei);
			double gweiToEth=gwei_to_eth(gwei);
			printf("\nIt does %.18f eth\n",gweiToEth);
			break;
		default:
			printf("Please give an integer between 1 and 4\n\n",gweiToEth);
			menu();
			break;
	}
	
	

}
