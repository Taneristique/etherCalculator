#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define eth_to_wei(a)  (a*pow(10,18))
#define wei_to_eth(a)  (a/pow(10,18))
#define eth_to_gwei(a) (a*pow(10,9))
#define gwei_to_eth(a) (a/pow(10,9))
void menu();
