| Clientes | Documentos |
| :------: | :--------: |
| cod_cli  |  num_doc   |
|   nome   |  cod_cli   |
|   fone   | data_venc  |
| endereco |  data_pag  |
|          |   valor    |
|          |   juros    |


Sabe-se que um documento só pode ser cadastrado para um cliente que já exista. Considere que podem existir, no máximo, 15 clientes e 30 documentos. Crie um vetor para clientes e outro para documentos. Crie
um menu para a realização de cada uma das operações especificadas a seguir.

### a) Cadastrar clientes 

— não pode existir mais que um cliente com o mesmo código.

### b) Cadastrar documentos 

— ao cadastrar um documento, se a data de pagamento for maior que a data de vencimento, calcular o campo ‘juros’ do registro documentos (5% sobre o valor original do documento).

### c) Excluir clientes 

— um cliente só poderá ser excluído se não existir nenhum documento associado a ele.

### d) Excluir documentos individuais 

— por meio de seu número. Caso o documento não exista, o programa deverá mostrar a mensagem Documento não encontrado.

### e) Excluir documentos por cliente 

— o programa deverá informar o código do cliente e excluir todos os seus
documentos. Caso o cliente não exista, deverá mostrar a mensagem Cliente não encontrado.

### f) Excluir documentos por período 

— o programa deverá informar a data inicial e a data final e excluir todos os documentos que possuam data de vencimento nesse período.

### g) Alterar as informações sobre os clientes 

— só não pode ser alterado o código do cliente.

### h) Mostrar o total de documentos de determinado cliente.

### i) Sair.

 Quando forem excluídos clientes ou documentos, os vetores deverão ser reorganizados, ou seja, todas as posições não preenchidas dos vetores deverão ficar no final.

#### Exemplo: 
Se for necessário excluir o número 8 do vetor a seguir, tanto o 9 quanto o 1 deverão ser movidos uma casa para a esquerda e a última posição deverá ficar livre para uma nova inclusão.

### Vetor Inicial
|       |       |       |       |       |
| :---: | :---: | :---: | :---: | :---: |
|  12   |   5   |   8   |   9   |   1   |
|       |       |       |       |       |

### Vetor modificado com uma posisão livre ao final

|       |       |       |       |       |
| :---: | :---: | :---: | :---: | :---: |
|  12   |   5   |   9   |   1   |       |
|       |       |       |       |       |