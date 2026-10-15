#include<stdio.h>
int main(){
	float a,b;
	char c;
	printf("请输入表达式（如3+5）：");
	scanf("%f %c %f",&a,&c,&b);
	switch(c){
		case'+':
			printf("%f + %f = %f\n",a,b,a+b);
			break;
		case'-' :
			printf("%f - %f = %f\n",a,b,a-b);
			break;
		case'*':
			printf("%f * %f = %f\n",a,b,a*b);
			break;
		case'/':
			if(b==0){
				printf("错误\n");
				 
			}else{
				
			
			 
			
			
			printf("%f / %f = %f\n",a,b,a/b);}
			break;
		default:
			printf("不支持该符号");
			 
			
			
	} return 0; 
}
