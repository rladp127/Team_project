#include "manager.h"

void listInfo(Car *slist, int count){
 printf("\nNo\tName\tCar Name\tlocation\tprice\tRental Time\tRental Type(왕복:1, 편도:0)\n");
 printf("==================================================================================\n");
 for(int i =0; i <count ; i++){
     printf("%2d ", i+1);
     readInfo(slist[i]);
     }
 printf("\n");
}

int selectDataNum(Car *s, int count){
 int num;
 listInfo(s, count);
 printf("번호는 (취소 :0)? ");
 scanf("%d", &num);
 return num;
}

