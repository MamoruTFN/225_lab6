#include<stdio.h>

int main()
{
    int n,q,i,z,c=0,l,max=0;
    char o;
    scanf("%d %d",&n,&q);
    int a[n],p[n];

    for(int j=0;j<n;j++)
    {
        a[j]=0;
        p[j]=0;
    }

    for(int j=0;j<q;j++)
    {

        scanf(" %c %d %d",&o,&i,z);
        if(o=='U')
        {
            a[i]=z;
        }
        else if(o=='P')
        {
            for(int k=i-1;k<z;k++)
            {
                if(a[k]>=max)
                {
                    max=a[k];
                    p[c]=a[k];
                }
            }
            c++;
            max=0;
        }
    }
    for(int j=0;j<c;j++)
    {
        printf("%d\n",p[j]);
    }

    return 0;
}
