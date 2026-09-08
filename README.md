# 💻 Estudo de Linguagem C

Este repositório contém códigos-fonte da linguagem de programação C, onde se mantém em mente que Eduardo retirou todas as demonstrações e exercícios, em fonte principal, o livro "Estudo dirigido de Linguagem C", pelo autor José Augusto N. G. Manzano, além de outras consultas externas pela internet.

[Material de Estudo Online](https://pdfcoffee.com/estudo-dirigido-de-linguagem-c-pdf-free.html)

Este `README.md` servirá como consulta direta a informações mais abstratas ou procedurais, estas quais se encontram incompatíveis com linhas de comentário tradicionais.

## 📚 Capítulos

O conteúdo do livro inicia-se com a contextualização histórica e ambiente de desenvolvimento, marcados pelos capítulos **1: Antes de Começar** e **2: O Ambiente de Trabalho**, com informações adicionais nas próximas seções deste README.

Os exercícios e demonstrações, marcados pelas pastas `exerc` e `demos`, respectivamente, iniciam a programação em C, constituindo a seguinte ordem:

3. Programação Sequencial
4. A Tomada de Decisões
5. Laços de Repetição
6. Tabelas em Memória
7. Funções e Suas Bibliotecas
8. Arquivos em Disco

## 📖 Introdução e Histórico

A partir do século XIX, inúmeras tentativas de construir aparelhos mecânicos para efetuar operações matemáticas ocorreram. O modelo eletrônico se sobressaiu, e por consequência os computadores ganharam espaço, para até mesmo utilizá-los para objetivos além de sua premissa inicial.

Em 1972, no laboratório da empresa antiga Bell Telephone Labs. Inc, a linguagem de programação para computadores "C" foi projetada, por Dennis M. Ritchie, com o objetivo de usá-la na codificação da segunda versão do sistema operacional UNIX para a equipe de trabalho chefiada por Ken Thompson.

A primeira versão do UNIX foi escrita em Assembly para o computador DEC PDP-11, precursor dos atuais minicomputadores. A partir da segunda versão até hoje o UNIX é escrito em C.

A linguagem C faz parte de uma linhagem de linguagens iniciada com ALGOL, passando por BCPL e B. A linguagem B foi criada por Ken Thompson como uma evolução da linguagem BCPL, desenvolvida por Martin Richards. Posteriormente, Dennis Ritchie desenvolveu a linguagem C nos laboratórios Bell para uso no sistema Unix. A linguagem sucessora de C foi chamada de C++, criada por Bjarne Stroustrup, adicionando suporte à programação orientada a objetos.

O C foi criado a partir da necessidade de escrever programas que utilizem os recursos internos de máquina de uma forma mais fácil que o Assembly, permitindo então a integração direta entre alto nível e baixo nível.

Sua grande aceitação provém da efetiva conciliação com a linguagem de baixo nível com seu alto grau de portabilidade, ou seja, teoricamente um programa escrito em C pode ser executado em qualquer plataforma.

## 🛠️ Ambiente de Trabalho

É necessário entender o contexto de criação da linguagem C, que foi feita para o sistema UNIX. O kernel do Linux foi projetado para ser UNIX-Like, ou seja, funcionalmente similar ao seu precursor, porém construído do zero. Estas características implicam que o sistema operacional Windows, naturalmente, possui menor afinidade com a linguagem. 

Portanto, a solução encontrada foi utilizar a tecnologia Windows Subsystem for Linux, um container que consegue virtualizar uma distro Linux para ser utilizada diretamente pela interface do Windows, no modo CLI padrão.

### 🪟 Passo a Passo (Instalação do WSL + GCC no Windows)

#### 🐚 PowerShell

1. Execute o PowerShell como Administrador e escreva:
  - `wsl --install`
2. Reinicie sua máquina, conforme as próprias instruções do instalador sugerem;
3. Após reiniciar, reabra o PowerShell e escreva:
  - `wsl --list --online`
Este comando listará todas as distros disponíveis para utilizar no container.
> Distro utilizada: Debian
4. Para instalar a distro desejada, siga:
  - `wsl --install nomeDistro`
5. Para acessar a distro, escreva:
  - `wsl`

> Aviso: Caso o usuário tenha instalado mais distros, perceba que ao digitar o comando acima, somente uma distro padrão será sempre executada. Para contornar isto, utilize `-d nomeDistro` para especificar qual sistema operacional é o desejado ou `-s nomeDistro` para alterar a distro padrão.

#### 🐧 Debian (WSL)

Para instalar o **editor de texto** dentro do ambiente Debian, utiliza-se:

- `sudo apt install gedit` para interface gráfica (beginner-friendly)
- `sudo apt install vim` para um editor poderoso, porém com curva de aprendizagem íngrime no início

Para instalar o **toolchain** do C, utiliza-se:

- `sudo apt install build-essential`

Este pacote possui o conjunto de ferramentas necessárias para transformar código fonte em programa executável, sendo esta baseada em GNU Compiler Collection.

Principais componentes:
  - `gcc` - compila C
  - `g++` - compila C++
  - `make` - automatiza builds
  - `libc` - biblioteca padrão
  - `binutils` - ferramentas de link


A partir deste processo, é possível escrever códigos em C e compilá-los para execução facilmente.

### ⚙️ Processo de Compilação e Execução

Para demonstrar o processo para a execução do programa, o teste demonstrará um código simples:

``` c
#include <stdio.h>
int main(){
    printf("Hello, World!\n");
    return 0;
}
```

> Ao iniciar a distro, o usuário estará por padrão em seu diretório pessoal (~), normalmente localizado em `/home/usuario`. - É dentro deste diretório onde recomenda-se organizar arquivos pessoais, visto que os demais diretórios na raiz do sistema são utilizados pelo próprio sistema operacional Linux.

Para organizar o desenvolvimento, também é sugerido criar um novo diretório chamado "c" com o seguinte comando:
  - `mkdir ~/c && cd ~/c`
Com isto, será criada a pasta e acessada ao mesmo tempo.

Após a criação da pasta, escreva no bash `gedit hello.c` para acessar o editor de texto com um nome de arquivo já definido (recomendado, dado a limitações comuns do WSL ao renderizar apps gráficos do Linux). 

O próximo passo será colar o código C acima, pressionar `Ctrl + S` para salvar e fechar o editor com `Alt + F4` ou clique no X.

O arquivo "hello.c" está pronto para ser compilado, através do comando GCC:
  - `gcc hello.c -o hello`
  
Explicação: O comando compilará o código fonte escrito em C e transformará o nome do executável em "hello". Caso não houvesse a instrução final "-o hello", o nome do arquivo gerado seria "a.out" - Nome originado de assembler output.

Por fim, apenas digite o nome do arquivo executável para rodar diretamente no bash:
- `./hello`

O `./` se vê necessário, pois sistemas baseados em UNIX não procuram no diretório atual automaticamente.

## 🎲 Tipos de Dados

### 🔢 Dados Inteiros

| Tipo | Faixa de abrangência | Tamanho |
| --- | --- | --- |
| unsigned short / unsigned short int | de 0 a 65.535 | 16 bits |
| short / short int / signed short int / signed short | de -32.768 a 32.767 | 16 bits |
| unsigned int | de 0 a 4.292.967.295 | 32 bits |
| int / signed int | -2.147.483.648 a 2.147.483.647 | 32 bits |
| unsigned long / unsigned long int | 0 a 18.446.744.073.709.551.615 | 64 bits |
| long / signed long | -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807 | 64 bits |
| long long | -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807 | >= 64 bits |

> As centenas dos números inteiros estão separadas por '.' para melhor legibilidade. Não confundir com números decimais.

#### 💭 Considerações

* Observa-se que ao atribuir um inteiro como unsigned, permite que a variável dobre o seu tamanho natural somado por 1 (zero incluso)
* Os valores numéricos int ocupavam 2 bytes (16 bits) quando utilizados em sistemas-padrão operacionais MS-DOS e ainda podem variar de tamanh
* Utilizar somente `short` ou `long` com a intenção de definir uma variável int com o tamanho especificado é o suficiente
* Por padrão, o int é `signed`, portanto cabe ao desenvolvedor decidir se utilizará essa nomenclatura no código

**Importante:** Em certos casos, o tipo `long` continua sendo de 32 bits. Isto se dá devido a divergências entre sistemas operacionais. Portanto, para garantir uma abrangência de 2^64, considere sempre declarar com `long long`.

##### 🔎 Soluções 

Uma maneira interessante de descobrir a quantidade de bytes teóricos de um tipo no sistema é utilizando o operador `sizeof()`. Para a obtenção em bits, multiplique por 8.

Para garantir que o tipo seja **fixo* e previsível, a biblioteca `<stdint.h>` permite declarações de variáveis inteiras que substituem o tipo nativo. Ex: `uint32_t = 12`, `int32_t = -12`

### 📏 Dados Reais

| Tipo | Faixa de abrangência | Tamanho |
| --- | --- | --- |
| float | de -3.4^38 a 3.4^38 | 32 bits |
| double | de -1.7^308 a 1.7^308 | 64 bits |
| long double | de -3.4^4932 a 1.1^4932 | 96 bits |

### 🔤 Dados Caracteres

| Tipo | Faixa de Abrangência | Tamanho |
| --- | --- | --- |
| char / signed char | de -128 a 127 | 8 bits |
| unsigned char | de 0 a 255 | 8 bits |
| char | Pode ser considerado signed char ou unsigned char, dependendo do sistema | 8 bits |

São classificados como caracteres os dados inteiros que representam números especiais delimitados com aspas simples (' '), armazenados em variáveis simples, com base na estrutura da tabela de caracteres do computador, chamada tabela ASCII (American Standard Code Information Interchange).

### ⚡ Dados Lógicos

Na linguagem C não existe um dado lógico ou booleano propriamente dito, ou seja, não existirão os valores lógicos `true` ou `false` para um determinado dado, de forma predefinida. Nessa linguagem qualquer valor igual a 0 é considerado um valor lógico falso, e qualquer valor diferente de zero, que será representado pelo número 1, será considerado um valor lógico verdadeiro.

### 🕸️ String

Na linguagem C, uma string é simplesmente um vetor de caracteres.

Utilizando a biblioteca `stdio.h` (Standard Input Output Header), o método `scanf` pode ser utilizado com o código de formatação `%s` para leitura de uma série de caracteres, sem mesmo a necessidade de apontar para o endereço de memória da variável.

Toda string em C termina com o caractere `\0`, este que também é implementado automaticamente após o uso do espaço (caractere branco).

Por isso, uma alternativa para resolver este problema é a função de entrada `fgets()`, com o propósito de ler dados do tipo string fornecidos via teclado e que aceita caracteres em branco no meio da string, colocando o caractere de controle "\n" apenas quando a tecla ENTER for pressionada.

## 🦴 Estrutura de Dados

Assim como em outras linguagens de programação compiladas, o C se encontra na necessidade da tipagem para vetores e matrizes comuns, ou seja, um array `int vetor[10];` só poderá armazenar valores inteiros numéricos dentro de sua estrutura.

No entanto, existe uma estrutura de dados heterogênea (permite múltiplos tipos), denominada como `struct`, onde também há o benefício de reutilizar os mesmos dados definidos internamente em N variáveis (geralmente resumido por um vetor/matriz)

> Structs "aninhadas" são totalmente possíveis em C.

As structs definem o layout de um registro. Ao salvar uma struct em um arquivo binário, grava-se a imagem exata da memória RAM no disco. Isso permite que, ao ler o arquivo futuramente, possamos 'reconstruir' o objeto instantaneamente sabendo onde cada campo começa e termina.

### 🔍 Funcionamento

Ao declarar uma struct, o C reserva agrupa todos os campos um lado do outro na memória, diferente de linguagens como Python.

O tamanho do bloco reservado é calculado através do tamanho em bytes de cada variável. O exemplo abaixo demonstra uma struct que ocupa 5 bytes no total.


```c
struct Personagem {
    char id; // 1 byte
    int vida;
}
```

#### ⏹️ Padding

Devido a preferência do processador em ler dados em "slots" (cerca de 4 a 8 bytes), para ganhar velocidade, o compilador às vezes coloca bytes mortos entre os campos de uma struct.

> Isso se chama Memory Alignment

A ordem dos campos dentro da struct pode mudar o tamanho total dela no disco/RAM.

## 📦 Funções 

O C é por sua natureza uma lingagem de programação estruturada. A maior parte de seus recursos é conseguida com a utilização de funções, como `main()`, `printf()`, `scanf()`, `fgets()`, `strcmp()`, `strcpy()`. Com isso, conclui-se que a linguagem possui uma coleção de bibliotecas built-in, tais como `stdio.h` e `string.h`

**Função** é um trecho independente de código de programa com atribuições bem definidas. Uma função (também pode ser demominada como sub-rotina) pode ser interna ou externa:

- É considerada função interna quando faz parte do compilador. O conjunto das funções internas forma a chamada biblioteca de funções, como as bibliotecas-padrão de entrada e saída e string
- É considerada função externa quando é desenvolvida e implementada por um programador com a finalidade de atender a uma necessidade em particular

De forma geral, uma função sempre deve retornar algum tipo de valor como resposta de sua execução, segundo norma ISO da linguagem C, exceto quando uma função estiver sendo usada como um procedimento que é uma forma de sub-rotina, utilizada para executar trechos acessórios de código, que não possuem como ação devolver algum tipo de valor como resposta.

O recurso de função torna a programação com linguagem C algo bastante versátil, visto que:

- Em termos de portabilidade, trechos dos programas que não possam ser aproveitados em outras plataformas pode ser facilmente isolados para facilitar a migração do programa para outro computador ou mesmo compilador, alterando apenas as funções inativas
- Em termos de modularidade, tem-se o programa dividido em vários módulos, e cada módulo desempenha uma função. Essa estratégia de programação facilita a manutenção dos programas construídos.
- O programador torna-se capaz de criar as suas próprias bibliotecas de funções pessoais, o que faz com que a programação torne-se mais eficiente, porque é possível aproveitar códigos de programa que já foram testados, os quais podem ser usados sem problemas em novos programas.

### 📚 Bibliotecas

Uma biblioteca de função em linguagem C é o conjunto de rotinas prontas para serem usadas pelo programador. O compilador GCC possui um conjunto extenso de bibliotecas com diversas funções de suporte a linguagem. No entanto, além das bibliotecas existentes no compilador, é possível fazer uso de bibliotecas de funções fornecidas por terceiros

#### Bibliotecas do Compilador GCC

| Biblioteca | Descrição |
| --- | --- |
| stdio.h | Essa biblioteca é a mais utilizada em C, pois é a padrão, na qual estão embutidas as funções printf(), puts(), gets(), scanf(), entre outras.
| math.h | Possui as funções matemáticas usadas pela linguagem. Encontram-se funções trigonométricas, hiperbólicas, exponenciais, logarítimicas, entre outras. |
| string.h | Esta possui as rotinas de tratamento de strings e caracteres, na qual se encontram as funções strcmp(), strcpy(), entre outras. |
| time.h | Essa biblioteca possui as funlçoes de manipulação de data e hora do sistema |
| stdlib.h | Possui um conjunto de funççpes que não se enquadra em outras categorias. As funções dessa biblioteca são conhecidas como "funções miscelâneas". |

#### Incluindo uma biblioteca

Para usar uma biblioteca, é necessário incluir uma diretiva que seja colocada antes da declaração principal `main()`, com a palavra-chave `#include`.

Uma diretiva em C é uma instrução (cláusula) precedida pelo caractere "#". Após o símbolo, escreve-se uma palavra reservada do dicionário do pré-processador, como `#define`.

O pré-processador é um programa que verifica o código-fonte escrito em C e realiza as modificações nele. Ele recebe este nome pelo fato de ser o primeiro programa a ser executado em um processo de compilação, fazendo com que o código-fonte seja alterado, na forma de texto, antes de ser propriamento compilado, ou seja, sua tradução para o código-objeto (programa em linguagem de máquina) para depois ser definido como um executável para o computador.

Após a definição de #include, envolve-se o nome de arquivo do cabeçalho com `<>` caso seja **padrão** da toolchain ou `""` para navegar manualmente.

A razão para preferir incluir headers (arquivos `.h`) se dá pois esta é uma convenção da linguagem. Em headers, encontram-se somente as assinaturas das funções, isto é, suas definições de tipos, nomes e parâmetros sem instruções de máquina evidenciadas por `{}`. 

No entanto, para que o compilador entenda O QUE executar após a declaração da assinatura, é necessário fazer uma linkagem com o arquivo que realmente instrui o que as funções devem fazer, compilando o código principal chamando a biblioteca.

Exemplo:

```c
// Arquivo de cabeçalho (exemplo.h)
int soma(int a, int b);
```

```c
// Execução da assinatura (exemplo.c)
int soma(int a, int b) {
    return a + b;
}
```

```c
// Implementação real (main.c)
#include <stdio.h>
#include "exemplo.h"

int main(void) {
    int n1 = 1, n2 = 3;
    printf("A soma entre 1 e 3 é %d", soma(n1, n2));
    return 0;
}
```

Por fim, compilando no terminal:

```bash
gcc main.c exemplo.c -o programa
```

OBS: Bibliotecas-padrão da GCC não passam por esse processo por fazerem parte do arquivo binário `libc` que são linkadas automaticamente com qualquer programa compilado.

### Sintaxe

De forma geral, a sintaxe de uma função é definida como:

```plain text
[<tipo>] <nome> ([<parâmetros>])
[<tipos de parâmetros>];
{
    [<variáveis (locais)>];
    [<instruções>];
}
```

em que:

- `<tipo>` - Tipo de dado ao qual a função dará retorno
- `<nome>` - O nome atribuído ao procedimento
- `<parâmetros>` - Uma informação opcional
- `<tipos de parâmetros>` - Quando existente, necessita declarar tipo
- `<variáveis>` - Lista de variáveis locais (opcionais)
- `<instruções>` - Processamento do corpo da função

## 🪧 Ponteiros

Os ponteiros em C são variáveis que não guardam valores comuns (como `10` ou`'a'`), mas sim endereços de memória: Ou seja, as coordenadas do dado.

Estes endereços são representados em hexadecimal (iniciados pelo prefixo 0x), e indica uma posição física dentro da RAM. Cada dígito equivale a 4 bits. Em sistemas modernos de 64 bits, embora o ponteiro ocupe 8 bytes, o hardware geralmente utiliza 48 bits para endereçamento físico.

A função principal dos ponteiros é permitir que funções alterem variáveis que estão fora de seu escopo (como variáveis dentro da `main()`) sem precisar de variáveis globais. Este conceito é chamado de **passagem por referência**

Na criação do ponteiro, utiliza-se:

1 - Tipagem da variável (int, char, float)  
2 - O caractere `*` para indicar que se trata de um referencial
3 - O nome do ponteiro, escrito logo após o `*` anterior, sem espaços.

Na atribuição do ponteiro, o operador `&` extrai o endereço em hexadecimal de uma variável comum para armazenar em si. ex: `p = &a`

Na desreferenciação, define-se que a variável `p` (sem asterisco) indica o próprio endereço da variável a, enquanto `*p` (com asterisco) indica o valor dentro da variável a;

```c
printf("%d", *p); // Imprime o valor. Exemplo: 10
printf("%p", p); // Imprime o endereço. Exemplo: 0x7ff...
```

Por se tratar de uma ferramenta poderosa, sua aplicação no sistema operacional é limitada para previnir acesso à memórias proibidas, desencadeando o erro "Segmentation Fault" caso haja tentativas.

### 🔽 Ponteiros com Structs

Existe um operador para manipular uma struct através de um ponteiro, no qual é `->` (muito comum em arquivos e funções), substituindo o `.`

```c
aluno.nota = 10; // Acesso direto
ptr_aluno->nota = 10; // Acesso via endereço de memória
```
O operador `ptr->campo` é um atalho para `(*ptr).campo`, que busca o endereço de memória, entra na estrutura e altera o campo.

## 🖥️ Terminal ANSI

O ANSI (American National Standards Institute) supervisiona normas que garantem a compatibilidade entre diferentes sistemas. No contexto de interfaces, o padrão ANSI define como o software deve se comunicar com o terminal.

### Terminal

Originalmente, era um hardware físico (teclado e monitor) usado para acessar computadores de grande porte. Atualmente, utilizam-se emuladores de terminal (como o Windows Terminal no WSL), que simulam o comportamento desses aparelhos clássicos via software.

### Sequências de Escape ANSI

O padrão ANSI oferece um controle padronizado sobre o terminal através de sequências de caracteres especiais. Com elas, um programa escrito em C pode:

- Alterar cores de fundo e do texto
- Mover o cursor para posições específicas da tela
- Limpar o console ou linhas específicas

Isso permite criar interfaces visuais simples (conhecidas como TUI - Text User Interface) mesmo em ambientes de linha de comando.

> Este controle é acionado através de uma chamada de printf(), que envia dados para o stdout, vigiado pelo terminal.

| Sequência ESC | Função | Descrição |
| --- | --- | --- |
| ESC[2J | Limpar vídeo | Efetua a limpeza do vídeo e posiciona o cursor no topo esquerdo da tela. |
| ESC[K | Limpar linha | Efetua a limpeza da linha a partir da posição em que o cursor estiver parado.
| ESC[s | Salva posição | Salva a posição atual do cursor para posterior restauração. |
| ESC[u | Restaura posição | Restaura a posição do cursor previamente salvo com a sequência de salvamento. |
| ESC[ valor A | Cursor para cima | Move o cursor para cima o número de vezes estabelecido no parâmetro valor.
| ESC[ valor B | Cursor para baixo | Move o cursor para baixo o número de vezes estabelecido no parâmetro valor. |
| ESC[ valor C | Cursor para direita | Move o cursor para a direito o número de vezes estabelecido no parâmetro valor. |
| ESC[ valor D | Cursor para esquerda | Move o cursor para a esquerda o número de vezes estabelecido no parâmetro valor. |
| ESC[ lin;col H | Posiciona cursor | Move o cursor para a lin(linha - 1 a 25) e col (coluna - 1 a 80) especificadas. |

O caractere 'ESC', para ser enviado como byte, precisa ser substituido por sua representação octal `\033` ou hexadecimal `\x1B` (menos comum), correspondendo ao valor 27 na tabela ASCII.

O octal, por ser limitado a uma leitura de somente 3 dígitos dentro do compilador (de 0 a 7), se torna uma opção mais viável, visto que o hexadecimal permanece lendo a sequência de caracteres enquanto encontrar caracteres que pertençam ao sistema (0-9, A-F).

#### Exemplo prático

``` c
// Código ANSI para: Vermelho, Negrito, e mover cursor para Linha 5, Coluna 10
printf("\033[1;31m"); // Seta cor e estilo
printf("\033[5;10H"); // Move o cursor
printf("ALERTA!");    // Escreve o texto
printf("\033[0m");    // Reseta tudo para o padrão (MUITO IMPORTANTE!)
```

É considerar que estes escapes são utilizados diretamente pelo emulador de terminal e não pelo programa em si. O código apenas o ativa por intermédio de suas instruções.


## 🧱 Argumentos de `main()`

A utilização dos parâmetros `int argc, char *argv[]` permite que o executável do programa responda diretamente ao terminal, sem necessidade de inputs de execução internas, como `scanf()`.

### `argc`

O argument count é responsável por contar quantas palavras (caracteres separados por espaços) foram escritos no comando

### `argv`

O argument vector analisa o conteúdo dessas palavras e processsa no código C.

Esse é um ponteiro de ponteiro (`char**`), que na prática é um array onde cada elemento guarda um endereço de memória para uma string.

### Pontos importantes

O `argc` sempre começa com o valor 1

O `argv` "útil" sempre começa com argv[1]

Isso acontece pois a chamada do executável também se trata de um argumento.

## 📁 Arquivos

É um conjunto de registros (que pode ser apenas um registro), que, por sua vez, é um conjunto de campos (que pode ser apenas um campo), sendo cada campo o conjunto de informações

A principal vantagem de um arquivo é que as informações armazenadas podem ser consultadas a qualquer momento, além de permitir um número consideravelmente maior do que uma tabela em memória. Está limitado apenas ao tamanho do storage para gravação.

Arquivos em C podem ser acessados para leitura e escrita de duas formas.

### 📼 Acesso Sequencial

Ocorre quando o processo de gravação e leitura é feito de forma contínua, um após o outro a partir do primeiro registro, seguindo de registro a registro, até localizar a primeira posição vazia após o último registro. O processo de leitura também ocorre de forma sequencial. Se o registro a ser lido é o último, primeiramente será necessário ler todos os registros que o antecedem. Esse processo é considerado lento.

### 💿 Acesso Aleatório

O acesso aleatório ocorre com a transferência de dados diretamente para qualquer posição do arquivo, sem que para isso as informações anteriores precisem ser lidas (acesso sequencial). O acesso aleatório a um arquivo pode ser feito de três formas diferentes, com relação ao posicionamento do ponteiro dentro do arquivo: Início do arquivo, fim do arquivo ou o posicionamento atual do ponteiro no arquivo.

#### 🔧 Ferramentas

`fseek()`: É o comando que indica quantos bytes o programador quer mover e a partir de onde (início, atual ou fim).

`ftell()`: Retorna um número inteiro dizendo em qual byte o ponteiro está exatamente agora.

`rewind()`: Volta o ponteiro para o byte 0 imediatamente.

### 🧮 Operações com Arquivo

Um arquivo em C é do tipo `FILE`, uma estrutura que realiza a comunicação entre a memória volátil e o storage, por meio do código e do sistema operacional.

**Sintaxe:** `FILE *ponteiro`

Para conseguir utilizar, basta incluir a biblioteca `stdio.h` antes de `main()`.

Para usar um arquivo (ler ou escrever), é necessário executar duas operações básicas, sendo abertura e fechamento, conseguidas com as instruções `fopen()` e `fclose()`, desde que o arquivo exista. Após estas operações, ele precisa ser fechado.

**Abrir um arquivo:** `ponteiro = fopen("nome_arquivo", "tipo de abertura");`

**Fechar:** `fclose(ponteiro);`

**Escrever:** `fwrite(ponteiro_dados, tamanho, quantidade, ponteiro_arquivo`

    - Ponteiro de Dados: Onde está o `struct` na RAM (ex: `&aluno`)
    - Tamanho: Geralmente utiliza-se `sizeof(tipo)` para indicar quantos bytes uma unidade possui
    - Quantidade: Quantos registros de byes serão gravados de uma vez
    - Ponteiro Arquivo: O `FILE *p` retornado pelo `fopen()`

**Ler:** `fread(ponteiro_destino, tamanho, quantidade, ponteiro_arquivo`
    - Ponteiro Destino: O endereço da variável na RAM que vai receber os dados (ex: `&aluno`)
    - Os outros parâmetros funcionam da mesma forma que em `fwrite()`

> Enquanto a função de escrita empurra os dados da RAM para o disco, a função de leitura puxa o que contém no disco para a RAM.

#### 🔐 Segurança de Acesso

É importante verificar se o ponteiro retornado por `fopen()` é diferente de NULL, pois tentar ler ou escrever em um arquivo que falhou ao abrir resultará em *Segmentation Fault* pela tentativa de acesso a um endereço de memória inválido.

#### 🚪 Acessando Arquivos

##### 📦 Funções p/ Manipulação

| Função | Uso indicado | Descrição |
| --- | --- | --- |
| `fputc`/`fgetc` | Caractere | Lê ou escreve um único byte por vez. |
| `fprint`/`fscanf` | Texto formatado | Funciona como um `printf` comum, mas direcionado ao arquivo. |
| `fwrite`/`fread` | Blocos/Structs | As mais poderosas. Copia um bloco inteiro da RAM para o disco (ou vice-versa) de uma vez só. |

###### 📄 Arquivos Texto

Feitos para serem lidos por humanos no Notepad. Suas operações podem sofrer alterações pelo sistema operacional (como carriage return `\r` no Windows).

| Tipo de Abertura | Descrição |
| --- | --- |
| r | Este código permite apenas abrir um arquivo texto para leitura de seus dados. É necessário que o arquivo esteja presente no disco. |
| w | Este código permite apenas abrir um arquivo para escrita (gravação). Este código cria o arquivo para ser trabalhado. Caso o arquivo exista, este código recria o arquivo, ou seja, você perde o arquivo criado anteriormente (overwrite). Deve ser usado com cuidado. |
| a | Este código permite apenas abrir um arquivo texto para escrita (gravação), permitindo acrescentar novos dados ao final dele. Caso o arquivo não exista, ele será então criado. |

###### 🔌 Arquivos Binários

Se trata da "escovação de bits" real. O C grava a imagem exata da memória RAM no disco.

> Dica: Sempre utilize o modo binário para salvar structs. É muito mais rápido e o arquivo fica menor.

**Modo Binário Comum:**

| Modo | Descrição |
| --- | --- |
| rb | Abre um arquivo binário existente apenas para leitura. |
| wb | Cria um arquivo binário vazio para escrita. Se já existir, ele apaga tudo (overwrite) |  
| ab | Abre um arquivo binário para adicionar dados no fim. Se não existir, ele cria um. |

**Modo Binário Misto:**

| Modo | Descrição |
| --- | --- |
| rb+ | Abre para leitura e escrita (o arquivo deve existir). |
| wb+ | Abre para leitura e escrita, mas apaga o que já existia. |
| ab+ | Abre para leitura e escrita, mas tudo o que for escrito vai para o final do arquivo. |

> Abrir um arquivo texto para manipular bytes puros é perigoso, pois o sistema operacional realiza conversões automáticas de caracteres de controle.

> Para garantir a integridade dos dados, imagens ou áudio, deve-se sempre usar o modo binário, que garante uma cópia bit a bit idêntica entre a RAM e o Storage.

### 🛣️ EOF (End of File)

Não é um caractere de controle de fim de arquivo, mas um valor inteiro enviado ao programa pelo sistema operacional. Representado no arquivo stdio.h como sendo -1.

Ao ler um arquivo caractere por caractere (usando `fgetc`), a variável que recebe o dado deve ser do tipo `int` e não `char`.

Isso acontece pois o tipo `char` em alguns sistemas é unsigned (sem sinal), e não consegue representar o -1, resultando em um possível loop que nunca termina como `while (c != EOF)`.

> Indica quando a leitura de um arquivo termina.

## 💫 Fatos interessantes

O comando `else if` em C não é exatamente uma única instrução para a máquina. Ele se dá através de **junção** das intruções if (se) e else (senão). Essa combinação funciona por conta de que, se uma condicional possuir somente um argumento (`;`), não é necessário inserir as chaves `{}` para executar o código.
Dado este fato, porém, existe um bug conhecido como "dangling else", traduzido como "else pendurado". Por exemplo:

``` c
#include <stdio.h>
int a = 5, b = 4
if (a >= 5)
  if (a == b)
    printf("Valores iguais");
else
    printf("'a' é menor que 5");
```

Perceba que nenhum laço acima possui as chaves para separar os argumentos. Por conta disso, o else não respeitará a indentação do programador e executará o bloco `else` somente se 'a' e 'b' forem diferentes, não se 'a' for menor que 5.

Resumidamente:
- Neste exemplo, o `else` está associado ao `if (a == b)`, não ao `if (a >= 5).`
- Ou seja, a indentação que você vê no código enganaria o programador, mas não o compilador.

## 📖 Fim de Leitura

A extração e finalização de todas as demonstrações e exercícios baseadas no conteúdo do livro ocorreram dia 3 de agosto, 2026.

Para projetos maiores e relevantes, estes terão seus repositórios dedicados posteriormente.

Caso alguém além do autor estiver lendo, este deseja que o conteúdo abordado possua impacto significativo no conhecimento da linguagem, idem.

