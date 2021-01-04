#include <stdio.h>
  
int main(void)
{
    int s=0,i=0;
    char n[101];
    scanf("%s",n);
    while(n[i] != '\0'){
        s += (n[i]-'0');
        i++;
    }
    char ch[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    if(s>99){
        printf("%s ",ch[s/100]);
        printf("%s ",ch[s%100/10]);
        printf("%s",ch[s%10]);
    }else if(s>9){
        printf("%s ",ch[s%100/10]);
        printf("%s",ch[s%10]);
    }else{
        printf("%s",ch[s%10]);
    }
}
