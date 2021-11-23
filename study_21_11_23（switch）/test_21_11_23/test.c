#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int day = 0;               //定义一个day整型变量
//	scanf("%d", &day);         //输入数字存储到day中
//	switch (day)               //开始分支语句switch，括号中表示的是进入switch语句中的整型
//	{
//	case 1:                    //表示day=1时的结果
//		printf("星期一\n");
//		break;                 //break为终止这个switch语句，如果不加break将继续完成case 2的结果
//	case 2:
//		printf("星期二\n");
//		break; 
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期七\n");
//		break;
//	default:                  //default为除了上面所有的case能够识别的数字以外的数字
//		printf("错误\n");
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
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:               
		printf("错误\n");
		break;
	}
	return 0;
}