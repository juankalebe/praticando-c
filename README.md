# praticando-c

## Comentários em C:
  // para comentar uma linha
  
  /* */ para comentar um bloco de linhas

## Operações matemáticas
  + -> 
  * ->
  - ->
  / -> se for para o int, ele coloca só a parte inteira, sem aproximar. Se fizer pelo float sem casas decimais (%.0f) ele aproxima
  % -> retorna o resto da divisão entre dois números
  ++ -> operador de incremento. exemplo: a++: incrementa 1 a variavel a e o ++a tambémm
  exemplo de diferença: printf("%d",a++); -> retorna valor de a, porque primeiro ele pega a variável para printar e depois ele soma
  printf("%d",++a); -> retorna valor de "a" mais 1, porque primeiro ele soma 1 ao valor de "a" e depois ele pega o "a" pra printar
  isso faz a mesma coisa que o +=1
  obs: resultado = contador++; -> assim a variavel resultado vai ficar com o valor de contador e depois a variavel contador vai ser incrementada por 1, ou seja, primeiro atribuiu a variável e depois fez o incremento
  fazendo resultado = ++contador; aí sim a atribuicao das variáveis é feita com o contador incrementado
  += -> a += b é o mesmo que a = a + b. é um operador de incremento, mas aqui vc define qual vai ser o valor do incremento 
  -- -> mesmo que o ++, mas agora é decremento

## Operações lógicas
  && -> equivalente ao "e"
  || -> equivalente ao "ou"
  != -> equiavlente a negação

## Estruturas de repetição
  FOR -> for(variavel; condicoes; incremento){comandos}
  WHILE -> while(condicoes){comandos}
  DO WHILE -> do{comandos}while(condicoes);

## Funções de saída
  ### printf
    > Formato para imprimir valores: printf("conteudo %d %f %c %s", <valor inteiro>, <valor real>, <caractere>, <string>);
    > Esses %X são chamados de máscaras que pegam o valor do lado direito seguindo a ordem sequencial
    > Em cada um desses < xxxx > o que importa é ter o valor final do tipo correto, ou seja, pode ser uma variável, uma função ou uma operação
    > Por padrão a máscara %f imprime valores reais com 6 números após a vírgula. Para formatar isso usamos: %.2f -> com isso eu estou falando que serão 2 números após a vírgula (no caso é ponto)
    
    Se você fizer <variavel_inteira> = printf("conteudo");
    O retorno da funcao printf será a quantidade de caracteres entre as aspas duplas. Os caracteres de escape equivalem a apenas um. \n contabiliza 1.

    #### Caracteres de escape
    Para formatação da impressão do printf temos os caracteres de escape: 
      \n -> equivale a um pulo de linha (um enter)
      \t -> equivale a um espaço ou uma tabulação
      \" -> aspa dupla
      \' -> aspa simples
      \\ -> contrabarra
      (existem outros menos utilizados)
    

## Funções de entrada
  ### scanf
    formato para ler valores: scanf("%d%f%c", &<valor inteiro>, &<valor real>, &<caractere>);
    esses %X são chamados de máscaras que pegam o valor do lado direito seguindo a ordem sequencial
    o caractere & no início de cada valor após a primeira vírgula é porque o scanf precisa do endereço físico da variável na memória. A variável é uma região de memória e aí o & no início diz o endereço de memória certinho no qual está esse valor.
    para cada variável a ser liga o scanf olha para o buffer do teclado e verifica se o que tem é do tipo que ele quer ou não
    por isso que o \n (enter) entra para leitura de caractere, já que é uma tecla do meu teclado
    Nos casos de int e float ele nao entra pq não atende esses tipos, tlgdo? ele é um caractere
    uma coisa para resolver é colocar um espaço antes do %c no scanf. Funcionou. Ver vídeo aula 
    https://youtu.be/qZOZxLwnDaA?si=X8GSy9mJz_lTFvcf
    o fflush(); só funciona no windows, então usar esse espaço antes do caractere é uma boa msm
    outra coisa que você pode fazer é colocar um scanf (ou um getchar) entre o scanf do primeiro caractere e do segundo
    pq com isso ele vai tirar o \n do buffer (limpa o buffer do teclado)
    
  ### getchar
    formato para leitura de char: <variavel>  = getchar();
    o getchar pega o caractere que for inserido e dá isso como retorno. Esse é o retorno da função getchar
  ### getc
    formato para leitura de char: <variavel>  = getc(stdin);
    o getc pega o caractere que for inserido e dá isso como retorno. A observação é o parâmetro stdin que equivale a dizer que será o caractere vindo do teclado, já que o getc pode pegar caracteres de outras fontes (arquivos)
  ### fgetc
    formato para leitura de char: <variavel>  = fgetc(stdin);
    o fgetc pega o caractere que for inserido e dá isso como retorno. A observação é o parâmetro stdin que equivale a dizer que será o caractere vindo do teclado, já que o fgetc faz parte da família de funções para pegar caracteres arquivos/files, por isso o f de files no início.

## Tipos de variáveis
  ### Conversão de tipos ou Casting
    de int para float. Sendo número direto vc pode simplesmente colocar ".0", pq com isso vc tá dando a parte decimal pra ele
    para uma variável vc faz (float) <variavel>
    pode também converter de float pra inteiro, da mesma forma, o cuidado é só se ligar que vc vai perder a parte decimal
    dá pra mudar de caracteres tbm

## Memória
  ### Unidades medida
      isso é útil pq teremos aplicações que a ocupação de memória importa
      bit = binary digit. É a menor unidade de armazenamento do computador (um 0 ou 1)
      1 byte = 8 bits
      1 kilobyte = 1024 bytes
      1024 kilobytes = 1 Megabyte
      1024 megabytes = 1 gigabyte
      1024 gigabytes = 1 terabyte

      como saber quanto de memória ocupa cada variável
      operador sizeof
      sizeof x ou sizeof (int) - ele retorna um int (entao pra printar é um %d de máscara). E o número é a quantidade de bytes
      para pegar de um tipo primitivo: sizeof(int) - nesse caso nao pode tirar o () - retorna 4, ou seja, um int ocupa 4 bytes ou 32 bits na memória.
      para pegar de uma variável sizeof(x) ou sizeof x

      sizeof não é uma função e sim um operador, por isso que no caso da variável pode deixar de usar o parênteses

      uso do operador short para diminuir o consumo de memória. basicamente no caso de um int que ocupa 4bytes, ele vai reduzir para a metade.
      Para usar ele vc faz na hora da declaração da variável, usando "short int <variavel>;"
      com isso a variável vai ocupara apenas 4bytes. Mas aí tem a questão de que o valor dele tem um limite menor do que o int né
      nesse caso vai ser de -32768 até 32767 (tem essa diferença pq em binário ele usa a representação de complemento de 2, tendo o MSB como bit de sinal)
      a máscara para uma variável desse tipo é %hi ou %d
      enquanto isso um número inteiro tem o seguinte intervalo
      -2.147.483.648 a 2.147.483.647 (funciona com a mesma ideia de representação com bit de sinal e complemento de 2)
      quando soma 1 a esse limite positivo, há um estouro de memória e aí vai para o limite negativo - pq aí ocorre uma confusão após somar mais 1 bit e ele acaba ficando no formato de complemento de 2 com aquele valor negativo
      uso do operador long para aumentar o espaço de memória
      máscara: %li ou %ld
      pode usar long long int (isso pq o long int ocupa o mesmo espaço que um int em algumas arquiteturas)
      e aí nesse caso a máscara vira %lli ou %lld
      no caso do vídeo o long int e o int ocupam 4 bytes e o long long int ocupa 8 bytes
      só aceita até long long int (nao vai mais um long) - pq aí já é 64 bits
      ** o short short int não funciona, o short só vai uma vez


      e o float?
      ele ocupa o mesmo espaço de memória, mas o arranjo é diferente, já que há a parte fracionada
      short float nao é aceito
      long float tbm nao é aceito
      aí no caso é o double que é um float com mais precisao - seria uma precisao dupla
      e o double ocupa 8 bytes
      ele é justamente para quando se precisa de uma grande precisao na área decimal
      máscara do double: %lf
      lembrando que por padrão as impressoes sao até 6 dígitos após a vírgula
      long double é possível? sim. ele ocupa 16 bytes
      máscara: %Lf (funciona em distribuições linux ou no mac direto no printf)
      no caso do windows ele nao suporta tudo isso de memória, por isso usa-se a funcao:
      __mingw_print(); - usa da mesma forma que do printf. usa o %Lf

## Repositório para praticar linguagem C

Pasta break-continue possui exemplos desses dois comandos

Pasta de vetores possui exemplos de vetores

Pasta de strings possui exemplos de strings

Pasta de matrizes possui exemplos de matrizes
