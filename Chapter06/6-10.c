//
// Created by Min on 2019-09-30.
//

#include <stdio.h>
#include <stdlib.h>
#define  swap(type,x,y) do{ type t=x; x=y; y=t;} while(0)

void quick(int a[],int left,int right){
    IntStack lstack;
    IntStack rstack;;

    Intitialize(&lstack,right-left+1);
    Intitialize(&rstack,right-left+1);

    Push(&lstack,left);
    Push(&rstack,right);

    while(!IsEmpty(&lstack)){
        int pl=(Pop(&lstack,&left),left);
        int pr=(Pop(&rstack,&right),right)
        int x=a[(left+right)/2];

        int i;
        printf("a[%d]~a[%d] : {",left,right);
        for(i=left;i<right;i++){
            printf("%d, ",a[i]);
        }
        printf("%d}\n",a[right]);
        do{
            while(a[pl]<x) pl++;
            while(a[pr]>x)pr--;
            if(pl<=pr){
                swap(int, a[pl], a[pr]);
                pl++;
                pr--;

            }
        }while(pl<=pr);
        if(left<pr) {
            Push(&lstack,left);
            Push(&rstack,pr);
        }
        if(pl<right) {
            Push(&lstack,pl);
            Push(&rstack,right);
        }
    }
    Terminate(&lstack);
    Terminate(&rstack);

}
int main(void){
    int i,nx;
    int *x;
    puts("퀵정렬");

    printf("요소 개수 : ");
    scanf("%d",&nx);
    x=calloc(nx,sizeof(int));

    for(i=0;i<nx;i++){
        printf("x[%d] : ",i);
        scanf("%d",&x[i]);
    }
    quick(x,0,nx-1);
    puts("오름차순으로 정렬했습니다");
    for(i=0;i<nx;i++)
        printf("x[%d]=%d\n",i,x[i]);

    free(x);

    return 0;
}