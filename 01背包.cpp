#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 5
struct node
{
    int num,weigh,value;
}a[N];
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int m(int i,int C)
{
    int j,sum;
    if(i==N)
        return 0;
    if(a[i].weigh>C)
        return m(i+1,C);
    for(j=1;j<=a[i].num;j++)
    {
        if(a[i].weigh*j>C)continue;
          sum=max(m(i+1,C-a[i].weigh*j)+a[i].value*j,m(i+1,C));
    }
    return sum;
}
int main()
{
    int C=500,i,maxval;
    for(i=0;i<N;i++)
        scanf("%d%d%d",&a[i].num,&a[i].weigh,&a[i].value);
    maxval=m(0,C);
    printf("%d\n",maxval);
}
/*
5
5 80 200
6 1  40
4 20 480
10 50 150
20 40 300
*
/
//int n;
//void fun(char str[],int i)
//{
////    if(i==n-1)
////        printf("%c",str[i]);
////    else
////        fun(str,i+1);
//    if(i!=n-1)fun(str,i+1);//从反面来
//    printf("%c",str[i]);
//}
//int main()
//{
//    char str[]="lufituaeb";
//    n=strlen(str);
//    fun(str,0);
//}
//int main()
//{
//    int a[]={1,7,12,15};
//    int *p1=a,*p2=p1++;
//    *p1+=*(p2++);
//    printf("%d %d",*p1,*p2);
//}
//#include<iostream>
//using namespace std;
//const int maxn = 1000;
//int v[maxn];
//int w[maxn];
//int n = 0, W1= 0;
//int cou = 0;
//int m(int i, int j) {//放第i个物品，背包容量为j，价值最大
//    cou++;
//    printf("m(%d, %d)\n", i, j);
//    if (i == n){
//        return 0;
//    }
//    if (w[i] > j) {//w[i]是第i个物品的重量
//        return m(i+1, j);
//    }
//    return max(m(i+1, j-w[i])+v[i], m(i+1,  j));
//}
//int main() {
//    while (scanf("%d%d", &n, &W1)==2) {
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &v[i]);
//        }
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &w[i]);
//        }
//        int maxval = m(0, W1);
//        printf("%d\n", maxval);
//        printf("cou = %d\n", cou);
//    }
//    return 0;
//}
/*  C=10
    5 20
    6 10
    4 12
    3 13*/

