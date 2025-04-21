#include <stdio.h>   //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das string

int registro()
{
	char arquivo[40];
        char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	int opcao;  // nova variável para controle de repetição
	
	do {
	printf("Digite o cpf a ser cadastrado:");
	scanf("%s",cpf);

    strcpy(arquivo,cpf); //Responsável por copiar os valores das sring
    
    FILE*file;  //cria arquivo
    file=fopen(arquivo,"w"); //cria o arquivo
    fprintf(file,cpf); //salvo o valor da variável                    
    fclose(file); //fecho o arquivo
    
    file=fopen(arquivo,"a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado:");
    scanf("%s",nome);
    
    file=fopen(arquivo,"a");
    fprintf(file,nome);
    fclose(file);
    
    file=fopen(arquivo,"a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s",sobrenome);

	file=fopen(arquivo,"a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file=fopen(arquivo,"a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o cargo a ser cadastrado:");
    scanf("%s",cargo);
    
    file=fopen(arquivo,"a");
    fprintf(file,cargo);
    fclose(file);
    
    printf("\nUsuário cadastrado com sucesso\n\n");
    
    printf("Deseja:\n");
    printf("1 - Adicionar um novo usuário\n");
    printf("2 - Voltar ao menu principal\n");
    printf("Opção: ");
    scanf("%d" , &opcao);
    
} while (opcao == 1); //Repete o cadastro se for escolha do usuário
  
    system("pause");
    
}

int consulta()
{
	setlocale (LC_ALL, "portuguese"); //definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser consultado:");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
	printf("Não foi possivel abrir o arquivo,não localizado!.\n");
	}
	
	    while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\n Essas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
   	    system("pause");
}

int deletar()
{
    printf("você escolheu deletar nomes\n");
  	system("pause");	
}
int main ()
    {
    int opcao=0; //definindo as variáveis
    int laco=1;

    for(laco=1;laco=1;)
    {
	
	 system("cls");   
		
		setlocale (LC_ALL, "portuguese"); //definindo a linguagem
   
        printf("###cartório da Ebac###\n\n"); //inicio do menu
        printf("escolha a opção desejada no menu:\n\n");
        printf("\t1 - Resgistrar nomes\n");
        printf("\t2 - Consultar  nomes\n");
        printf("\t3 - Deletar nomes\n");	
        printf("Opção: ");    //final do menu
   
        scanf("%d", &opcao); //armazenando a escolha do usuário
  
        system("cls");
  
  switch(opcao)
  {
  	case 1:
  		registro();
  	    break;
    	
    	case 2:
    	consulta();
  	    break;
  	    
  	case 3: 
	deletar();
  	break;
  	    
   default:
  	printf("Esta opção não está disponivel\n");
        system("pause");
        break;
  	    	
  }
  
       
        }
        }

  

