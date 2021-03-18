#include<stdio.h>

int main()
{
    int w,h,sum=0,t,ans;
    scanf("%d %d",&w,&h);
    int a[w];
    t=w*h;

    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {
            scanf("%d",&a[j]);
            sum+=a[j];
        }
    }

    ans=t-(t%sum);
    printf("%d",ans);

    return 0;
}
