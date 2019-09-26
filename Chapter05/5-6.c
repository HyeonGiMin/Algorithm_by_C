#include <stdio.h>

// no= 옮겨야할 원반의 개수 x=시작 기둥의 번호, y=목표 기둥의 번호
void move(int no,int x ,int y){
    if(no>1){
        move(no-1,x,6-x-y) ;//그룹을 시작기둥에서 중간기둥으로
    }
    printf("원반[%d]를(을)%d 기둥에서 %d 기둥으로 옮김\n",no,x,y);

    if(no>1){
        move(no-1,6-x-y,y);  //그룹을 중간기둥에서 목표기둥으로
    }
}

int main(void){
    int n;
    printf("하노이의 탑 \n 원반 개수 : ");
    scanf("%d",&n);
    move(n,1,3);

    return 0;
}
