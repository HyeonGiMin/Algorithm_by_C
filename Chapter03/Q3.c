
#include <stdio.h>
#include <stdlib.h>

int search(const int a[], int n, int key,int idx[])
{
    int i=0;
    int j=0;
    int count=0;
    for(i=0;i<n;i++){
        if(a[i]==key){
            idx[j]=i;
            j++;
            count++;
        }
    }
    return count;
}

int main(void) {
    int i, nx, ky, idx;
    int *x;
    int *aidx;
    puts("이진 검색");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    aidx= calloc(nx, sizeof(int));
    printf("값을 입력하세요.\n");
    printf(" x[0] : ");
    scanf("%d", &x[0]);
    for(i=1;i<nx;i++){
        printf("x[%d] : ",i);
        scanf("%d",&x[i]);
    }
    printf("검색값 : ");
    scanf("%d",&ky);
    idx=search(x,nx,ky,aidx);
    if(idx==-1){
        puts("검색에 실패했습니다.");
    } else{
        for(i=0;i<idx;i++){
            printf("%d  ",aidx[i]);
        }
        printf("\n%d는 %d개 입니다.",ky,idx);
    }
    free(x);

    return  0;
}