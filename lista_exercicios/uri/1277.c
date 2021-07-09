#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct
{
    char name[51];
    int presence, total;
} Aluno;

int main()
{
    int n, t, i, k, j, space = 0;
    char aux[100];
    Aluno students[100];

    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        k = n;

        memset(students, 0, sizeof(students));

        for (i = 0; i < n; i++)
            scanf(" %s", students[i].name);
            
        space = 0;

        for (i = 0, k; k > 0; i++, k--)
        {
            scanf(" %s", aux);

            for (j = 0; aux[j]; j++)
            {
                if (aux[j] == 'P')
                    students[i].presence++;

                if (aux[j] != 'M')
                    students[i].total++;
            }

            if (((1.0f * students[i].presence) / students[i].total) < 0.75f)
            {
                if (space)
                    printf(" ");

                printf("%s", students[i].name);

                space = 1;
            }
        }

        printf("\n");
    }
}