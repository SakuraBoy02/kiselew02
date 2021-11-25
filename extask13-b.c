#include <stdio.h>
#include <string.h>

struct record 
{
    char fio[32];
    char cat[48];
    char num[24];
    char inf[64];
};

#define rows 3
struct record tab[rows];

int main()
{
    for (int i = 0; i < rows; i++) 
    {
        printf("[record %d]\n", i);

        printf("fio: ");
        gets(tab[i].fio, 32, stdin);
        
        printf("cat: ");
        gets(tab[i].cat, 48, stdin);

        printf("num: ");
        gets(tab[i].num, 24, stdin);

        printf("inf: ");
        gets(tab[i].inf, 64, stdin);

        printf("\n");
    }  
    

    //printf("fio:\t\tcat:\t\tnum:\t\tinf:\n");
    for (int i = 0; i < rows; i++)
        printf("%s\t%s\t\t%s\t%s\n", tab[i].fio, tab[i].cat, tab[i].num, tab[i].inf);
    
    printf("search sername: ");
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

return 0;
}