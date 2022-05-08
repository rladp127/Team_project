#include "car.h"

int selectMenu(){
int menu;
 printf("\n*** 렌터카 서비스 ***\n");
 printf("1. 조회\n");
 printf("2. 추가\n");
 printf("3. 수정\n");
 printf("4. 삭제\n");
 printf("0. 종료\n\n");
 printf("=> 원하는 메뉴는? ");
 scanf("%d", &menu);
return menu;
}

int createInfo(Car *s1){
    printf("사용자 이름은? ");
    scanf("%s",s1->productName);
    printf("차 이름은? ");
    scanf("%s",s1->weight);
    printf("가격은? ");
    scanf("%d",&s1->price);
    printf("대여유형은? (왕복:1, 편도:0)");
    printf("=> 추가됨!");
    return 1;
}


int updateProduct(Car *s1){
    printf("사용자 이름은? ");
    scanf("%s",s1->productName);
    printf("차 이름은? ");
    scanf("%s",s1->weight);
    printf("가격은? ");
    scanf("%d",&s1->price);
    printf("대여유형은? (왕복:1, 편도:0)");
    printf("=> 수정됨!");
    return 1;
}




