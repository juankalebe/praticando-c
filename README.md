# praticando-c

## Comentários em C:
  // para comentar uma linha
  
  /* */ para comentar um bloco de linhas

## Funções de saída
  ### printf
    > Formato para imprimir valores: printf("conteudo %d %f %c %s", <valor inteiro>, <valor real>, <caractere>, <string>);
    > Esses %X são chamados de máscaras que pegam o valor do lado direito seguindo a ordem sequencial
    > Em cada um desses < xxxx > o que importa é ter o valor final do tipo correto, ou seja, pode ser uma variável, uma função ou uma operação
    > Por padrão a máscara %f imprime valores reais com 6 números após a vírgula. Para formatar isso usamos: %.2f -> com isso eu estou falando que serão 2 números após a vírgula (no caso é ponto)
    
    Para formatação da impressão do printf temos os caracteres de escape: 
      \n -> equivale a um pulo de linha (um enter)
      \t -> equivale a um espaço ou uma tabulação
    
    Se você fizer <variavel_inteira> = printf("conteudo");
    O retorno da funcao printf será a quantidade de caracteres entre as aspas duplas. Os caracteres de escape equivalem a apenas um. \n contabiliza 1.

## Funções de entrada
  ### scanf
    formato para ler valores: scanf("%d%f%c", &<valor inteiro>, &<valor real>, &<caractere>);
    esses %X são chamados de máscaras que pegam o valor do lado direito seguindo a ordem sequencial
    o caractere & no início de cada valor após a primeira vírgula é porque o scanf precisa do endereço físico da variável na memória. A variável é uma região de memória e aí o & no início diz o endereço de memória certinho no qual está esse valor.
    
  ### getchar
    formato para leitura de char: <variavel>  = getchar();
    o getchar pega o caractere que for inserido e dá isso como retorno. Esse é o retorno da função getchar
  ### getc
    formato para leitura de char: <variavel>  = getc(stdin);
    o getc pega o caractere que for inserido e dá isso como retorno. A observação é o parâmetro stdin que equivale a dizer que será o caractere vindo do teclado, já que o getc pode pegar caracteres de outras fontes (arquivos)
  ### fgetc
    formato para leitura de char: <variavel>  = fgetc(stdin);
    o fgetc pega o caractere que for inserido e dá isso como retorno. A observação é o parâmetro stdin que equivale a dizer que será o caractere vindo do teclado, já que o fgetc faz parte da família de funções para pegar caracteres arquivos/files, por isso o f de files no início.

## Repositório para praticar linguagem C

Pasta break-continue possui exemplos desses dois comandos

Pasta de vetores possui exemplos de vetores

Pasta de strings possui exemplos de strings

Pasta de matrizes possui exemplos de matrizes
