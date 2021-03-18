#include<stdio.h>

int main()
{
    int n,q,i,z,c=0,l,max;
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

        scanf(" %c %d %d",&o,&i,&z);
        if(o=='U')
        {
            a[i-1]=z;
        }
        else if(o=='P')
        {
            max=a[i-1];
            for(int k=i;k<z;k++)
            {
                if(max<a[k])
                {
                    max=a[k];

                }
            }
            p[c]=max;
            c++;

        }
    }
    for(int j=0;j<c;j++)
    {
        printf("%d\n",p[j]);
    }

    return 0;
}
