#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int func1(){
//	if (!cond1){
//		retuen y;
//	}
//	if (!ccond2){
//		return y;
//	}
//	if (!cond3){
//		return y;
//	}
//	return x;
//}
//
//int func2(){
//	if (cond1){
//		if (cond2){
//			if (cond3){
//				return x;
//			}
//			else{
//				return y;
//			}
//		}else{
//		}
//	}
//}

//void func3(){
//	int num = 1;
//	if (num == 5)
//	{
//		printf("hehe\n");
//	}
//}
//没有上面这种好看所以不推荐
//void func4(){
//	int num = 1;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//}
//
//int main(){
//	// C 语言中 1 用来表示真. 0 用来表示假
//	int choice = 0;
//	printf("你会认真写代码吗?");
//	scanf("%d\n", &choice);
//	if (choice){
//		printf("hehe\n");
//	}
//	else{
//		printf("haha\n");
//	}

// 返回 1 表示是奇数,返回 0 表示是 偶数
//int IsOdd(int x){
//	if (x % 2 == 0){
//		return 0;
//	}
//	return 1;
//}
//
//int main(){
//	printf("请输入今天是星期几(1-7):");
//	int day = 0;
//	scanf("%d", &day);
//	switch (day){
//	case 1:
//		printf("星期一!\n");
//		break; // 至关重要
//	case 2:
//		printf("星期二!\n");
//		break;
//	case 3:
//		printf("星期三!\n");
//		break;
//	case 4:
//		printf("星期四!\n");
//		break;
//	case 5:
//		printf("星期五!\n");
//		break;
//	case 6:
//		printf("星期六!\n");
//		break;
//	case 7:
//		printf("星期天!\n");
//		break;
//	default:
//		printf("输入有误!\n");
//		break;
//	
//		  
//	}

int main(){
	int num = 1;
	while (num <= 10); {
		num += 1;
		printf("%d", num);
	}

	system("pause");
	return 0;
}