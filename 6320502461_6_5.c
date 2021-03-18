#include<stdio.h>

int main()
{
    int w,h,sum=0,t,ans,g,x;
    scanf("%d %d",&w,&h);
    int a[w][h];
    t=w*h;

    for(int i=0;i<w;i++)
    {
        for(int j=0;j<h;j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }

    for(int i=sum; ;i++)
    {
        if(i%t==0)
        {
            x=i;
            break;
        }
    }
    ans=x-sum;
    printf("%d",ans);

    return 0;
}
