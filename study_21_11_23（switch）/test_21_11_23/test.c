#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int day = 0;               //����һ��day���ͱ���
//	scanf("%d", &day);         //�������ִ洢��day��
//	switch (day)               //��ʼ��֧���switch�������б�ʾ���ǽ���switch����е�����
//	{
//	case 1:                    //��ʾday=1ʱ�Ľ��
//		printf("����һ\n");
//		break;                 //breakΪ��ֹ���switch��䣬�������break���������case 2�Ľ��
//	case 2:
//		printf("���ڶ�\n");
//		break; 
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:                  //defaultΪ�����������е�case�ܹ�ʶ����������������
//		printf("����\n");
//		break;
//	}
//	return 0;
//}



int main()
{
	int day = 0;              
	scanf("%d", &day);        
	switch (day)             
	{
	case 1:                     
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:               
		printf("����\n");
		break;
	}
	return 0;
}