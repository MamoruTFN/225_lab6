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
            if(u<n-1)
            {
                if(dm[u][r]=='.'||dm[u][r]=='|')
                {
                    dm[u][r]='|';
                }
                else if(dm[u][r]=='-')
                {
                    dm[u][r]='+';
                }
                u++;
                if(dm[u][r]=='.'||dm[u][r]=='|')
                {
                    dm[u][r]='|';
                }
                else if(dm[u][r]=='-')
                {
                    dm[u][r]='+';
                }
            }
        }
        else if(o[i]=='U')
        {
            if(u>0)
            {
                if(dm[u][r]=='.'||dm[u][r]=='|')
                {
                    dm[u][r]='|';
                }
                else if(dm[u][r]=='-')
                {
                    dm[u][r]='+';
                }
                u--;
                if(dm[u][r]=='.'||dm[u][r]=='|')
                {
                    dm[u][r]='|';
                }
                else if(dm[u][r]=='-')
                {
                    dm[u][r]='+';
                }
            }
        }
        else if(o[i]=='R')
        {
            if(r<n-1)
            {
                if(dm[u][r]=='.'||dm[u][r]=='-')
                {
                    dm[u][r]='-';
                }
                else if(dm[u][r]=='|')
                {
                    dm[u][r]='+';;
                }
                r++;
                if(dm[u][r]=='.'||dm[u][r]=='-')
                {
                    dm[u][r]='-';
                }
                else if(dm[u][r]=='|')
                {
                    dm[u][r]='+';;
                }
            }

        }
        else if(o[i]=='L')
        {
            if(r>0)
            {
                if(dm[u][r]=='.'||dm[u][r]=='-')
                {
                    dm[u][r]='-';
                }
                else if(dm[u][r]=='|')
                {
                    dm[u][r]='+';
                }
                r--;
                if(dm[u][r]=='.'||dm[u][r]=='-')
                {
                    dm[u][r]='-';
                }
                else if(dm[u][r]=='|')
                {
                    dm[u][r]='+';;
                }
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
