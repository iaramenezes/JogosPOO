//Tema 2 - Teste de Força
#include <iostream> // Biblioteca de entrada e saida
#include <string> // Biblioteca para usar o tipo de dado string
#include <ctime> // Biblioteca para usar o tempo como semente do gerador
using namespace std; // Faz com que as bibliotecas com entrada e saída estejam disponíveis para o programa.

int main(int argc, char* args[]) { //Função principal

	bool sair = false; //variável do tipo boleana para usar no laço while
	string jog1, jog2; // Declarando as variáveis que armazenarão os nomes dos jogadores, no caso, strings.
	int vida1 = 20, vida2 = 20; //Declarando variáveis do tipo inteira para receber a vida inicial(total) dos jogadores.
	int A = 4, D = 2; // Declarando variáveis de ataque e defesa com seus respectivos valores.

	cout << "Digite o nome do jogador 1:" << endl; //Comando que imprime na tela aquilo que o usuário deve digitar, no caso, o nome do jogador 1.
	cin >> jog1; // Comando que "ler" o que o usuário digitou no teclado e armazena como o valor da variável jog1
	//Mesma coisa para o segundo jogador
	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2; 

	while (sair == false) //laço que define 
	{ //
		 //Imprimindo na tela os "bonecos"
		cout << " o                  o" << endl; //imprimindo  na tela a cabeça dos bonecos
		cout << ".T./              \\.T." << endl; // Imprimindo na tela o corpo dos boneos e suas "espadas"
		cout << " ^                  ^" << endl; // Imprimindo na tela as pernas dos bonecos
		//Mostrando na tela os DADOS dos jogadores(VIDA, ATAQUE E DEFESA)
		cout << jog1 << "            " << jog2 << endl; //Mostra na tela os nomes nos jogadores 
		cout << "Vida:" << vida1 << "            " << "Vida:" << vida2 << endl; //Mostra a vida inicial dos jogadoes
		//Status dos personagnes(Ataque e defesa)
		cout << "Ataque:" << A << "            " << "Ataque:" << A << endl; 
		cout << "Defesa:" << D << "            " << "Defesa:" << D << endl; 

		system("pause"); //Comando que limpa a tela e vai para outra rodada

		int dado6; // DADO DO JOGO

		//comando que usa o tempo atual como "sememte" do gerador
		srand((int)time(0));
		//gera um número aleatório entre 1 e 6.
		dado6 = rand() % 6 + 1;
		//O primeiro jogador "ataca" e gera um dano no segundo jogador

		//Mostrando na tela se o jogador acertou ou errou
		//Mostrando os danos
		if (dado6 > 4) //Condição "se" que define quando o jogador 1 acertou. Se o número tirado no dado pelo jogador for maior que 4, ele acertou.
		{
			vida2 = vida2 - dado6; //Subtraindo o valor do dano na variável da vida do segundo jogador. 
			cout << jog1 << ": Uhul! Parabens! Voce acertou!" << endl; //Imprime na tela do usuário que ele acertou, pois o valor do dado foi maior do que 4.
			cout << jog2 << ": Dano:" << -dado6 << endl; //Mostrando na tela o valor do dano
			cout << "Proxima jogada(Digite enter):" << endl; //Pede para o jogador digitar enter para ir para a próxima rodada.
			cin.get(); //Comando que paralisa a tela até que o usuário digite enter e pule para a rodada seguinte.
		} 
		else if (dado6 <= 4) // Condição "se não" que define que "se" o jogador 1 "não" tirou mais de 4 no dado, ele errou. 
		{ 
			cout << jog1 << ": Ah, que pena! Voce errou!" << endl; //Mostra na tela do usuário que ele errou a jogada.
			cout << "Proxima jogada(Digite enter):" << endl; //pede para ele dar enter e ir para a próxima rodada.
			cin.get(); //Comando que paralisa a tela até que o usuário digite enter e pule para a rodada seguinte.
		}

		//O mesmo processo do primeiro jogador acontece para o segundo jogador, só que o dano gerado agora vai para o primeiro jogador.

		srand((int)time(0)); 
		dado6 = rand() % 6 + 1; 

		if (dado6 > 4) 
		{

			vida1 = vida1 - dado6; 
			cout << jog2 << ": Uhul! Parabens! Voce acertou!" << endl; 
			cout << jog1 << ": Dano:" << -dado6 << endl; 
			cout << "Proxima jogada (Digite enter):" << endl; 
			cin.get(); 
		}

		else if (dado6 <= 4) { //

			cout << jog2 << ": Ah, que pena! Voce errou!" << endl; //
			cout << "Proxima jogada (Digite enter):" << endl; //
			cin.get(); //

		}

		//cout << "Vida: " << vida1 << "         " << "Vida: " << vida2 << endl; 

		system("cls"); //

		//Se sair não limpa a tela
		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true; //
		}
		// Se continuar limpa a tela
		else system("cls");
	}
	//Imprime na tela que encerrou o combate, ou seja, o jogo terminou.
	cout << "Fim de jogo!" << endl; //

	//MOSTRANDO NA TELA QUAL DOS JOGADORES VENCEU O JOGO.

	if (vida1 > 0) cout << jog1 << " Venceu!" << endl; //Condição que diz que SE o jogador 1 tiver a vida maior do que 0, ele venceu o jogo.
	//SE a condição no IF for falsa, o jogador 2 venceu.
	else if (vida2 > 0) cout << jog2 << " Venceu!" << endl; 
	//SE as duas condições acima forem falsas, é porque os dois perderam, portanto, não houve vencedor.
	else cout << "Os dois perderam!" << endl; 
	return 0; //Finaliza a função main.


}