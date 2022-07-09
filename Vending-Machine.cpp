#include<iostream>
#include<stdio.h>
#include<string.h>
#include <stdlib.h>


using namespace std;


class artigo{ //Class para definir os atributos do artigo
	private: //privado para proteger o artigo
		string nome;
		float preco;
		int stock;

	public: //tornar os atributos publicos, para serem usados no decorrer do codigo
		setnome(string n){nome = n;}
		setpreco(float p){preco = p;}
		setstock(int s){stock = s;}
		string getnome(){return nome;}
		float getpreco(){return preco;}
		int getstock(){return stock;}
};

float moedas(float troco){ //função para realizar o troco de cada produto
		//vaviareis para predefifir as moedas
		int m2=0 ;
		int m1=0 ;
		int m05=0 ;
		int m02=0 ;
		int m01=0 ;
		int m005=0 ;
		int m002=0 ;
		int m001=0 ;
			
			while(troco>0){ //ciclo geral ate o total ser 0
			while(troco>=2){ //enquanto o total for acima ou igual a 2€
					troco=troco-2; //tira 2€ ao valor total
					m2=m2+1; //adiciona 1 acada moeda de 2€ dada no troco
			};
			while(troco>=1){ //enquanto o total for acima ou igual a 1€ e abaixo de 2€
					troco=troco-1;//tira 1€ ao valor total
					m1=m1+1; //retira 1 do stock	
				
			}
			while(troco>=0.5){ //enquanto o total for acima ou igual a 0.5€ e abaixo de 1€
					troco=troco-0.5; //tira 0.5€ ao valor total
					m05=m05+1; //adiciona 1 acada moeda de 0.5€ dada no troco	
			
			};
			while(troco>=0.2){ //enquanto o total for acima ou igual a 0.2€ e abaixo de 0.5€
					troco=troco-0.2; //tira 0.2€ ao valor total
					m02=m02+1; //adiciona 1 acada moeda de 0.2€ dada no troco	
				
			};
			while(troco>=0.1){ //enquanto o total for acima ou igual a 0.1€ e abaixo de 0.2€
					troco=troco-0.1;//tira 0.1€ ao valor total
					m01=m01+1; //adiciona 1 acada moeda de 0.1€ dada no troco	
			};
			while(troco>=0.05){ //enquanto o total for acima ou igual a 0.05€ e abaixo de 0.1€
					troco=troco-0.05;//tira 0.05€ ao valor total
					m005=m005+1; //adiciona 1 acada moeda de 0.05€ dada no troco	k
			
			};
			while(troco>=0.02){ //enquanto o total for acima ou igual a 0.02€ e abaixo de 0.05€
					troco=troco-0.02;//tira 0.02€ ao valor total
					m002=m002+1; //adiciona 1 acada moeda de 0.02€ dada no troco	

			};
			while(troco>=0.01){ //enquanto o total for acima ou igual a 0.01€ e abaixo de 0.02€
					troco=troco-0.01;//tira 0.01€ ao valor total
					m001=m001+1; //adiciona 1 acada moeda de 0.01€ dada no troco	
	
			};	
		}
		if(m2!=0){ //caso o troco contenha moedas de 2€ mostra a mensagem
					cout<< m2 <<" Moedas de 2"<<"\n";
				}
		if(m1!=0){ //caso o troco contenha moedas de 1€ mostra a mensagem
					cout<< m1 <<" Moedas de 1"<<"\n";	
				}
		if(m05!=0){ //caso o troco contenha moedas de 0.5€ mostra a mensagem
					cout<< m05 <<" Moedas de 0.5"<<"\n";
				}
		if(m02!=0){ //caso o troco contenha moedas de 0.2€ mostra a mensagem
					cout<< m02 <<" Moedas de 0.2"<<"\n";
				}
		if(m01!=0){ //caso o troco contenha moedas de 0.1€ mostra a mensagem
					cout<< m01 <<" Moedas de 0.1"<<"\n";
				}
		if(m005!=0){ //caso o troco contenha moedas de 0.05€ mostra a mensagem
					cout<< m005 <<" Moedas de 0.05"<<"\n";
				}
		if(m002!=0){ //caso o troco contenha moedas de 0.02€ mostra a mensagem
					cout<< m002 <<" Moedas de 0.02"<<"\n";
				}
		if(m001!=0){ //caso o troco contenha moedas de 0.01€ mostra a mensagem
					cout<< m001 <<" Moedas de 0.01"<<"\n";
				}
		
		
}
	


main(){
		float preco; //guarda preço do produto
     	string nome; //guarda nome do produto
     	int stock; //guarda stock do produto	
       	int i,k; //variaveis auxiliares
       	int escolha_compra; //gurada a escolha do produto
     	float valor; //guarda a quantia introduziada
     	float troco; //guarda o troco caso este exista
     	int stock2; //recebe o novo stock
     	char stocksn; //recebe a letra "s" ou "n" para trocar o stock
     	    	
     	cout << "Quantos produtos deseja inserir?: ";
       	cin >> k; //recebe a quantidade de produtos que tera na maquina
       	artigo a[k]; //variavel para defifir os artigos
     
    	for(i = 0; i < k; i++){ //ciclo para pedir o nome, o preço e o stock da quantidade dos produtos 
            cout << "Nome do produto: ";
            cin >> nome; //gurada o nome do produto
            a[i].setnome(nome); 
            cout << "Valor do Produto: ";
            cin >> preco; //guarda o preço do produto
            a[i].setpreco(preco);
            cout << "Stock do Produto: ";
            cin >> stock; //guarda o stock do produto
            a[i].setstock(stock);
            cout << "\n\n";
     	}
     	system("cls");
     	do{ //para voltar a este menu sempre que o preocesso de compra é finalizado 
     		cout << "|----------------PRODUTOS---------------|\n";
     				for(i = 0; i < k; i++){ //ciclo para mostrar a lista de produtos da maquina
            			cout <<"|"<<i+1<< "-Nome:" << a[i].getnome()<< "|\t";
            			cout << "|Preco:" << a[i].getpreco() << "|\t";
            			cout << "|Stock:" << a[i].getstock() << "|\n";
     				}
     				cout<<"|0-Sair                                 |\n";
     				cout << "Escolha o produto que pretende comprar:  ";
       				cin >> escolha_compra; //recebe a escolha do produto
       				system("cls");
     		switch (escolha_compra){
     			
     			case 0:
     				exit (EXIT_FAILURE);
     				break;
     				
					
				default: //mostra apenas o produto escolhido
					cout << "|Nome: " << a[escolha_compra-1].getnome() << "|\t";
					cout << "|Preco: " << a[escolha_compra-1].getpreco() << "|\t";
					cout << "|Stock:" << a[escolha_compra-1].getstock() << "|\n";
					cout << "|0-Sair|\n";
					cout << "|Deseja alterar o stock?(S/N)";
					cin >> stocksn;
					if(stocksn=='s'){
						cout<<"Deseja inserir quantos produtos? ";
						cin >> stock2;
						a[escolha_compra-1].setstock(stock2);
						system("cls");
						cout << "|Nome: " << a[escolha_compra-1].getnome() << "|\t";
						cout << "|Preco: " << a[escolha_compra-1].getpreco() << "|\t";
						cout << "|Stock:" << a[escolha_compra-1].getstock() << "|\n";
						cout << "|0-Sair|\n";
					};
					system("cls");
					cout << "|Nome: " << a[escolha_compra-1].getnome() << "|\t";
					cout << "|Preco: " << a[escolha_compra-1].getpreco() << "|\t";
					cout << "|Stock:" << a[escolha_compra-1].getstock() << "|\n";
					cout << "|0-Sair|\n";
					cout << "|Introduza o valor: ";
					cin >> valor; //recebe o valor
					cout << "\n";
//					while(valor!=2 && valor!=1 && valor!=0.5 && valor!=0.2 && valor!=0.1 && valor!=0.05 && valor!=0.02 && valor!=0.01){ //caso a moeda seja diferente a maquina nao aceita
//						cout<<"Moeda nao existente. \n";
//						cout<<"Insira um novo valor(2,1,0.5,0.2,0.1,0.05,0.02,0.01): ";
//						cin>>valor;
//					}
					if(valor==0){ //para sair da maquina
						exit (EXIT_FAILURE);
					}
					
					
					if(valor < a[escolha_compra-1].getpreco()){ //quando o valor é inferior ao preço do produto
						
						float falta = a[escolha_compra-1].getpreco() - valor; //calcula o dinheiro em falta
						cout << "Valor em falta: " << falta << " Insira novamente: ";
						cin >> valor; //recebe o valor em falta
//						while(valor!=2 && valor!=1 && valor!=0.5 && valor!=0.2 && valor!=0.1 && valor!=0.05 && valor!=0.02 && valor!=0.01){ //caso a moeda seja diferente a maquina nao aceita
//							cout<<"Moeda nao existente. \n";
//							cout<<"Insira um novo valor(2,1,0.5,0.2,0.1,0.05,0.02,0.01): ";
//							cin>>valor;
//						}
						falta = falta - valor;
						
						while(falta > 0){ //ciclo para pedir sempre que falte dinheiro						
							cout << "Valor em falta: " << falta << " Insira novamente: ";	
							cin >> valor;
//							while(valor!=2 && valor!=1 && valor!=0.5 && valor!=0.2 && valor!=0.1 && valor!=0.05 && valor!=0.02 && valor!=0.01){ //caso a moeda seja diferente a maquina nao aceita
//								cout<<"Moeda nao existente. \n";
//								cout<<"Insira um novo valor(2,1,0.5,0.2,0.1,0.05,0.02,0.01): ";
//								cin>>valor;
//							}	
							falta = falta - valor;
							;			
						}
						if(falta<0){
							cout<<"Troco:"<<falta*-1<<"\n";
								moedas(falta*-1);
							}
						cout << "Retire o seu produto\n";
						a[escolha_compra-1].setstock(a[escolha_compra-1].getstock()-1); //retira um do stock do produto					
					}
					else{
						
						if (a[escolha_compra-1].getstock() == 0){ //caso o stock for 0
							troco = valor;
							cout << "Produto indisponivel! \n\n"; 
							cout<<"Devolucao do valor: "<<valor<<"\n"; //devolve o dinheiro
						}
						else{						
							troco = valor - a[escolha_compra-1].getpreco(); //remove um no stock
							cout << "Retire o troco: " << troco; //diz o troco
							cout << "\n";
							moedas(troco); //chama a função para calcular quantas moedas sao nessesarias
							cout << "Retire o seu produto\n";
							a[escolha_compra-1].setstock(a[escolha_compra-1].getstock()-1);
						}
					}										
					system("pause");system("cls");
					break;
					
						
				 	
			 	}
		}while(escolha_compra != 0);
	   	
       
}
