#include <stdio.h>
#include <string.h>

#define max_txt 256

int main()
{
    FILE *f1 = fopen("extask21-in-a.txt", "r");
    FILE *f2 = fopen("extask21-out-a.txt", "w+");

    int i = 1;
    int m = 0;
    char p[max_txt];

    while(1)
    {
        char s[max_txt];
        if(fgets(s, max_txt, f1) == NULL)
            break;

        char *c = strchr(s, '\n');
        if(c != NULL) *c = '\0';

        int l = strlen(s);
        printf("%s ", s);
        printf("%d\n", l);
        if(l > m)
        {
            m = l;
            strcpy(p, s);
        }

        fprintf(f2, "%d %s %d\n", i, s, l);

        i++;
    }

    fclose(f1);
    fclose(f2);

    return 0;
}