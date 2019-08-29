//
// Created by Min on 2019-08-20.
//

#include <stdio.h>
#include <stdlib.h>

int search2(const int a[],int n,int key){
    int pl = 0;
    int pr = n - 1;
    int pc;

    do {
        pc = (pl + pr) / 2;
        if (a[pc] == key) {
            while (pc > pl && a[pc - 1] == key)
                pc--;
            return pc;
        }
        else if (a[pc] < key)
            pl = pc + 1;
        else
            pr = pc - 1;
    } while (pl <= pr);

    return -1;

}

int main(void){
    int i,nx,ky,idx;
    int *x;
    puts("선형 검색");
    printf("요소 개수 : ");
    scanf("%d",&nx);
    x=calloc(nx+1,sizeof(int));
    for(i=0;i<nx;i++){
        printf("x[%d] : ",i);
        scanf("%d",&x[i]);
    }
    printf("검색값 : ");
    scanf("%d",&ky);
    idx=search2(x,nx,ky);
    if(idx==-1){
        puts("검색에 실패했습니다.");
    } else{
        printf("%d(은)는 x[%d]에 있습니다.\n",ky,idx);
    }
    free(x);

    return  0;
}