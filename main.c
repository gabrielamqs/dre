#include <stdio.h>
#include <stdlib.h>

#define RESET  "\033[0m"
#define GREEN  "\033[32m"
#define RED    "\033[31m"
#define YELLOW  "\033[33m"
#define PURPLE  "\033[35m"

int main() {

  float receitaTotal = 0;
  float vendasCanceladas = 0;
  float descontosConcedidos = 0;
  float custoMercadorias = 0;
  float despesasVendas = 0;
  float despesasAdministrativas = 0;
  float despesasFinanceiras = 0;
  float impostoRenda = 0;

  float receitaLiquida = 0;
  float lucroBruto = 0;
  float lucroOperacional = 0;
  float lucroAntesImposto = 0;
  float lucroFinal = 0;

  puts(" -----------------");
  puts("|       DRE       |");
  puts(" -----------------\n");

  printf("Informe o valor total das vendas: ");
  scanf("%f", &receitaTotal);
  puts("-------------------------------------------------");
  printf("Informe o valor das vendas canceladas: ");
  scanf("%f", &vendasCanceladas);
  puts("-------------------------------------------------");
  printf("Informe o total de descontos concedidos: ");
  scanf("%f", &descontosConcedidos);
  puts("-------------------------------------------------");
  printf("Informe o custo total das mercadorias vendidas: ");
  scanf("%f", &custoMercadorias);
  puts("-------------------------------------------------");
  printf("Informe o valor das despesas de vendas: ");
  scanf("%f", &despesasVendas);
  puts("-------------------------------------------------");
  printf("Informe o valor das despesas administrativas: ");
  scanf("%f", &despesasAdministrativas);
  puts("-------------------------------------------------");
  printf("Informe o valor das despesas financeiras: ");
  scanf("%f", &despesasFinanceiras);
  puts("-------------------------------------------------");
  printf("Informe o valor do imposto de renda: ");
  scanf("%f", &impostoRenda);

  receitaLiquida = receitaTotal - vendasCanceladas - descontosConcedidos;
  lucroBruto = receitaLiquida - custoMercadorias;
  lucroOperacional = lucroBruto - despesasVendas - despesasAdministrativas;
  lucroAntesImposto = lucroOperacional - despesasFinanceiras;
  lucroFinal = lucroAntesImposto - impostoRenda;

  system("clear");
  
  printf("\n-------------------------------------------------\n");
    printf(YELLOW "\tDemonstração do Resultado do Exercício (DRE):\n" RESET);
    printf("-------------------------------------------------\n");
    printf( GREEN "(=) Receita Total: " RESET PURPLE"$%.2f\n\n", receitaTotal);
    printf( RED "\t(-) Vendas Canceladas: " RESET PURPLE"$%.2f\n\n" RESET, vendasCanceladas);
    printf(RED"\t(-) Descontos Concedidos: " PURPLE"$%.2f\n\n", descontosConcedidos);
    printf(GREEN "(=) Receita Líquida: " PURPLE "$%.2f\n\n" RESET, receitaLiquida);
    printf(RED"\t(-) Custo das Mercadorias Vendidas: " PURPLE "$%.2f\n\n", custoMercadorias);
    printf(GREEN"(=) Lucro Bruto: " PURPLE "$%.2f\n\n" RESET, lucroBruto);
    printf(RED "\t(-) Despesas de Vendas: " PURPLE " $%.2f\n\n", despesasVendas);
    printf(RED "\t(-) Despesas Administrativas:" PURPLE "$%.2f\n\n", despesasAdministrativas);
    printf(GREEN "(=) Lucro Operacional: " PURPLE "$%.2f\n\n", lucroOperacional);
    printf(RED "\t(-) Despesas Financeiras: " PURPLE "$%.2f\n\n", despesasFinanceiras);
    printf(GREEN"(=) Lucro Antes do Imposto: " RESET PURPLE "$%.2f\n\n", lucroAntesImposto);
    printf(RED "\t  (-) Imposto de Renda:" PURPLE " $%.2f\n\n", impostoRenda);
    printf(GREEN"(=) Lucro Final: " PURPLE "$%.2f" RESET, lucroFinal);
    printf("\n-------------------------------------------------\n");

  return 0;
}

