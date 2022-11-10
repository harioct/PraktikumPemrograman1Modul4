#include <stdio.h>
int main(){
    int a,i;
    for(i=1;i<=5;i++){
        printf("Masukkan bilangan: ");scanf("%d",&a);
    if(a>=100){
        printf("Anda Menginput Melebihi Limit Bilangan\n\n");
    }
    else if(a>=20 && a<100){
        printf("Puluhan\n\n");
    }
    else if(a>=10 && a<20){
        printf("Belasan\n\n");
    }
    else if(a>0 && a<10){
        printf("Satuan\n\n");
    }
    else if(a==0){
        printf("Nol\n\n");
    }
    }
    return 0;
}