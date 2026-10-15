#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("请输入数组长度\n");
	scanf("%d",&n);
	if (n==0){
		printf("数组长度需大于0\n");
		return 1;
		
	} 
	int *arr=(int *)malloc(n*sizeof(int));
	if(arr==NULL){
		printf("内存分配失败\n");
		return 1;
		 
	}
	int sum=0;
	for(int i=0;i<n;i++){
		printf("请输入第%d个数\n",i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i];
		 
	}
	float avg=(float)sum/n;
	 
	printf("平均值=%.2f\n",avg);
	free(arr);
	arr=NULL;
	return 0;
	
}
