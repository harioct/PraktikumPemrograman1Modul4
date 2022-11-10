#include<stdio.h>
int main(){
    int N,i;
    for(i=1;i<=3;i++){
        printf("Masukkan nilai N: ");scanf("%d",&N);
    if(N>0){
        printf("positif\n\n");
    }
    else if(N<0){
        printf("negatif\n\n");
    }
    else{
        printf("nol\n\n");
    }
    }
    return 0;
}