#include<stdio.h>
struct student{
	char name[350];
	int score;
	
};
int main(){
	struct student students[3];
	for (int i=0;i<3;i++){
		printf("请输入第 %d 个学生的姓名\n",i+1);
		scanf("%s",students[i].name);
		printf("请输入第%d个学生的分数\n",i+1);
		scanf("%d",&students[i].score);
		
		
	}
	printf("成绩如下\n");
	for (int i=0;i<3;i++){
		printf("第%d个学生的姓名：%-10s 分数：%d\n",i+1,students[i].name,students[i].score);
		
	} 
	return 0;
}
