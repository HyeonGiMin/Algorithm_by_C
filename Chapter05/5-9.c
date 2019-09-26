//
// Created by Min on 2019-09-26.
//

#include<stdio.h>

int pos[8];
int flag[8];
int flag_b[15]; // 대각선 /에 퀸을 배치했는지 체크
int flag_c[15]; // 대각선 \에 퀸을 배치했는지 체크

void print(void){
    int i;
    for(i=0;i<8;i++)
        printf("%2d",pos[i]);
    putchar('\n');
}

void set(int i)
{
    int j;
    for(j=0;j<8;j++){
        if(!flag[j]&&!flag_b[i+j]&&!flag_c[i-j+7]){
            pos[i]=j;
            if(i==7)
                print();
            else{
                flag[j]=flag_b[i+j]=flag_c[i-j+7]=1;
                set(i+1);
                flag[j]=flag_b[i+j]=flag_c[i-j+7]=0;
            }

        }


    }
}

int main(void){
    int i;
    for(i=0;i<8;i++){
        flag[i]=0;
    }
    for(i=0;i<15;i++){
        flag_b[i]=flag_c[i]=0;
    }
    set(0);

    return 0;
}