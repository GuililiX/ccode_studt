#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void hannuota(int n, char A, char B, char C)
//{
//    if (1 == n)            //�����1������
//        printf("�����Ϊ%d������ֱ�Ӵ�%c�����Ƶ�%c����\n", n, A, C); // ֱ�ӽ�A�����ϵ����Ӵ�A�Ƶ�C
//    else
//    {
//        hannuota(n - 1, A, C, B);       //�Ƚ�A�����ϵ�n-1�����ӽ���C�Ƶ�B
//        printf("�����Ϊ%d������ֱ�Ӵ�%c�����Ƶ�%c����\n", n, A, C);
//        hannuota(n - 1, B, A, C);       //�ٽ�B�����ϵ�n-1�����ӽ���A�Ƶ�C
//    }
//}
//int main(void)
//{
//    char ch1 = 'A';
//    char ch2 = 'B';
//    char ch3 = 'C';
//    int n;
//    printf("���������ӵĸ�����");
//    scanf("%d", &n);
//    hannuota(n, ch1, ch2, ch3);
//    return 0;
//}

void hnt(int i, char a, char b, char c)
{
    if (1 == i)
    {
        printf("�����Ϊ%d�����Ӵ�%c�����Ƶ�%c����\n", i, a, c);
    }
    else
    {
        hnt(i - 1, a, c, b);
        printf("�����Ϊ%d�����Ӵ�%c�����Ƶ�%c����\n", i, a, c);
        hnt(i - 1, b, a, c);
    }
}
int main()
{
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';
    int i = 0;
    printf("��������Ҫ�ƶ�����������:");
    scanf("%d", &i);
    hnt(i, ch1, ch2, ch3);
    return 0;
}