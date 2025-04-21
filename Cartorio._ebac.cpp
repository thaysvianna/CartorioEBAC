#include <stdio.h>   //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro()
{
	char arquivo[40];
    char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	int opcao;  // nova vari�vel para controle de repeti��o
	
	do {
	printf("Digite o cpf a ser cadastrado:");
	scanf("%s",cpf);

    strcpy(arquivo,cpf); //Respons�vel por copiar os valores das sring
    
    FILE*file;  //cria arquivo
    file=fopen(arquivo,"w"); //cria o arquivo
    fprintf(file,cpf); //salvo o valor da vari�vel                    
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
    
    printf("\nUsu�rio cadastrado com sucesso\n\n");
    
    printf("Deseja:\n");
    printf("1 - Adicionar um novo usu�rio\n");
    printf("2 - Voltar ao menu principal\n");
    printf("Op��o: ");
    scanf("%d" , &opcao);
    
} while (opcao == 1); //Repete o cadastro se for escolha do usu�rio
  
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
	printf("N�o foi possivel abrir o arquivo,n�o localizado!.\n");
	}
	
	    while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\n Essas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
   	    system("pause");
}

int deletar()
{
    printf("voc� escolheu deletar nomes\n");
  	system("pause");	
}
int main ()
    {
    int opcao=0; //definindo as vari�veis
    int laco=1;

    for(laco=1;laco=1;)
    {
	
	 system("cls");   
		
		setlocale (LC_ALL, "portuguese"); //definindo a linguagem
   
        printf("###cart�rio da Ebac###\n\n"); //inicio do menu
        printf("escolha a op��o desejada no menu:\n\n");
        printf("\t1 - Resgistrar nomes\n");
        printf("\t2 - Consultar  nomes\n");
        printf("\t3 - Deletar nomes\n");	
        printf("Op��o: ");    //final do menu
   
        scanf("%d", &opcao); //armazenando a escolha do usu�rio
  
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
  	    printf("Esta op��o n�o est� disponivel\n");
  	    system("pause");
  	    break;
  	    	
  }
  
       
        }
        }

  

