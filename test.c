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
//û���������ֺÿ����Բ��Ƽ�
//void func4(){
//	int num = 1;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//}
//
//int main(){
//	// C ������ 1 ������ʾ��. 0 ������ʾ��
//	int choice = 0;
//	printf("�������д������?");
//	scanf("%d\n", &choice);
//	if (choice){
//		printf("hehe\n");
//	}
//	else{
//		printf("haha\n");
//	}

// ���� 1 ��ʾ������,���� 0 ��ʾ�� ż��
//int IsOdd(int x){
//	if (x % 2 == 0){
//		return 0;
//	}
//	return 1;
//}
//
//int main(){
//	printf("��������������ڼ�(1-7):");
//	int day = 0;
//	scanf("%d", &day);
//	switch (day){
//	case 1:
//		printf("����һ!\n");
//		break; // ������Ҫ
//	case 2:
//		printf("���ڶ�!\n");
//		break;
//	case 3:
//		printf("������!\n");
//		break;
//	case 4:
//		printf("������!\n");
//		break;
//	case 5:
//		printf("������!\n");
//		break;
//	case 6:
//		printf("������!\n");
//		break;
//	case 7:
//		printf("������!\n");
//		break;
//	default:
//		printf("��������!\n");
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