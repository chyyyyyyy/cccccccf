

//数列分段
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n,i,flag=0,k=0;
//    int a[1002];
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//        scanf("%d",&a[i]);
//    for(i=0;i<n-1;i++)
//    {
//        if(a[i]==a[i+1])
//            flag=1;
//        else
//            flag=0;
//        if(flag==0)
//            k++;
//    }
//    k++;
//    printf("%d\n",k);
//    return 0;
//}

//日期计算
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int y,n,flag=0,m,s,a,b,c,d,e,f,g,h,i,j,k,l;
//
//    scanf("%d",&y);
//    scanf("%d",&n);
//    if((y%4==0&&y%100!=0)||(y%400==0))
//        flag=1;
//
//    a=31;   //1
//    b=a+29; //2
//    if(flag==0)
//        b=b-1;
//    c=b+31; //3
//    d=c+30; //4
//    e=d+31; //5
//    f=e+30; //6
//    g=f+31; //7
//    h=g+31; //8
//    i=h+30; //9
//    j=i+31; //10
//    k=j+30; //11
//    l=k+31; //12
//
//
//
//        if(n<=a)           //1
//        {   m=1;s=n;}
//        else if(n>a&&n<=b) //2
//        {   m=2;s=n-a;}
//        else if(n>b&&n<=c) //3
//        {    m=3;s=n-b;}
//        else if(n>c&&n<=d)
//        {   m=4;s=n-c;}
//        else if(n>d&&n<=e)
//        {    m=5;s=n-d;}
//        else if(n>e&&n<=f)
//        {    m=6;s=n-e;}
//        else if(n>f&&n<=g)
//        {    m=7;s=n-f;}
//        else if(n>g&&n<=h)
//        {    m=8;s=n-g;}
//        else if(n>h&&n<=i)
//        {    m=9;s=n-h;}
//        else if(n>i&&n<=j)
//        {    m=10;s=n-i;}
//        else if(n>j&&n<=k)
//        {    m=11;s=n-j;}
//        else if(n>k&&n<=l)
//        {    m=12;s=n-k;}
//
//    printf("%d\n",m);
//    printf("%d\n",s);
//    return 0;
//}

//数字排序
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int count;
    int num;
};

bool cmp(node a,node b)
{

    if(a.count!=b.count) return a.count>b.count;
    return a.num<b.num;
}

int main()
{
    struct node a[1002];
    int n,i,j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i].num);
       a[i].count=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(a[i].num==a[j].num)
                a[i].count++;
    }
    sort(a,a+n,cmp);
    for(i=0;i<n-1;i++)
    {
        if(a[i].num==a[i+1].num)
            flag=1;
        else
            flag=0;
        if(flag==0)
        {
            printf("%d %d",a[i].num,a[i].count);
            printf("\n");
        }
    }
    printf("%d %d",a[i].num,a[i].count);

    return 0;
}

#include<stdio.h>
int k,t;
void g(int k,int t)
{
    k=k+2;
    t=t+2;
}
int main()
{
    int n,i,j,t,num=0;
    int a[1002]={0};
    scanf("%d%d",&k,&t);
    g(k,t);
    printf("%d %d\n",k,t);
    return 0;
}


