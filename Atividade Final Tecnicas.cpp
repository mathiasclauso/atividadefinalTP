#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_ALUNOS 50

typedef struct{
	char nome[50];
	char disciplina[30];
	char conceito;
	int ativo;
    int codigo[6];
	float notas[3];
	float media;
   
	}Aluno;
	Aluno alunos[MAX_ALUNOS];
	void menu();
	void cadastrar();
	void lancar();
	void alterar();
	void relatorio();
	
	int main(int args, char const *argv[])
	{
	menu();
	return 0;
		
	}
	void menu(){
		
	int op;
	do{
	
	system("cls");
	printf("\n1 - CADASTRAR ESTUDANTE\n2 - LANCAR NOTA\n3 - ALTERAR NOTA\n4 - RELATORIO DOS ESTUDANTES\n0 - SAIR\n");
	scanf("%d", &op);
	getchar();
	
		
	switch(op){
	case 1:
	cadastrar();
	break;	
	case 2:
	lancar();
	break;
	case 3:
	alterar();
	break;
	case 4:
	relatorio();
	break;	
	}	
	getchar();
	}while(op!=0);
	}
	void cadastrar(){
	int op;	
	int i;
	int codigo[6];
	int exemplo[i];
	char nome[50];
	char disciplina[30];

	do{ 
	system("cls");
	

	 getchar();
	printf("\n Nome: ");
	fgets(nome,sizeof(nome),stdin);	
	
	printf("\n Diciplina: ");
	fgets(disciplina,sizeof(disciplina),stdin);

	printf("\n Codigo: ");
	scanf("%d", &codigo[6]);

		
	
	for(int i = 0; i < MAX_ALUNOS; ++i){	
	if(alunos[i].ativo==0){
	
	strcpy(alunos[i].nome, nome);
	strcpy(alunos[i].disciplina, disciplina);
	alunos[i].codigo[6]= codigo[6];
	alunos[i].ativo=1;
	break;
    }
	}
	printf("\n1 - Continuar\n0 - Sair\n");
	scanf("%d", &op);
	}while(op!=0);
	}
	void lancar(){
		
	int op;
	int codigo[6];	
	float notas[3];
    do{
	
    	system("cls");
    printf("Informe o codigo do aluno: \n");
    scanf("%d", &codigo[6]);
        	
	for(int i = 0; i < MAX_ALUNOS; ++i){
    if(alunos[i].ativo==0){	
	
		
	printf("\n Informe a nota da avaliacao 1: \n");
    scanf("%f", &notas[0]);
	alunos[i].notas[0] = notas[0];

	printf("\n Informe a nota da avaliacao 2: \n");
    scanf("%f", &notas[1]);
   alunos[i].notas[1] = notas[1];
    
	printf("\n Informe a nota da avaliacao 3: \n");
    scanf("%f", &notas[2]);
    alunos[i].notas[2] = notas[2];

    alunos[i].ativo=1;
	break;
} 
}

	
	printf("\n1 - Continuar\n0 - Sair\n");
	scanf("%d", &op);
	}while(op!=0);
        
		
}
	void alterar(){
	int opcao;	
	int op;
	int codigo[6];	
	float notas[3];
	do{
    printf("Informe o codigo do aluno: \n");
    scanf("%d", &codigo[6]);	
		
	printf("Escolha uma opcao para alterar as notas: ");
    printf("\n1 - Para alterar a nota da avaliacao 1:");
    printf("\n2 - Para alterar a nota da avaliacao 2:"); 
    printf("\n3 - Para alterar a nota da avaliacao 3:");
	scanf("%d", &opcao);
		
	if(opcao == 1){
	printf("\n Informe a nota para a qual quer alterar a avaliacao 1: \n");
    scanf("%f", &notas[0]);
    printf("Nota alterada com sucesso! \n");
	}
	if(opcao == 2){
	printf("\n Informe a nota para a qual quer alterar a avaliacao 2: \n");
    scanf("%f", &notas[1]);
    printf("Nota alterada com sucesso! \n");
	}
    if(opcao == 3){
	printf("\n Informe a nota para a qual quer alterar a avaliacao 3: \n");
    scanf("%f", &notas[2]);
    printf("Nota alterada com sucesso! \n");
	}
		    
    for(int i = 0; i < MAX_ALUNOS; ++i)
	{
	alunos[i].notas[0] = notas[0];
	alunos[i].notas[1] = notas[1];
	alunos[i].notas[2] = notas[2];	
	break;
	}
	printf("\n1 - Continuar\n0 - Sair\n");
	scanf("%d", &op);
		
		
	}while(op!=0);
        	
	}
	void relatorio(){
     system("cls");
     
			printf("\n\nRELATORIO DOS ESTUDANTES\n\n");
			
		for(int i = 0; i < MAX_ALUNOS; ++i){
		if(alunos[i].ativo==1){	
		alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2])/3;	
                    
        	        if(alunos[i].media>=8.4){
        	        alunos[i].conceito = 65;
                    }
                    if(alunos[i].media>=7.0 && alunos[i].media<=8.5){
        	        alunos[i].conceito = 66;
                    }
                    if( alunos[i].media>=6.0 && alunos[i].media<=6.9){
        	        alunos[i].conceito = 67;
                    }
                    if(alunos[i].media>=4.0 && alunos[i].media<=5.9){
        	        alunos[i].conceito = 68;
                    }
                    if(alunos[i].media<=3.9){
        	        alunos[i].conceito = 70;
        	        
        	        
                    }
                    
                    printf("\nCodigo:%d|Nome:%s|Disciplina:%s|Avaliacao 1:%0.2f|Avaliacao 2:%0.2f|Avaliacao 3:%0.2f|Media:%0.2f|Conceito:%c\n",alunos[i].codigo[6],alunos[i].nome,alunos[i].disciplina,alunos[i].notas[0],alunos[i].notas[1],alunos[i].notas[2],(alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2])/3,alunos[i].conceito);
                }    
                 
                }
		
   
	

 
	
     }
    
