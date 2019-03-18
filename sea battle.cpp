#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1002];
    int n,i,j,k,max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int flag=1;
    for(i=0;i<n;i++)
    {

        max=0;min=0;
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
                max++;
            else if(a[i]>a[j])
                min++;
        }
        if(max==min)
            flag=0;
        if(flag==0)
        {
            printf("%d\n",a[i]);
            break;
        }
    }
    if(flag==1)
        printf("-1\n");

    return 0;
}
