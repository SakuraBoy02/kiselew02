#include <stdio.h>
#include <stdlib.h>

#define mpass 4.6f
#define m_max 100

   int mas[m_max];
   int n, a;
   int sum = 0;

int main()
{
   

   printf("number of your rating: ");
   scanf("%d", &n);

   //mas = (int*) malloc(n * sizeof(int));
   
   //printf("if you want to enter grades yourself write - 1, another number - another\n");
   //scanf("%d", &a);

   //if (a == 1)
      //{
         /*  for (int i = 0; i < n; i++)
         {
            printf("mas[%d] = ", i);
            scanf("%d", &mas[i]);
            sum += mas[i];
         }
         float gpa = (float) sum / (float) n;
         printf("GPA = %.f\n", gpa);
         if (gpa >= mpass)
         
            printf("Your GPA allows us to take you to our university! Congratulations\n");
         else
            printf("Your GPA is less than the passing threshold!\n");
         //free(mas);
         return 0;     */
      //}
      //else
         //{
            for (int i = 0; i < n; i++)
            {
               mas[i] = 2 + rand() %5 ;
               printf("mas[%d] = ", i);
               printf("%d\n", mas[i]);
               sum += mas[i];
            }
            float gpa = (float) sum / (float) n;
            printf("GPA = %.2f\n", gpa);
            if (gpa > 4.6)
         
               printf("Your GPA allows us to take you to our university! Congratulations\n");
            else
               printf("Your GPA is less than the passing threshold!\n");
            //free(mas);
            return 0;
         //}
}