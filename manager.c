#include "manager.h"

void listInfo(Car *slist, int count){
 printf("\nNo\tName\tCar Name\tlocation\tprice\tRental Time\tRental Type(ìë³µ:1, í¸ë:0)\n");
 printf("==================================================================================\n");
 for(int i =0; i <count ; i++){
     printf("%2d ", i+1);
     readInfo(&slist[i]);
     }
 printf("\n");
}

int selectDataNum(Car *s, int count){
 int num;
 listInfo(s, count);
 printf("¹øÈ£´Â (Ãë¼Ò :0)? ");
 scanf("%d", &num);
 return num;
}

