#include<string.h>
#include<stdio.h>
typedef struct
{
char name[20];
char carName[20];
char location[20];
int rentalTime;
int price;
int rentalType;
int method;
} Car;

int selectMenu(); // 메뉴생성 함수
int createInfo(Car *slist)
int updateInfo(Car *slist)
int deleteInfo(Car *slist, int count)
void readInfo(Car *slist)
void saveData(Car *slist, int count); //제품내용을 파일로 저장하는 함수
int loadData(Car *slist); // 파일에 저장되있던 내용을 로드하는 함수
void searchByName l (Car *slist, int count);
void searchByTime (Car *slist, int count);
void searchByModel (Car *slist, int count);
void calculateTime();
void calculatePrice(Car *slist, int count);
