#include <stdio.h>
int main(){
    int i=0;
    while(i<=5){
        int h,j,m,d,i;
        scanf("%d",&i);
        h=i/86400;
        j=(i/3600)%24;
        m=(i/60)%60;
        d=i%60;
        if(i<=3600){
            printf("%.2d:%.2d:%.2d\n\n",j,m,d);
        }else if(i>3600 && i<86400){
            printf("%.2d:%.2d:%.2d\n\n",j,m,d);
        }else if(i>=86400){
            printf("%d hari %.2d:%.2d:%.2d\n\n",h,j,m,d);
        }
        i++;
    }
    return 0;
}