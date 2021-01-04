#include <stdio.h>
//定义结构体数组保存多个学生信息
    struct student{
        char name[11];  //使用字符数组保存字符串
        char num[11];
        int score;
    };
int main()
{
//从输入中确定学生个数
    int n,i= 0;
    int k = 1;
    scanf("%d",&n);
    struct student stu[n];
//循环输入学生信息
    for(i=0;i<n;++i){
    scanf("%s%s%d",stu[i].name,stu[i].num,&stu[i].score);
    }
//输出检查读入是否有问题
//    for(j=0;j<n;++j){
//    printf("%s %s %d\n",stu[j].name,stu[j].num,stu[j].score);
//    }

//输出最大最小成绩学生
    struct student stumax = stu[0];
    struct student stumin = stu[0];
    while(k<n){
        if(stumax.score < stu[k].score){
            stumax = stu[k];
        }else if(stumin.score > stu[k].score){
            stumin = stu[k];
        }
        k++;
    }
    printf("%s %s\n",stumax.name,stumax.num);
    printf("%s %s\n",stumin.name,stumin.num);
    return 0;
}
