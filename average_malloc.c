#include<stdio.h>                     // 引入标准输入输出库，使用 printf / scanf
#include<stdlib.h>                     // 引入标准库，使用 malloc / free
int main(){                            // 主函数，程序入口，返回 int 状态码
	int n;                              // 声明整型变量 n，用于保存用户输入的数组长度
	printf("请输入数组长度\n");          // 提示用户输入数组长度（\n 表示换行并刷新输出缓冲）
	scanf("%d",&n);                     // 读取一个整数存入 n，& 取变量地址（%d 对应 int）
	if (n==0){                          // 判断长度是否为 0（非法长度，直接拦截）
		printf("数组长度需大于0\n");      // 提示数组长度必须大于 0
		return 1;                       // 返回非 0 值 1，表示程序异常退出
		
	} 
	int *arr=(int *)malloc(n*sizeof(int));  // 动态申请 n 个 int 的内存；malloc 返回 void*，强转为 int*；sizeof(int) 为一个 int 的字节数
	if(arr==NULL){                      // 判断申请是否失败（内存不足时 malloc 返回空指针 NULL）
		printf("内存分配失败\n");         // 提示内存分配失败
		return 1;                       // 返回 1，表示异常退出
		 
	}
	int sum=0;                          // 声明累加变量 sum 并初始化为 0，用于存放所有数的和
	for(int i=0;i<n;i++){               // 循环 n 次，i 既是下标也是计数（i 从 0 到 n-1）
		printf("请输入第%d个数\n",i+1);   // 提示输入第 i+1 个数（下标 i 加 1 后显示给用户）
		scanf("%d",&arr[i]);            // 读入一个整数，存入数组 arr 的第 i 个元素
		sum+=arr[i];                    // 把 arr[i] 累加到 sum，等价于 sum = sum + arr[i]
		 
	}
	float avg=(float)sum/n;             // 计算平均值；先把 sum 转成 float，避免整数相除丢掉小数部分
	 
	printf("平均值=%.2f\n",avg);        // 输出平均值，%.2f 表示保留两位小数
	free(arr);                          // 释放之前 malloc 申请的堆内存，防止内存泄漏
	arr=NULL;                           // 把指针置空，避免成为悬空指针（野指针）
	return 0;                           // 返回 0，表示程序正常结束
	
}

