#include<string.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct
{
char name[20];
char carName[20];
char location[20];
int rentalTime;
int price;
int rentalType;
} Car;

int selectMenu(); // 메뉴생성 함수
int createInfo(Car *slist);
int updateInfo(Car *slist);
int deleteInfo(Car *slist, int count);
void readInfo(Car *slist);
void saveData(Car *slist, int count); 
int loadData(Car *slist); 
void searchByName (Car *slist, int count);
void searchByTime (Car *slist, int count);
void searchByModel (Car *slist, int count);
void calculateTime();
void calculatePrice(Car *slist);
