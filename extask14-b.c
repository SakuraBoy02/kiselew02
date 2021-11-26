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
    
    int ch;
    do
    {
        printf("\n");
	    printf("0 - exit\n");
	    printf("1 - search acc\n");
	    printf("2 - search fio\n");
        printf("ch: ");

        scanf("%d", &ch);
	    printf("\n");

        switch(ch)
	    {
		    case 1: 
            {
                int n = 0;
                printf("acc: ");
                int acc;
                scanf("%d", &acc);

    	        printf("\n");

    	        for(int i = 0; i < rows; i++)
    	        {
                    int acc1 = tab[i].acc;
    		        if(acc == acc1)
    		        {
	    		        printf("%d\t%s\t%.2f\t%d\t%.2f\n", tab[i].acc, tab[i].fio, tab[i].sum, tab[i].prc, tab[i].res);
		    	        n++;
		            }		
	            }

                if(n < 1) printf("not found acc!\n");
            };
		break;

		    case 2:
            {
			    int c = 0;
			    printf("fio: ");
			    char fio1[32];
                scanf("%c", fio1);
			    gets(fio1);
                printf("\n");

	    	    for(int i = 0; i < rows; i++)
    		    {
    			    char *q = strtok(tab[i].fio, " ");

	    		    if(strcmp(q, fio1) == 0)
    		        {
	    		        printf("%d\t%s\t%.2f\t%d\t%.2f\n", tab[i].acc, tab[i].fio, tab[i].sum, tab[i].prc, tab[i].res);
		    	        c++;
		            }		
	            }

                if(c < 1)
                printf("not found!\n");
            }
        break;
    	}

    printf("\n");

    }
    while
	(ch = 0);
    
return 0;
}