#include "car.h"

int main(){
    Car slist[20];
    int count = loadData(slist);
    int index = count;
    int menu;
    while (1) {
        menu = selectMenu();
        if (menu == 0) {
            printf("종료됨!");
            break;
        }
        if (menu == 1) {
            if (count > 0) 
                listProduct(slist, index);
            
            continue;
        } else if (menu == 2) {
            count += createProduct(& slist[index ++]);
            continue;
        } else if (menu == 3) {
            int no = selectDataNum(slist, index);
            if (no == 0) {
                printf("=> 취소됨!\n");
                continue;
            }
            updateProduct(& slist[no - 1]);
            continue;
        } else if (menu == 4) {
            int no = selectDataNum(slist, index);
            if (no == 0) {
                printf("=> 취소됨!\n");
                continue;
            }
            int deleteok;
            printf("정말로 삭제하시겠습니까?(삭제 :1)");
            scanf("%d", & deleteok);
            if (deleteok == 1) {
                if (deleteProduct(& slist[no - 1])) {
                    count --;
                    printf("=> 삭제됨!\n ");
                };
                continue;
            }
        }
    }
    return 0;
}
