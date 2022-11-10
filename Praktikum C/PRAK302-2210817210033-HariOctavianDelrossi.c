#include<stdio.h>
int main(){
    int x,i;
    for(i=1;i<=5;i++){
        printf("Nilai: ");scanf("%d",&x);
    if(x>=80){
        printf("Huruf: A\n\n");
    }
    else if(x>=70 && x<=79){
        printf("Huruf: B\n\n");
    }
    else if(x>=60 && x<=69){
        printf("Huruf: C\n\n");
    }
    else if(x>=50 && x<=59){
        printf("Huruf: D\n\n");
    }
    else if(x<50){
        printf("Huruf: E\n\n");
    }
    }
    return 0;
}