#include<stdio.h>
#include<string.h>

int main()
{
    int n,u=0,r=0;
    scanf("%d",&n);
    char dm[n][n],o[250];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            dm[i][j]='.';
        }
    }

    scanf("%s",o);

    for(int i=0; i<strlen(o); i++)
    {
        if(o[i]=='D')
        {
            if(dm[u][r]=='.'||dm[u][r]=='|')
            {
                dm[u][r]='|';
                dm[u+1][r]='|';
                u++;
            }
            else if(dm[u][r]=='-')
            {
                dm[u][r]='+';
                dm[u+1][r]='|';
                u++;
            }

        }
        else if(o[i]=='U')
        {
            if(dm[u][r]=='.'||dm[u][r]=='|')
            {
                dm[u][r]='|';
                dm[u-1][r]='|';
                u--;
            }
            else if(dm[u][r]=='-')
            {
                dm[u][r]='+';
                dm[u-1][r]='|';
                u--;
            }
        }
        else if(o[i]=='R')
        {
            if(dm[u][r]=='.'||dm[u][r]=='-')
            {
                dm[u][r]='-';
                dm[u][r+1]='-';
                r++;
            }
            else if(dm[u][r]=='|')
            {
                dm[u][r]='+';
                dm[u][r+1]='-';
                r++;
            }
        }
        else if(o[i]=='L')
        {
            if(dm[u][r]=='.'||dm[u][r]=='-')
            {
                dm[u][r]='-';
                dm[u][r-1]='-';
                r--;
            }
            else if(dm[u][r]=='|')
            {
                dm[u][r]='+';
                dm[u][r-1]='-';
                r--;
            }
        }

    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%c",dm[i][j]);
        }
        printf("\n");
    }



    return 0;
}
