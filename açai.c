#include<stdio.h>
#include<locale.h>

// Criadora: Júlia Formagini Girardelo
/*obj: criar simulador de atndimanto ao cliente em uma Açaiteria pedindo
o tamanho do recipiente, acompanhamentos, total, pagamento e a entrega*/
int main()
{
     float nCopo, adicionais, pergunta, carrinho, vadicional, valor, total, pago, troco; 

 printf("****Olá Seja Bem-Vindo ao COR & SABOR AÇAÍ!! Pronto para montar o seu?****");//1
 printf("\nInsira o copo que deseja: 1- 200ml com 2 ad = R$5,00 ;  2- 400ml com 3 ad= R$13,00;3- 500ml com 5 ad= 16,00;  4- Barca Açaí com 9 ad= 24,00 ;");//2
 scanf("%f", &nCopo);
 
 if(nCopo==1)
   {
     printf("\n200ml com 2 adicionais gravado com sucesso;)");
    }
  else if (nCopo==2)
   {
   printf("\n400ml com 3 adicionais gravado com sucesso;)");
    }
   else if ( nCopo==3)
   {
    printf("\n 500ml com 5 adicionais gravado com sucesso;)");
    }
    else if( nCopo==4)
    {
    printf("Barca Açaí com 9 adicionais gravados com sucesso ;)");
    }
    printf(" Escolha os Adicionais (obs= de acordo com o ml que inseriu)= gotas de chocolate, leite em pó, nescau, flocos de arroz, 
 granola, leite condensado, cobertura de caramelo, morango, banana, bluebarry, aveia, exencia de guaraná, ovomaltine, 
 sucrilhos e doce de leite");//3 
 scanf("%f", &adicionais);

   printf("Deseja mais alguma coisa? 1- Sim, quero adicionar 2-Não, quero ir direto ao pagamento!\n");
   scanf("%f", &pergunta);
   if (pergunta==1)
   {
      printf("Oque deseja adicionar?\n");
      scanf("%f", &carrinho);
      printf("Pedido executado com sucesso!!\n")
   }

   else if(pergunta==2)
   {
          printf("Insira o valor do copo:\n");
    scanf("%f", &valor);
    printf("Insira o adicional 5,00 ou 3,00:\n");
    scanf("%f", &vadicional);
    printf("Insira o valor pago:\n");
    scanf("%f", &pago);
    total=valor+vadicional;
    troco= valorpago-total
   }
}


