#include <stdio.h>
int main(){
    int a,b,c,pertama,kedua,ketiga,i;
    for(i=1;i<=3;i++){
      scanf("%d %d %d",&a,&b,&c);
      if(a>b){
        if(b>c){
          pertama=c;kedua=b;ketiga=a;
        }else{
          if(a>c){
            pertama=b;kedua=c;ketiga=a;
          }else{
            pertama=b;kedua=a;ketiga=c;
          }
        }
      }else{
        if(b>c){
          if(a>c){
            pertama=c;kedua=a;ketiga=b;
          }else{
            pertama=a;kedua=c;ketiga=b;
          }
        }else{
          if(c>a){
            if(a>b){
              pertama=b;kedua=a;ketiga=c;
            }else{
              pertama=a;kedua=b;ketiga=c;
            }
          }
        }
      }
      printf("%d %d %d\n\n",pertama,kedua,ketiga);
    }
    return 0;
}