#include <stdio.h>
#include <stdlib.h>
/*calculer la factiorielle dun nombre en utilisant la boucle for*/
int main()
{
int nb,i,fact;
  do{
    printf("Entrez un nombre pour calculer sa factorielle\n");////
    scanf("%d",&nb);
  }while(nb<=0);
     fact=1;
     for (i=2;i<=nb;i++)
       fact=fact*i;
       printf("La factorielle de %d! = %d\n",nb,fact);
    return 0;
}
