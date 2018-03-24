# Tipos de Dados

-   byte (Inteiro de 8 Bits)
-   short (Inteiro de 16 Bits)
-   int (Inteiro de 32 Bits)
-   long (Inteiro de 64 Bits)
-   float (Real de Precisão Simples)
-   double (Real de Precisão dupla)
-   char
-   boolean (True || False)

# Operadores

## Básicos

## Relacionais

## Atribuição

# Declaração de Variaveis

```java
int idade = 20;
String nome = "Yuri";
double PI = 3,14;
```

**Constantes** precisam do modificador **final**.

```java
final int IDADE = 20;
final String NOME = "Yuri";
```

# Estruturas de Fluxo

## If

```java
if (a < b) {
    c = a;
} else {
    c = b;
}
```

> Se tiver apenas uma instrução, as chaves podem ser omitidas.

```java
    if (a > b) b = a
```

> A parte do else é opcional

## Switch

```java
switch (a) {
    case 1: 
        System.out.println("Pequeno"); 
        break;
    case 2: 
        System.out.println("Medio"); 
        break;
    case 3: 
        System.out.println("Grande");
        break;
    default: 
        System.out.println("Nenhuma das respostas anteriores");
}
```

-   O comando **break** proporciona a saída do bloco switch. Se não fosse utilizado, as sentenças dos cases seguintes seriam executadas. Para verificar isto, teste o exemplo abaixo com e sem o comando break. 
-   A palavra **default** é uma opção executada caso nenhum dos cases seja executado. Sua utilização é opcional.
-   A instrução **switch** compara o objeto String em sua expressão com    as expressões associadas a cada CASE como se estivesse usando o método String.equals; consequentemente, a comparação de objetos String em declarações switch **_é sensível a maiúsculas_**. O compilador  Java gera geralmente bytecode mais eficiente de declarações switch que usam objetos String que de declarações encadeadas if-then-else.

## for

```java
for (i=0; i<10; i++) {
    System.out.println(“i=” + i);
}
```

> Se houver apenas uma instrução, as chaves podem ser abolidas.

## while

```java
int i;
do {
    System.out.println("i=" + i);
    i++;
} while ( i< 10);
```

> Se houver apenas uma instrução, as chaves podem ser abolidas.

# Funções

```java
float Quadrado(float x) {
    return x*x;
}
```

Outro Exemplo

```java
public static int dobra(int num){
    return num * 2;
}

public static void main(String[] args){
    int numero = 2112;
    System.out.println("O valor de numero é: " + numero);
    System.out.println("Dobrando seu valor.");
    dobra(numero);
    System.out.println("Agora o valor de número é: " + numero);
}
```

-   O valor de retorno é passado através do comando **return** (como no
    C/C++) que provoca a saída imediata da função.
-   Como no C/C++ a distinção entre o conceito de **procedimentos** e **funções** é feita simplesmente através do tipo de retorno, onde tipo _void_
    caracteriza que a função não retorna valor, sendo um puro
    procedimento.
-   Como no C++, parâmetros de tipos basicos são passados por valor,
    enquanto arrays são passadas por referência.

# Arrays

```java
tipo nome_da_array[] = new tipo [dimensão];
int matInt [] = new int [10];
```

-   Dados Homogêneos (Somente um Tipo)
-   Lista de itens de um mesmo tipo
-   Alocados dinamicamente através do operador **_new_**   
-   Length (Número de **Elementos** de um array)

```java
Tamanho = System.in.read();
int m[] = new int [Tamanho];
System.out.println(“A dimensao de m e: ”+m.length;
```

Outro Exemplo

```java
import java.util.Scanner;

public class matrizTeste {

    public static void main(String[] args){
        int[][] matriz = new int[3][3];
        Scanner entrada = new Scanner(System.in);
        System.out.println("Matriz M[3][3]n");
        for(int linha=0 ; linha &lt; 3 ; linha++){
            for(int coluna = 0; coluna &lt; 3 ; coluna ++){
                System.out.printf("Insira o elemento M[%d][%d]: ",linha+1,coluna+1);
                matriz[linha][coluna]=entrada.nextInt();
            }
        }
        System.out.println("nA Matriz ficou: n");
        for(int linha=0 ; linha &lt; 3 ; linha++){
            for(int coluna = 0; coluna &lt; 3 ; coluna ++){
                System.out.printf("t %d t",matriz[linha][coluna]);
            }
            System.out.println();
        }
    }
}
```

## Strings

-   Classe String

    -   Manipula Strings **Constantes**
    -   length() – que retorna o comprimento da string
    -   charAt(pos) – que retorna o caracter em dada posição
    -   substring(inicio, fim) – que retorna um trecho da string entre inicio e fim
    -   indexOf(String ou char) – que retorna a posição do String ou char indicado
    -   toUpperCase() – que retorna uma cópia da string, com todos os caracteres maiúsculos
    -   toLowerCase() - que retorna uma cópia da string, com todos os caracteres minúsculos

-   Classe StringBuffer
    -   Manipula String **Variavéis**
    -   append() – acrescenta string ou caracter no final
    -   insert(pos) – insere string ou caracter em dada posicao
    -   replace(iníco, fim , String) – troca conteúdo entre início e fim por um dado String
    -   delete(inicio, fim) – deleta caracteres de un StringBuffer
    -   length() – que retorna o comprimento da string
    -   charAt(pos) – que retorna o caracter em dada posição
    -   reverse() – inverte a ordem dos caracteres

```java
class TesteString {
 public static void main(String args[]) {
     String str = "Java é da Oracle";
     System.out.println("Toda a string: " + str);
     System.out.println("Tamanho da string: " + str.length());
     System.out.println("Char na posicao 7: " + str.charAt(7));
     System.out.println("String: " + str.substring(25,57));
     System.out.println("Posicao do primeiro d: " + str.indexOf('d'));
     System.out.println("Posicao da palavra Oracle: "+str.indexOf("Oracle"));
     System.out.println("Todas maiusculas: "+str.toUpperCase());
     System.out.println("Todas minusculas: "+str.toLowerCase());
   }
}
```

## Classes Wrappers

-   Double
    -   toString(double i) – que converte  o número i para String
    -   parseDouble(String Str) – que converte uma string para o inteiro equivalente

```java
    // método toString
    String Str;
	Str = Double.toString(125.47)
    // método parseDouble
    String Str  = “12.34”;
	double num = Double.parseDouble(Str); // num receberá o número 12.34
```

-   Integer
    -   toString(int i) – que converte  o número i para String
    -   parseInt(String Str) – que converte uma string para o inteiro equivalente

```java
    // método toString
    String Str;
    Str = Integer.toString(125.47)
    // método parseDouble
    String Str  = “12.34”;
    double num = Integer.parseDouble(Str); // num receberá o número 12.34
```

-   Float
-   Long
-   Boolean
-   Character
-   Short
-   Byte

## Entrada e Saída Padrão

-   Leitura do Teclado
-   Classe Scanner
-   Entrada Padrão do Sistema (System.in)

```java
Scanner teclado = new Scanner(System.in);	
  
float numF = teclado.nextFloat();
int num1 = teclado.nextInt();
byte byte1 = teclado.nextByte();
long lg1 = teclado.nextLong();
boolean b1 = teclado.nextBoolean();
double num2 = teclado.nextDouble();
String nome = teclado.nextLine();
```

# POO
-   Classe
-   Objeto
-   Atributos e Métodos
-   Especificadores de Acesso
-   Encapsulamento
-   Acesso a Métodos de uma Classe


```java
Nome_da_classe nome_do_objeto = new Nome_da_classe ();
MinhaClasse MeuObjeto = new MinhaClasse();
```

Acesso aos métodos de uma classe

```java
nome_do_objeto.metodo();
``` 