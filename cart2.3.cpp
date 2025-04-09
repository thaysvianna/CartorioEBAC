#include <stdio.h>   //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro() // Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	// Inicio da cria��o das vari�veis/string 
	char arquivo[40];
    char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cria��o das vari�veis/string
	
	printf("Digite o cpf a ser cadastrado:"); //Coletando informa��o do usu�rio
	scanf("%s",cpf); //%s refere-se as string

    strcpy(arquivo,cpf); //Respons�vel por copiar os valores das sring
    
    FILE*file;  //cria arquivo
    file=fopen(arquivo,"w"); //cria o arquivo //w significa escrever
    fprintf(file,cpf); //salva o valor da vari�vel                    
    fclose(file); //fecho o arquivo
    
    file=fopen(arquivo,"a");//cria o arquivo
    fprintf(file,",");//salva o valor da vari�vel
    fclose(file);//fecho o srquivo
    
    printf("Digite o nome a ser cadastrado:"); //coletando informa��o do usu�rio
    scanf("%s",nome); //%s refere-se as string
    
    file=fopen(arquivo,"a");//cria o arquivo
    fprintf(file,nome);//salva o valor da vari�vel
    fclose(file);//fecho o arquivo
    
    file=fopen(arquivo,"a");//cria o arquivo
    fprintf(file,",");//salva o valor da vari�vel
    fclose(file);//fecho o arquivo
    
    printf("Digite o sobrenome a ser cadastrado:");//coletando informa��o do usu�rio
	scanf("%s",sobrenome);//%s refere-se as string

	file=fopen(arquivo,"a");//cria o arquivo
    fprintf(file,sobrenome);//salva o valor da vari�vel
    fclose(file);//fecho o arquivo
    
    file=fopen(arquivo,"a");//cria o arquivo
    fprintf(file,",");//salva o valor da vari�vel
    fclose(file);//fecho o arquivo
    
    printf("Digite o cargo a ser cadastrado:");//coletando informa��o do usu�rio
    scanf("%s",cargo);//%s refere-se as string
    
    file=fopen(arquivo,"a");//cria o arquivo
    fprintf(file,cargo);//salva o valor da vari�vel
    fclose(file);//fecho o arquivo
    
    system("pause");//pausar a execus�o do programa at� que o usu�rio precione uma tecla 
    
}

int consulta()
{
	setlocale (LC_ALL, "portuguese"); //definindo a linguagem
	// Inicio da cria��o das vari�veis/string 
	char cpf[40];
	char conteudo[200];
	//final da cria��o das vari�veis/string
	printf("Digite o cpf a ser consultado:");//Coletando informa��o do usu�rio
	scanf("%s",cpf); //%s refere-se as string
	
	FILE *file;//cria arquivo
	file = fopen(cpf,"r");//abrir arquivo em modo leitura //ler
	
	if(file == NULL) //� usada para verificar se o arquivo foi aberto corretamente, na fun��o fopen
	{
	printf("N�o foi possivel abrir o arquivo,n�o localizado!.\n");//Coletando informa��o do usu�rio
	}
	
	    while(fgets(conteudo, 200, file) != NULL)//fgets � a fun�ao que retorna para a string lida, se a leitura for bem sucedida //NULL retorna ao inicio se o arquivo termina ou ocorre um erro
	{
		printf("\n Essas s�o as informa��es do usu�rio: ");//Coletando informa��o do usu�rio
		printf("%s", conteudo); //%s refere-se as string
		printf("\n\n");//quebra de texto // espa�o 
	}
	
   	    system("pause");//pausar a execus�o do programa at� que o usu�rio precione uma tecla 


}

int deletar()
{
	// Inicio da cria��o das vari�veis/string
   char cpf[40];
   //final da cria��o das vari�veis/string
   printf ("Digite o cpf a ser deletado: ");//Coletando informa��o do usu�rio
   scanf("%s" , cpf);//%s refere-se as string
   
   remove(cpf);//� usada para excluir (remover) um arquivo do sistema
   
   FILE *file;//cria arquivo
   file = fopen (cpf,"r");//abrir arquivo em modo leitura //ler
   
   if(file == NULL)//� usada para verificar se o arquivo foi aberto corretamente, na fun��o fopen
   {
   	printf("O usu�rio n�o se encontra no sistema!.\n");//Coletando informa��o do usu�rio
   	system("pause");//pausar a execus�o do programa at� que o usu�rio precione uma tecla 
   	
   }
}
int main ()
    {
    int opcao=0; //definindo as vari�veis
    int laco=1;

    for(laco=1;laco=1;)
    {
	
	 system("cls"); //respons�vel por limpar a tela
		
		setlocale (LC_ALL, "portuguese"); //definindo a linguagem
        //inicio do menu
        printf("###cart�rio da Ebac###\n\n"); 
        printf("escolha a op��o desejada no menu:\n\n");
        printf("\t1 - Resgistrar nomes\n");
        printf("\t2 - Consultar  nomes\n");
        printf("\t3 - Deletar nomes\n");	
        printf("Op��o: ");   
		//final do menu
   
        scanf("%d", &opcao); //armazenando a escolha do usu�rio
  
        system("cls"); //respons�vel por limpar a tela
  
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
  	    printf("Esta op��o n�o est� disponivel\n");//Coletando informa��o do usu�rio
  	    system("pause");//pausar a execus�o do programa at� que o usu�rio precione uma tecla
  	    break;
  	    	
  }
  
       
        }
        }

  

