//
// Created by Min on 2019-08-20.
//

#include <stdio.h>
#include <stdlib.h>

int search(const int a[], int n, int key)
{
    int i;

    printf("   |");
    for (i = 0; i < n; i++)
        printf("%3d", i);
    printf("\n---+");
    for (i = 0; i < n; i++)
        printf("---", i);
    printf("-\n");

    for (i = 0; i < n; i++) {
        int j;
        printf("   |");
        printf("%*s", 3 * (i - 1) + 5, "");
        printf("*\n");
        printf("%3d|", i);
        for (j = 0; j < n; j++)
            printf("%3d", a[j]);
        putchar('\n');

        if (a[i] == key)
            return i;

        printf("   |\n");
    }

    return -1;
}

int main(void) {
    int i, nx, ky, idx;
    int *x;
    puts("이진 검색");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    printf("오름차순으로 입력하세요.\n");
    printf("x[0] : ");
    scanf("%d", &x[0]);
    for (i = 1; i < nx; i++) {
        do {
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);
        }while (x[i]<x[i - 1]);

    }
    printf("검색값 : ");
    scanf("%d",&ky);
    idx=search(x,nx,ky);
    if(idx==-1){
        puts("검색에 실패했습니다.");
    } else{
        printf("%d(은)는 x[%d]에 있습니다.\n",ky,idx);
    }
    free(x);

    return  0;
}