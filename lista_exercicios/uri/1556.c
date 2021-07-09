#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int t, s;
char p[1001];
char en[1001];
int g[1001][30];

void dfs(int u);
void list(char *str);

int main()
{
    int i, j;

    while (scanf("%s", &en[1]) != EOF)
    {
        en[0] = 'X';
        int lig[30];
        t = strlen(en);

        memset(g, 0, sizeof(g));
        memset(lig, 0, sizeof(lig));

        for (i = t - 1; i >= 0; --i)
        {
            for (j = 0; j < 30; ++j)
            {
                g[i][j] = lig[j];
            }

            lig[en[i] - 'a'] = i;
        }

        s = 0;
        dfs(0);
        printf("\n");
    }

    return 0;
}

void dfs(int u)
{
    int i;

    for (i = 0; i < 30; ++i)
    {
        if (g[u][i])
        {
            p[s++] = 'a' + i;
            p[s] = '\0';
            
            list(p);
            dfs(g[u][i]);
            --s;
        }
    }
}

void list(char *str)
{
    int i;

    for (i = 0; str[i]; ++i)
    {
        printf("%c", str[i]);
    }

    printf("\n");
}