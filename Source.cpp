//Tema3 - Jogo de Corrida
//incluindo as bibliotecas 
#include <iostream> 
#include <string>// Para armazenar os nomes dos jogadores
#include <ctime>// Para usar o tempo como semente do gerador 
using namespace std;

void imprimir_espacos(int total1); //Identificando a função void criada.

int main(int argc, char* args[])// funcão principal.
{

		bool sair = false; // Variavel do tipo boleana para usar na condicão do laço while(enquanto).

		string jogador1, jogador2; //Variavéis para salvar os nomes dos jogadores.

		int total1 = 0, total2 = 0;//Variavel para definir a quantidade de  espacos iniciais de cada carrinho e fazer à alteração deste valor a cada rodada.

	cout << "Digite o nome do primeiro jogador:" << endl; //Pede que o primeiro jogador digite seu nome.
	cin >> jogador1; // Salva o nome inserido pelo jogador 1 na variavel correspondente.

	//mesma coisa para o segundo jogador
	cout << "Digite o nome do segundo jogador:" << endl;
	cin >> jogador2; 

	//Usa o laço "enquanto" para determinar a hora de parar.
	while (sair == false)
	{


		// Variavel inteira para definir o tamanho da pista.
		int total_espacos = 60;

		//Faz o calculo para gerar um numero aleatório usando o tempo.
		srand((int)time(0));

		//Gera um numero aleatorio para o total de espacos entre 1 e 3
		total_espacos = rand() % 3 + 1;

		total1 = total1 + total_espacos;

		//Mesma coisa para o segundo jogador
		total_espacos = rand() % 3 + 1;

		total2 = total2 + total_espacos;

		 //Imprimindo a pista na tela

		cout << "                         PISTA DE CORRIDA                      " << endl; //Abertura da corrida
		//Imprime na tela a largada e chegada
		cout << "|LARGADA|:                                                       |CHEGADA|:" << endl;


		cout << endl << "Carrinho 1: " << jogador1 << endl; // Usa o nome digitado no jogador1 como nome do primeiro carro.
		imprimir_espacos(total1);//Imprimindo os espaços.
		cout << " _ " << endl;//Imprimindo uma parte do carro.
		imprimir_espacos(total1);//Usa o numero aleatorio gerado no Total1 para definir a qntd de espaços que devem ser impressos.
		cout << "o==o>" << endl;// primeiro carrinho
		cout << "-----------------------------------------------------------------------------" << endl;//Imprimindo a pista 
		
		cout << jogador1 << ", Voce andou:" << total1 << " casas" << endl;  // Mostra na tela os espaços andado pelo carrinho 1

		//MESMA COISA PARA O SEGUNDO JOGADOR
		cout << endl << "Carrinho 2: " << jogador2 << endl;// Usa o nome digitado no jogador2 como nome do segundo carro.
		imprimir_espacos(total2);//Imprimindo os espaços.
		cout << " _ " << endl;//Imprimindo uma parte do carro.
		imprimir_espacos(total2);//Usa o numero aleatorio gerado no Total2 para definir a qntd de espaços que devem ser impressos.
		cout << "o==o>" << endl;// segundo carrinho.
		cout << "------------------------------------------------------------------------------" << endl;//Imprimindo a pista 
		
		cout << jogador2 << ", Voce andou:" << total2 << "casas" << endl;  //Mostra na tela quantos espaços andou o carrinho 2



		//Se o jogo terminar não limpa a tela.
		if (total1 >= 60 || total2 >= 60)//Faz a condição do laço ficar falsa e o jogo parar.
		{
			sair = true;

		}

		//Se continuar limpa a tela.
		else system("cls");


	}

	//Quando sair do laço mostra que o jogo acabou
	cout << endl << "GAME OVER!" << endl;

	//Imprimindo na tela quem venceu o jogo ou se empatou.
	if (total1 >= 60)
		cout << endl << jogador1 << ",PARABENS! VOCE VENCEU A PARTIDA! =D" << endl; //Se o joador1 andou 60 ou mais espaços, ele venceu.
	else if (total2 >= 60) 
		cout << endl << jogador2 << ",PARABENS! VOCE VENCEU A PARTIDA! =D" << endl; // Se o jogador2 andou 60 ou mais espaços, ele venceu.
	else
		cout << "Ops, voces empataram!" << endl;

	return 0; //Retorna ao inicio.

}


void imprimir_espacos(int total) //Utiliza a função void como "Super poder".
{

	// Laço for(para) por não saber a hora que vai parar.
	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)
	{
		cout << " ";// espaço que vai ser impresso, dependendo do numero aleatorio.


	}

}
