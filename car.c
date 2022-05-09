#include "car.h"

int selectMenu(){
int menu;
 printf("\n*** ·»ÅÍÄ« ¼­ºñ½º ***\n");
 printf("1. Á¶È¸\n");
 printf("2. Ãß°¡\n");
 printf("3. ¼öÁ¤\n");
 printf("4. »èÁ¦\n");
 printf("5. ´ë¿© ½Ã°£ °è»ê\n");
 printf("6. °¡°Ý °è»ê\n");
 printf("0. Á¾·á\n\n");
 printf("=> ¿øÇÏ´Â ¸Þ´º´Â? ");
 scanf("%d", &menu);
return menu;
}

int createInfo(Car *s1){
    printf("»ç¿ëÀÚ ÀÌ¸§Àº? ");
    scanf("%s",s1->name);
    printf("Â÷ ÀÌ¸§Àº? ");
    scanf("%s",s1->carName);
    printf("¸ñÀûÁö´Â? ");
    scanf("%s",s1->location);
    printf("°¡°ÝÀº? ");
    scanf("%d",&s1->price);
    printf("´ë¿©À¯ÇüÀº? (¿Õº¹:1, Æíµµ:0) ");
    scanf("%d",&s1->rentalType);
    printf("´ë¿©½Ã°£Àº? (´ÜÀ§: ºÐ)");
    scanf("%d",&s1->rentalTime);
    printf("=> Ãß°¡µÊ!");
    return 1;
}

void readInfo(Car * s) {
    printf("%13s %14s %20s %10dì› %12dë¶„ %14d\n",s->name, s->carName, s->location, s->price, s->rentalTime, s->rentalType);

}

int updateInfo(Car *s1){
    printf("»ç¿ëÀÚ ÀÌ¸§Àº? ");
    scanf("%s",s1->name);
    printf("Â÷ ÀÌ¸§Àº? ");
    scanf("%s",s1->carName);
    printf("¸ñÀûÁö´Â? ");
    scanf("%s",s1->location);
    printf("°¡°ÝÀº? ");
    scanf("%d",&s1->price);
    printf("´ë¿©À¯ÇüÀº? (¿Õº¹:1, Æíµµ:0) ");
    scanf("%d",&s1->rentalType);
    printf("´ë¿©½Ã°£Àº? (´ÜÀ§: ºÐ)");
    scanf("%d",&s1->rentalTime);
    printf("=> ¼öÁ¤µÊ!");
    return 1;
}

int deleteInfo(Car *s) {
    s->rentalTime=-1;
    s->price=-1;
    s->rentalType=-1;
    printf("==> ì‚­ì œë¨!\n");
    return 0;

}

void calculateTime(){
    
    char startTime[20],tmpstTime[20]="";
    char tmpMin[2]="";
    char buf[3]={0};
    int rentalTime;
    int hr,min,totalMin,resMin,resHr;
    totalMin=0;
    printf("´ë¿© ½ÃÀÛ½Ã°¢À» ÀÔ·ÂÇÏ¼¼¿ä(ex.16:00)\n");
    scanf("%s",startTime);
    strcpy(tmpstTime,startTime);
    printf("%s\n",tmpstTime);
    printf("´ë¿© ½Ã°£À» ÀÔ·ÂÇÏ¼¼¿ä(´ÜÀ§:ºÐ)\n");
    scanf("%d",&rentalTime);
    char *ptr = strtok(startTime, ":");  
    hr=atoi(ptr);
    totalMin+=hr*60;          
    ptr = strtok(NULL, ":");
    min=atoi(ptr);
    totalMin+=min;
    totalMin+=rentalTime;
    if(totalMin>=1440){
        totalMin-=1440;
    }
    resHr=totalMin/60;
    resMin=totalMin%60;
    itoa(resMin,buf,10);
    if(resMin<10){
        strcat(tmpMin,"0");
    }
    printf("´ë¿© ½Ã°£Àº %s ",tmpstTime);
    strcat(tmpMin,buf);
    printf("~ %d:%s ÀÔ´Ï´Ù\n",resHr,tmpMin);    
}

void calculatePrice(Car slist){
    int tprice=(slist.price)*(slist.rentalTime);
    printf("ÃÑ°¡°ÝÀº: %d¿ø ÀÔ´Ï´Ù.\n",tprice);
}

void searchByName (Car *slist, int count){
    int scnt = 0;
    char search[20];

    printf("");
    scanf("%s", search);
 
    printf("\nNo\tName\tCar Name\tprice\tRental Time\tRental Type\n");
    printf("====================================================\n");
    for (int i = 0; i < count; i++){
        if (slist[i].price == -1) continue;
        if (strstr(slist[i].name, search)){
            printf("%2d", i+1);
            readInfo(slist[i]);
            scnt++;
        }
    }
    if (scnt == 0) printf("");
    printf("\n");
}

void searchByModel (Car *slist, int count){
    int scnt = 0;
    char search[20];

    printf("");
    scanf("%s", search);

    printf("\nNo\tName\tCar Name\tprice\tRental Time\tRental Type\n");
    printf("====================================================\n");
    for (int i = 0; i < count; i++){
        if (slist[i].price == -1) continue;
        if (strstr(slist[i].carName, search)){
            printf("%2d", i+1);
            readInfo(slist[i]);
            scnt++;
        }
    }
    if (scnt == 0) printf("");
    printf("\n");
}
void searchByTime (Car *slist, int count);

