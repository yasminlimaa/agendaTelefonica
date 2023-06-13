#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> //acentuação de caracteres

struct Endereco {  //struct: juntar várias variaveis em uma só
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
	
	printf("Digite o nome completo do funcionário:\n");
	gets(novoFuncionario.nome);
    
    printf("Digite o email do funcionário: ");
	scanf("%s", novoFuncionario.email);
	getchar();
    
   printf("Digite o endereço do funcionário\n");
	printf("Rua/Avenida: ");
	gets(novoFuncionario.ende.rua);
	printf("Número: ");
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
	printf("País: ");
	gets(novoFuncionario.ende.pais);
    
  	printf("Digite o telefone do funcionário: ");
	printf("DDD: ");
	scanf("%d", &novoFuncionario.fone.ddd);
	getchar();
	printf("Número: ");
	scanf("%d", &novoFuncionario.fone.tel);
	getchar();
    
    printf("Digite o aniversário do funcionário:\n");
	printf("Dia: ");
	scanf("%d", &novoFuncionario.data.dd);
	getchar();
	printf("Mês: ");
	scanf("%d", &novoFuncionario.data.mes);
	getchar();
	printf("Ano: ");
	scanf("%d", &novoFuncionario.data.ano);
	getchar();
    
    printf("Opção do cargo:\n");
	printf("1. Desenvolvedor de Interface do Usuário:\n");
	printf("2. Ui/Ux Designer:\n");
	printf("3. Engenheiro de Redes:\n");
	printf("4. Administrador de Banco de Dados:\n");
	printf("5. Gerente de Projetos Ágeis:\n");
	printf("6. Analista de Riscos em Controle de Projeto:\n");
	scanf("%d", &opcaoCargo);
	getchar();
    
	do {
	    switch (opcaoCargo) {
	        case 1:
	            strcpy(novoFuncionario.posicao.desenvolvedorInterfaceUsuario, "Desenvolvedor de Interface do Usuário");
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
	            strcpy(novoFuncionario.posicao.gerenteProjetosAgeis, "Gerente de Projetos Ágeis");
	            break;
	        case 6:
	            strcpy(novoFuncionario.posicao.analistaRiscosControleProjeto, "Analista de Riscos em Controle de Projeto");
	            break;
	        default:
	            printf("Opção inválida! Digite uma opção válida: ");
	            scanf("%d", &opcaoCargo);
	            getchar(); //capturar o caractere de nova linha deixado no buffer de entrada após a leitura de um número inteiro com scanf
	    }
	} while (opcaoCargo < 1 || opcaoCargo > 6);
    
   	printf("Digite a opção do setor:\n");
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
	            printf("Opção inválida!\n");
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


