#include <stdio.h>   //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das string

int registro() // Função responsável por cadastrar os usuários no sistema
{
	// Inicio da criação das variáveis/string 
	char arquivo[40];
    char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação das variáveis/string
	
	printf("Digite o cpf a ser cadastrado:"); //Coletando informação do usuário
	scanf("%s",cpf); //%s refere-se as string

    strcpy(arquivo,cpf); //Responsável por copiar os valores das sring
    
    FILE*file;  //cria arquivo
    file=fopen(arquivo,"w"); //cria o arquivo //w significa escrever
    fprintf(file,cpf); //salva o valor da variável                    
    fclose(file); //fecho o arquivo
    
    file=fopen(arquivo,"a");//cria o arquivo
    fprintf(file,",");//salva o valor da variável
    fclose(file);//fecho o srquivo
    
    printf("Digite o nome a ser cadastrado:"); //coletando informação do usuário
    scanf("%s",nome); //%s refere-se as string
    
    file=fopen(arquivo,"a");//cria o arquivo
    fprintf(file,nome);//salva o valor da variável
    fclose(file);//fecho o arquivo
    
    file=fopen(arquivo,"a");//cria o arquivo
    fprintf(file,",");//salva o valor da variável
    fclose(file);//fecho o arquivo
    
    printf("Digite o sobrenome a ser cadastrado:");//coletando informação do usuário
	scanf("%s",sobrenome);//%s refere-se as string

	file=fopen(arquivo,"a");//cria o arquivo
    fprintf(file,sobrenome);//salva o valor da variável
    fclose(file);//fecho o arquivo
    
    file=fopen(arquivo,"a");//cria o arquivo
    fprintf(file,",");//salva o valor da variável
    fclose(file);//fecho o arquivo
    
    printf("Digite o cargo a ser cadastrado:");//coletando informação do usuário
    scanf("%s",cargo);//%s refere-se as string
    
    file=fopen(arquivo,"a");//cria o arquivo
    fprintf(file,cargo);//salva o valor da variável
    fclose(file);//fecho o arquivo
    
    system("pause");//pausar a execusão do programa até que o usuário precione uma tecla 
    
}

int consulta()
{
	setlocale (LC_ALL, "portuguese"); //definindo a linguagem
	// Inicio da criação das variáveis/string 
	char cpf[40];
	char conteudo[200];
	//final da criação das variáveis/string
	printf("Digite o cpf a ser consultado:");//Coletando informação do usuário
	scanf("%s",cpf); //%s refere-se as string
	
	FILE *file;//cria arquivo
	file = fopen(cpf,"r");//abrir arquivo em modo leitura //ler
	
	if(file == NULL) //É usada para verificar se o arquivo foi aberto corretamente, na função fopen
	{
	printf("Não foi possivel abrir o arquivo,não localizado!.\n");//Coletando informação do usuário
	}
	
	    while(fgets(conteudo, 200, file) != NULL)//fgets é a funçao que retorna para a string lida, se a leitura for bem sucedida //NULL retorna ao inicio se o arquivo termina ou ocorre um erro
	{
		printf("\n Essas são as informações do usuário: ");//Coletando informação do usuário
		printf("%s", conteudo); //%s refere-se as string
		printf("\n\n");//quebra de texto // espaço 
	}
	
   	    system("pause");//pausar a execusão do programa até que o usuário precione uma tecla 


}

int deletar()
{
	// Inicio da criação das variáveis/string
   char cpf[40];
   //final da criação das variáveis/string
   printf ("Digite o cpf a ser deletado: ");//Coletando informação do usuário
   scanf("%s" , cpf);//%s refere-se as string
   
   remove(cpf);//É usada para excluir (remover) um arquivo do sistema
   
   FILE *file;//cria arquivo
   file = fopen (cpf,"r");//abrir arquivo em modo leitura //ler
   
   if(file == NULL)//É usada para verificar se o arquivo foi aberto corretamente, na função fopen
   {
   	printf("O usuário não se encontra no sistema!.\n");//Coletando informação do usuário
   	system("pause");//pausar a execusão do programa até que o usuário precione uma tecla 
   	
   }
}
int main ()
    {
    int opcao=0; //definindo as variáveis
    int laco=1;

    for(laco=1;laco=1;)
    {
	
	 system("cls"); //responsável por limpar a tela
		
		setlocale (LC_ALL, "portuguese"); //definindo a linguagem
        //inicio do menu
        printf("###cartório da Ebac###\n\n"); 
        printf("escolha a opção desejada no menu:\n\n");
        printf("\t1 - Resgistrar nomes\n");
        printf("\t2 - Consultar  nomes\n");
        printf("\t3 - Deletar nomes\n");	
        printf("Opção: ");   
		//final do menu
   
        scanf("%d", &opcao); //armazenando a escolha do usuário
  
        system("cls"); //responsável por limpar a tela
  
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
  	    printf("Esta opção não está disponivel\n");//Coletando informação do usuário
  	    system("pause");//pausar a execusão do programa até que o usuário precione uma tecla
  	    break;
  	    	
  }
  
       
        }
        }

  

