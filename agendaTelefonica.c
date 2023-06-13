#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> //acentua��o de caracteres

struct Endereco {  //struct: juntar v�rias variaveis em uma s�
	char rua[50];
	int numero;
	char comp[30];
	char bairro[30];
	int cep;
	char cidade[30];
	char estado[3];
	char pais[30];
};

struct Telefone {
    int ddd;
    int tel;
};

struct Aniversario {
    int dd;
    int mes;
    int ano;
};

struct Cargo {
 	char desenvolvedorInterfaceUsuario[50];
    char uiUxDesigner[50];
    char engenheiroRedes[50];
    char administradorBancoDados[50];
    char gerenteProjetosAgeis[50];
    char analistaRiscosControleProjeto[50];
};

struct Setor {
	int desenvolvimentoWeb;
    int desenvolvimentoServidores;
	int gerenciamentoProjetos;
    
};

struct Funcionario {
    char nome[70];
    char email[50];
    struct Endereco ende;
    struct Telefone fone;
    struct Aniversario data;
    struct Cargo posicao;
    struct Setor departamento;
};

int main(void) {
	setlocale(LC_ALL, "Portuguese");
}

void adicionarFuncionario() {
	struct Funcionario novoFuncionario;
	int opcaoCargo, opcaoSetor;
	
	printf("Digite o nome completo do funcion�rio:\n");
	gets(novoFuncionario.nome);
    
    printf("Digite o email do funcion�rio: ");
	scanf("%s", novoFuncionario.email);
	getchar();
    
   printf("Digite o endere�o do funcion�rio\n");
	printf("Rua/Avenida: ");
	gets(novoFuncionario.ende.rua);
	printf("N�mero: ");
	scanf("%d", &novoFuncionario.ende.numero);
	getchar();
	printf("Bairro: ");
	gets(novoFuncionario.ende.bairro);
	printf("CEP: ");
	scanf("%d", &novoFuncionario.ende.cep);
	getchar();
	printf("Cidade: ");
	gets(novoFuncionario.ende.cidade);
	printf("Estado: ");
	gets(novoFuncionario.ende.estado);
	printf("Pa�s: ");
	gets(novoFuncionario.ende.pais);
    
  	printf("Digite o telefone do funcion�rio: ");
	printf("DDD: ");
	scanf("%d", &novoFuncionario.fone.ddd);
	getchar();
	printf("N�mero: ");
	scanf("%d", &novoFuncionario.fone.tel);
	getchar();
    
    printf("Digite o anivers�rio do funcion�rio:\n");
	printf("Dia: ");
	scanf("%d", &novoFuncionario.data.dd);
	getchar();
	printf("M�s: ");
	scanf("%d", &novoFuncionario.data.mes);
	getchar();
	printf("Ano: ");
	scanf("%d", &novoFuncionario.data.ano);
	getchar();
    
    printf("Op��o do cargo:\n");
	printf("1. Desenvolvedor de Interface do Usu�rio:\n");
	printf("2. Ui/Ux Designer:\n");
	printf("3. Engenheiro de Redes:\n");
	printf("4. Administrador de Banco de Dados:\n");
	printf("5. Gerente de Projetos �geis:\n");
	printf("6. Analista de Riscos em Controle de Projeto:\n");
	scanf("%d", &opcaoCargo);
	getchar();
    
	do {
	    switch (opcaoCargo) {
	        case 1:
	            strcpy(novoFuncionario.posicao.desenvolvedorInterfaceUsuario, "Desenvolvedor de Interface do Usu�rio");
	            break;
	        case 2:
	            strcpy(novoFuncionario.posicao.uiUxDesigner, "Ui/Ux Designer");
	            break;
	        case 3:
	            strcpy(novoFuncionario.posicao.engenheiroRedes, "Engenheiro de Redes");
	            break;
	        case 4:
	            strcpy(novoFuncionario.posicao.administradorBancoDados, "Administrador de Banco de Dados");
	            break;
	        case 5:
	            strcpy(novoFuncionario.posicao.gerenteProjetosAgeis, "Gerente de Projetos �geis");
	            break;
	        case 6:
	            strcpy(novoFuncionario.posicao.analistaRiscosControleProjeto, "Analista de Riscos em Controle de Projeto");
	            break;
	        default:
	            printf("Op��o inv�lida! Digite uma op��o v�lida: ");
	            scanf("%d", &opcaoCargo);
	            getchar(); //capturar o caractere de nova linha deixado no buffer de entrada ap�s a leitura de um n�mero inteiro com scanf
	    }
	} while (opcaoCargo < 1 || opcaoCargo > 6);
    
   	printf("Digite a op��o do setor:\n");
    printf("1. Desenvolvimento Web:\n");
    printf("2. Desenvolvimento de Servidores:\n");
    printf("3. Gerenciamento de Projetos:\n");
    scanf("%d", &opcaoSetor);
    getchar();
    
    do {
    	switch (opcaoSetor) {
	        case 1:
	            strcpy(novoFuncionario.departamento.desenvolvimentoWeb, "Desenvolvimento Web");
	            break;
	        case 2:
	            strcpy(novoFuncionario.departamento.desenvolvimentoServidores, "Desenvolvimento de Servidores");
	            break;
	        case 3:
	            strcpy(novoFuncionario.departamento.gerenciamentoProjetos, "Gerenciamento de Projetos");
	            break;
	        default:
	            printf("Op��o inv�lida!\n");
	        	return 1;
    	}
	}while (opcaoSetor < 1 || opcaoSetor > 3);
    
   
    
}

void buscarFuncionario() {
	
}

void alterarFuncionario() {
	
}

void excluirFuncionario() {
	
}


