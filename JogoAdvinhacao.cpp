

#include <iostream>
//Puxando biblioteca de operações de sistema
#include <cstdlib>
//Puxando bibloteca de funções de tempo e data
#include <ctime>
using namespace std;

//Criando classe JogoAdvinhacao
class JogoAdvinhacao{
    //Criando membros privados para a classe acima
    private:
        //Crinado variavel do tipo int para a resposta do programa
        int numeroSecreto;
        //Criando variavel para o numero de tentativas que o usuario irá utilizar para descobrir a resposta
        int tentativas;
    //Criando membros publicos para a classe JogoAdvinhacao    
    public:
        //Puxando a classe JogoAdvinhacao
        JogoAdvinhacao(){
            //Começando um gerador de numeros aleatorios
            srand (time(0));
            //Gerando um numero aleatorio utilizando a função rand que vai de 1 a 99 por padrão mas como adicionamos +1 vai de 1 a 100
            numeroSecreto = rand() % 100 + 1;
            //Setando o valor da variavel tentativas para 0
            tentativas = 0;
        }
    //Criando metodo com nome de "jogar"
    void jogar () {
        //Criando variavel do tipo int para a resposta do usuario
        int palpite;
        //Função faça enquanto
        do{
            //Tela pedindo para o usuario digitar um numero entre 1 e 100
            cout << "Digite um numero entre 1 e 100: ";
            //Atribuindo o valor a variavel "palpite"
            cin >> palpite;
            //Somando +1 a variavel "tentativas"
            tentativas++;
            //Condição se a variavel "palpite" for maior que a variavel "numeroSecreto"
            if (palpite > numeroSecreto){
                //Mensagem que será mostrada caso condição for cumprida
                cout << "O numero secreto é menor!" << endl;
            //Condição se a variavel "palpite" for menor que a variavel "numeroSecreto"    
            }else if  (palpite < numeroSecreto) { 
                //Mensagem que será mostrada caso condição for cumprida
                cout << "O numero secreto é maior!" << endl;
            //Condição se as outras condições não forem cumpridas    
            } else {
                //Mensagem que será mostrada caso condição for cumprida
                cout << "Parabens você acertou o numero em "<< tentativas <<
                " tentativas!"<< endl;
            }
            //Continuação da função faça enquanto, com a condição que o valor da variavel "palpite" seja diferente da variavel "numeroSecreto"   
            }while (palpite != numeroSecreto);
        }
    };
    
    int main(){
        //Criando um objeto para a classe JogoAdvinhacao
        JogoAdvinhacao jogo;
        //Chamando metodo jogar
        jogo.jogar();
        return 0;
    }
/* O construtor no programa acima serve para guardar as configurações iniciais do programa de maneira mais facil, em um jogo o construtor pode servir para carregar como a fase será, quais objetos e inimigos terão na fase, etc
    Um exemplo pode ser o jogo do mario de plataforma que assim que você puxa um certo construtor ele ja carrega os inimigos os recursos e objetos que terão , seja numero de inimigo do tipo A, quantos powerups terão entre outras coisas
*/






