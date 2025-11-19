#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    /*Lista 1 - Operadores (matemáticos, lógicos e relacionais)*/

    /*1. Faça um programa que leia um número inteiro e escreva seu sucessor e 
    antecessor.*/

    int num, ant, suc;

    printf("\nDigite um número: \n");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("O antecessor de %d é %d", num, ant);
    printf("\nO sucessor de %d é %d\n", num, suc);

    printf("\n------------ FIM DA QUESTÃO 01 ------------\n");

    /*2. Faça um programa que leia duas notas (de 0 a 100) e informe a média aritmética e a média
    ponderada (pesos 2 e 3).*/

    float nota1, nota2;
    float mediaPonderada, mediaAritmetica;

    printf("\nDigite duas notas: ");
    scanf("%f %f", &nota1, &nota2);

    mediaPonderada = ((nota1 * 2) + (nota2 * 3)) / 5;
    mediaAritmetica = (nota1 + nota2) / 2;

    printf("\nA média aritmetica é: %f\n", mediaAritmetica);
    printf("\nA média ponderada é %f\n", mediaPonderada);

    printf("\n------------ FIM DA QUESTÃO 02 ------------\n");

    /*3. Faça um programa que leia o nome e sobrenome de uma pessoa em variáveis separadas, e
    em seguida exiba na tela o nome completo em uma única linha.*/

    /*Observação: Seria uma boa prática não passar o endeço no char nome e sobrenome*/
    // VEJA A DOCUMENTAÇÃO

    char nome1[50];
    char sobrenome[50];

    printf("\nInforme seu nome: ");
    scanf("%s", &nome1);

    printf("\nInforme seu sobrenome: ");
    scanf("%s", &sobrenome);

    printf("\nSeu nome mais seu sobrenome é: %s %s\n", nome1, sobrenome);


    printf("\n------------ FIM DA QUESTÃO 03 ------------\n");

    /*04. Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias (por
    exemplo, 32 anos, 5 meses e 17 dias) e mostre-a expressa apenas em dias (considerar que
    cada ano tem 365 dias e cada mês tem 30 dias).*/

    int anos, meses, dias;
    int expressao;

    printf("\nOBSERVAÇÃO: indique sua idade em anos + qunatos meses a mais você tem e quantos dias a mais você tem!\n");
    printf("\nQuantos anos você tem? ");
    scanf("%d %d %d", &anos, &meses, &dias);

    expressao = (anos * 365) + (meses * 30) + dias;

    printf("Você tem %d dias totais de vida!\n", expressao);

    printf("\n------------ FIM DA QUESTÃO 04 ------------\n");

    /*05. Faça um programa que leia um valor de hora (uma variável para a hora e outra para minuto) e
    informe quantos minutos se passaram desde o início do dia.*/

    int hora, minuto;

    printf("\nSão que horas? (h:m) ");
    scanf("%d:%d", &hora, &minuto);

    int minutos_totais = (hora * 60) + minuto;

    printf("Se passaram %d minutos totais\n", minutos_totais);

    printf("\n------------ FIM DA QUESTÃO 05 ------------\n");

    /*6. Faça um programa que recebe o nome completo de um funcionário, o número de horas
    trabalhadas por mês, o valor que recebe por hora trabalhada e o número de filhos. Com estas
    informações, o programa deve calcular o salário deste funcionário, sabendo que para cada filho,
    o funcionário recebe 3% a mais, calculado sobre o salário bruto.*/

    char nome[100];
    float horas, valorHora, salarioBruto, adicional, salarioTotal;
    int filhos;

    printf("\nO nome completo do funcionáro é: ");
    scanf("%s", nome);

    printf("\nO número de horas trabalhadas no mês: ");
    scanf("%f", &horas);

    printf("\nO valor recebido por hora trabalhada é de: R$ ");
    scanf("%f", &valorHora);

    printf("\nO número de filhos desse funcionário é de: ");
    scanf("%d", &filhos);

    salarioBruto = horas * valorHora;
    adicional = salarioBruto* (0.03 * filhos);
    salarioTotal = salarioBruto + adicional;

    printf("\nFuncionário: %s", nome);
    printf("Salário bruto: R$ %.2f\n", salarioBruto);
    printf("Adicional por filhos: R$ %.2f\n", adicional);
    printf("Salário total: R$ %.2f\n", salarioTotal);

    printf("\n------------ FIM DA QUESTÃO 06 ------------\n");

    /*7. Sabe-se que para iluminar 1 metro quadrado de um ambiente são necessários 18W de
    potência. Faça um programa que recebe a largura e a profundidade de uma sala e informa
    quantas lâmpadas de 60 W de potência são necessárias para iluminar a sala.*/

    float largura, profundidade, area, potencia_necessaria;
    int lampadas;

    printf("Largura da sala (m): ");
    scanf("%f", &largura);

    printf("Profundidade da sala (m): ");
    scanf("%f", &profundidade);

    area = largura * profundidade;
    potencia_necessaria = area * 18;

    lampadas = potencia_necessaria / 60;
    if ((int)potencia_necessaria % 60 != 0)
        lampadas++; 

    printf("\nSão necessárias %d lâmpadas de 60W.\n", lampadas);

    printf("\n------------ FIM DA QUESTÃO 07 ------------\n");

    /*8. Faça um programa para ler o número de votos brancos, nulos e válidos de um município.
    Calcule e imprima o percentual que cada um representa em relação ao total de eleitores.*/

    int brancos, nulos, validos, total;
    float p_brancos, p_nulos, p_validos;

    printf("Votos brancos: ");
    scanf("%d", &brancos);
    printf("Votos nulos: ");
    scanf("%d", &nulos);
    printf("Votos válidos: ");
    scanf("%d", &validos);

    total = brancos + nulos + validos;

    p_brancos = (brancos * 100.0) / total;
    p_nulos = (nulos * 100.0) / total;
    p_validos = (validos * 100.0) / total;

    printf("\nPercentual de votos brancos: %.2f%%", p_brancos);
    printf("\nPercentual de votos nulos: %.2f%%", p_nulos);
    printf("\nPercentual de votos válidos: %.2f%%\n", p_validos);

    printf("\n------------ FIM DA QUESTÃO 08 ------------\n");

    /*9. Faça um programa para ler uma temperatura em graus Fahrenheit, calcular e imprimir o valor
    correspondente em graus Celsius (baseado na fórmula abaixo): c/5 = (f-32)/9*/

    float f, c;

    printf("Temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = (5.0 / 9.0) * (f - 32);

    printf("Temperatura em Celsius: %.2f°C\n", c);

    printf("\n------------ FIM DA QUESTÃO 09 ------------\n");

    /*10. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do
    distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do
    distribuidor seja de 28% e os impostos de 45%, faça um programa para ler o custo de fábrica
    de um carro, e então imprimir o custo final ao consumidor.*/

    float custo_fabrica, custo_final;

    printf("Custo de fábrica: R$ ");
    scanf("%f", &custo_fabrica);

    custo_final = custo_fabrica + (custo_fabrica * 0.28) + (custo_fabrica * 0.45);

    printf("Custo final ao consumidor: R$ %.2f\n", custo_final);

    printf("\n------------ FIM DA QUESTÃO 10 ------------\n");

    /*11. Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por
    mês, mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas
    por ele efetuadas. Faça um programa que leia o número de carros vendidos por ele, o valor
    total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e imprima
    o salário final do vendedor.*/

    
    
    int carros_vendidos;
    float valor_total_vendas, salario_fixo, comissao_por_carro, salario_final;

    printf("Número de carros vendidos: ");
    scanf("%d", &carros_vendidos);

    printf("Valor total das vendas: R$ ");
    scanf("%f", &valor_total_vendas);

    printf("Salário fixo: R$ ");
    scanf("%f", &salario_fixo);

    printf("Comissão por carro vendido: R$ ");
    scanf("%f", &comissao_por_carro);

    salario_final = salario_fixo + (carros_vendidos * comissao_por_carro) + (0.05 * valor_total_vendas);

    printf("\nSalário final do vendedor: R$ %.2f\n", salario_final);

    printf("\n------------ FIM DA QUESTÃO 11 ------------\n");
    
    
    printf("\n------------------------------------- FIM DA LISTA -------------------------------------\n");







    return 0;
}