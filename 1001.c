#include <stdio.h>
  
int main()
{
    int n = 0,i = 0;
    scanf("%d",&n);
    while(n > 1){
        if(n%2 == 0){
            n /= 2;
            i++;
        }else{
            n = (3*n+1)/2;
            i++;
        }
    }
    printf("%d",i);
}
