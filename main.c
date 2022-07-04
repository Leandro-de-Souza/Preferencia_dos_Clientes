#include <stdio.h>


int main()
{

      int codigo, soma1, soma2, soma3;

      soma1 = 0;
      soma2 = 0;
      soma3 = 0;

      printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
      scanf("%d", &codigo);

      while (codigo != 4) {
            if (codigo == 1) {
                soma1 = soma1 + 1;
            }
            else if (codigo == 2) {
                soma2 = soma2 + 1;
            }
            else if (codigo == 3) {
                soma3 = soma3 + 1;
            }

            printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
            scanf("%d", &codigo);
      }

       printf("MUITO OBRIGADO\n");
       printf("Alcool: %d\n", soma1);
       printf("Gasolina: %d\n", soma2);
       printf("Diesel: %d", soma3);


    return 0;
}
