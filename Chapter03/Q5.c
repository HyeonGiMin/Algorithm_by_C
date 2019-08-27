//
// Created by Min on 2019-08-20.
//

#include <stdio.h>
#include <stdlib.h>

int int_cmp(const int *a,const int *b){
   if(*a<*b){
       return -1;
   }else if(*a>*b){
       return 1;
   }else{
       return 0;
   }

}

int main(void){
    int i,nx,ky;
    int *x;
    int *p;
    puts("bearch 함수를 사용하여 검색");
    printf("요소 개수 : ");
    scanf("%d",&nx);
    x=calloc(nx+1,sizeof(int));

    for(i=0;i<nx;i++){
        do{
            printf("x[%d] : ",i);
            scanf("%d",&x[i]);
        }while(x[i]<x[i-1]);

    }
    printf("검색값 : ");
    scanf("%d",&ky);
    p=bsearch(&ky,x,nx,sizeof(int),(int(*)(const void *,const void *)) int_cmp());
    if(p=-null){
        puts("검색에 실패했습니다.");
    } else{
        printf("%d(은)는 x[%d]에 있습니다.\n",ky,(int)(p-x));
    }
    free(x);

    return  0;
}