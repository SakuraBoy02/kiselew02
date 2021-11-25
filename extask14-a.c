#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct record 
{
    int acc;
    char fio[32];
    float sum;
    int prc;

    float res;
};

#define rows 3
struct record tab[rows];

int main()
{
    for (int i = 0; i < rows; i++) 
    {
        char tmp[32];
        printf("[record %d]\n", i);

        printf("acc: ");
        gets(tmp);
        tab[i].acc = atoi(tmp);

        printf("fio: ");
        gets(tab[i].fio, 32, stdin);
        
        printf("sum: ");
        gets(tmp);
        tab[i].sum = atof(tmp);

        printf("proc: ");
        gets(tmp);
        tab[i].prc = atof(tmp);

        printf("\n");
    }  
    

    //printf("fio:\t\tcat:\t\tnum:\t\tinf:\n");
    for (int i = 0; i < rows; i++)
        tab[i].res = tab[i].sum + (tab[i].sum * tab[i].prc / 100.0f) / 12.0f;

    for (int i = 0; i < rows; i++)
        printf("%d\t%s\t%.2f\t%d\t%.2f\n", tab[i].acc, tab[i].fio, tab[i].sum, tab[i].prc, tab[i].res);
    
    /*printf("search sername: ");
    char fio[32];
    gets(fio);
    printf("\n");
    int n = 0;

    for (int i = 0; i < rows; i++)
    {
        char *p = strtok(tab[i].fio, " ");
        if (strcmp(p, fio) == 0)
        {
                    printf("number: %s\n", tab[i].num);
                    printf("information: %s\n", tab[i].inf);
                    n++;
        }
    }
    if (n < 1)
        printf("not found person!\n");
    
    
    printf("search category: ");
    char cat[48];
    gets(cat);
    printf("\n");
    int a = 0;

    for (int i = 0; i < rows; i++)
    {
        char *g = strtok(tab[i].cat, " ");
        if (strcmp(g, cat) == 0)
        {
            printf("number: %s\n", tab[i].num);
            a++;
        }
    
    }
    if (a < 1)
        printf("not found person!\n");
*/
return 0;
}