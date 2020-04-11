## Problema

Uma empresa prestadora de serviços armazena informações sobre os serviços prestados. Sabe-se que a empresa pode realizar no máximo três serviços diariamente. É de interesse de sua direção manter um histórico mensal (30 dias) sobre os serviços prestados. 

A empresa realiza quatro tipos de serviços: 1) pintura; 2) jardinagem; 3) faxina e 4) reforma em geral. Cada serviço realizado deve ser cadastrado com as seguintes informações: número do serviço, valor do serviço, código do serviço e código do cliente.

Cadastre os quatro tipos de serviços (código e descrição) que a empresa poderá realizar. Para isso, utilize um vetor de quatro posições.

### O programa deverá mostrar o seguinte menu de opções:

1. Cadastrar os tipos de serviços.
2. Cadastrar os serviços prestados.
3. Mostrar os serviços prestados em determinado dia.
4. Mostrar os serviços prestados dentro de um intervalo de valor.
5. Mostrar um relatório geral (separado por dia), que exiba, inclusive, a descrição do tipo do serviço.
6. Finalizar.

### Para a opção 1: 

Deve-se cadastrar os tipos de serviços oferecidos pela empresa, com código e descrição.

### Para a opção 2: 

Deve-se considerar que deverão ser cadastrados os serviços prestados ao longo do mês.
Em cada dia podem ser cadastrados, no máximo, três serviços prestados.
Utilize uma matriz capaz de armazenar em cada posição todas as informações referentes a um serviço prestado. Cada linha representa um dia do mês. Dessa maneira, considere a matriz com dimensão 30 × 3.
Solicite o dia em que o serviço foi prestado e as demais informações.
Lembre-se de que a empresa só pode prestar os serviços que já tenham sido cadastrados no vetor de
tipo de serviços.
Caso o usuário digite um código de tipo de serviço inválido, o programa deverá mostrar uma mensa-
gem de erro.
Quando o usuário tentar cadastrar mais de três serviços prestados em um mesmo dia, também deverá
mostrar uma mensagem de erro.

### Para a opção 3: 

O programa deverá receber o dia que se deseja consultar e mostrar os respectivos serviços prestados.

### Para a opção 4: 

O programa deverá receber o valor mínimo e o valor máximo e mostrar os serviços prestados que estiverem nesse intervalo.

### Para a opção 5: 

O programa deverá mostrar todos os serviços prestados, conforme o exemplo a seguir.

### DIA 01 

| N o do serviço | Valor do serviço | Código do serviço | Descrição | Código do cliente |
| :------------: | :--------------: | :---------------: | :-------: | :---------------: |
|      100       |    R$ 200,00     |         1         |  Pintura  |         1         |
|      150       |    R$ 100,00     |         3         |  Faxina   |         5         |

### DIA 02

| N o do serviço | Valor do serviço | Código do serviço |    Descrição     | Código do cliente |
| :------------: | :--------------: | :---------------: | :--------------: | :---------------: |
|      301       |    R$ 600,00     |         4         | Reforma em geral |         3         |
|      280       |    R$ 352,00     |         1         |     Pintura      |         2         |