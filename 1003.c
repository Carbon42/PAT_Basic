
//TODO:Figure out why this program can't pass test point 0 and test point 4.





#include <stdio.h>
int main(void)
{
    int i = 0,alln = 0,n = 0,ip = -1,it = -1,b = 1,c = 0,ct = 0,cp = 0;
    scanf("%d",&alln);
    char s[alln][101];
//循环保存所有输入字符串到字符串数组
    while(n<alln){
        scanf("%s",s[n]);
        n++;
    }
//循环对每一个字符串进行判断
    for(n=0;n<alln;n++){
        b = 1;
        ct = 0;
        cp = 0;
    //检查每个字符串是否只含'P','T','A'
        while(s[n][i] != '\0'){
            if(s[n][i]!='T' && s[n][i]!='A' && s[n][i]!='P'){
            b = 0;
            }
            i++;
        }
    //记下'T','P'的个数和位置
        if(b == 1){
            for(c=0;c<i;c++){
                if(s[n][c]=='T'){
                it = c;
                ct++;
                }else if(s[n][c]=='P'){
                ip = c;
                cp++;
                }
            }
        //判断是否符合题中条件
            if(ip*(it - ip - 1) == (i - it -1) && (it - ip) != 1 && ct == 1 && cp == 1){
            printf("YES\n");
            }else{
                printf("NO\n");
            }
        }else{
        printf("NO\n");
        }
    }
}
