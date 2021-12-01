#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void hannuota(int n, char A, char B, char C)
//{
//    if (1 == n)            //如果是1个盘子
//        printf("将编号为%d的盘子直接从%c柱子移到%c柱子\n", n, A, C); // 直接将A柱子上的盘子从A移到C
//    else
//    {
//        hannuota(n - 1, A, C, B);       //先将A柱子上的n-1个盘子借助C移到B
//        printf("将编号为%d的盘子直接从%c柱子移到%c柱子\n", n, A, C);
//        hannuota(n - 1, B, A, C);       //再将B柱子上的n-1个盘子借助A移到C
//    }
//}
//int main(void)
//{
//    char ch1 = 'A';
//    char ch2 = 'B';
//    char ch3 = 'C';
//    int n;
//    printf("请输入盘子的个数：");
//    scanf("%d", &n);
//    hannuota(n, ch1, ch2, ch3);
//    return 0;
//}

void hnt(int i, char a, char b, char c)
{
    if (1 == i)
    {
        printf("将编号为%d的盘子从%c柱子移到%c柱子\n", i, a, c);
    }
    else
    {
        hnt(i - 1, a, c, b);
        printf("将编号为%d的盘子从%c柱子移到%c柱子\n", i, a, c);
        hnt(i - 1, b, a, c);
    }
}
int main()
{
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';
    int i = 0;
    printf("请输入需要移动的盘子数量:");
    scanf("%d", &i);
    hnt(i, ch1, ch2, ch3);
    return 0;
}