#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c1=0,c2=0,a2[n],b2[n];

    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=0;i<n;i++)
    {
        a2[i]=a%10;
        a/=10;
        b2[i]=b%10;
        b/=10;
        if(a2[i]==b2[i])
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }

    printf("%d %d",c1,c2);

    return 0;
}
