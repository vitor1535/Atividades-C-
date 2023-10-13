#include <iostream>
#include <string>

using namespace std;

int checarVitoria (int x)
{
    if (x == 3)
    {
        cout << "JOGO FINALIZADO!!!" << endl;
        system ("pause");
        return 0;
    }
    else
    {
        return 1;
    }
    
}

int main ()
{
    int x, o;
    char matriz [4][4];
    int auxiliar = 49;
    int contadorVitoriaX = 0, contadorVitoriaO = 0;
    int teste;

    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        matriz[i][j] = auxiliar;
        auxiliar++;
    }
    }

    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        cout << matriz[i][j] << "    ";
    }
        cout << endl;
    }

    do
    {

    cout << "Vai jogar [X] em qual posicao?" << endl;
    cin >> x;

       
    switch (x)
    {
        case 1:

            contadorVitoriaX = 0;
            matriz[0][0] = 'X';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
        

        break;

        case 2:

            matriz[0][1] = 'X';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;

        case 3:

            matriz[0][2] = 'X';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;

        case 4:

            matriz[1][0] = 'X';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;

        case 5:

            matriz[1][1] = 'X';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;

        case 6:

            matriz[1][2] = 'X';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;

        case 7:

            matriz[2][0] = 'X';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;

        case 8:

            matriz[2][1] = 'X';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;

        case 9:

            matriz[2][2] = 'X';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;
        
    }

    cout << "Vai jogar [O] em qual posicao?" << endl;
    cin >> o;

    switch (o)
    {
        case 1:

            matriz[0][0] = 'O';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;

        case 2:

            matriz[0][1] = 'O';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;

        case 3:

            matriz[0][2]= 'O';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;

        case 4:

            matriz[1][0] = 'O';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;

        case 5:

            matriz[1][1] = 'O';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }  

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            } 

        break;

        case 6:

            matriz[1][2] = 'O';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;

        case 7:

            matriz[2][0] = 'O';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;

        case 8:

            matriz[2][1] = 'O';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;

        case 9:

            matriz[2][2] = 'O';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matriz[i][j] << "    ";
            }
            cout << endl;
        }   

        for (int i = 0; i < 3; i++)  // Vitoria horizontal superior X e O
        {
            if (matriz[0][i] == 'X')
            {
                contadorVitoriaX++;
            }

            else if (matriz[0][i] == 'O')
            {
                contadorVitoriaO++;
            }           
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        for (int i = 0; i < 3; i++)  // Vitoria horizontal meio X e O
        {
            if (matriz[1][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[1][i] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria horizontal inferior X e O
        {
            if (matriz[2][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[2][i] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        contadorVitoriaX = 0;
        contadorVitoriaO = 0;

        for (int i = 0; i < 3; i++)  // Vitoria vertical esquerda X e O
        {
            if (matriz[i][0] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][0] == 'O')
            {
                contadorVitoriaO++;
            }
                        
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical meio X e O
        {
            if (matriz[i][1] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][1] == 'O')
            {
                contadorVitoriaO++;
            }            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }


        for (int i = 0; i < 3; i++)  // Vitoria vertical direita X e O
        {
            if (matriz[i][2] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][2] == 'O')
            {
                contadorVitoriaO++;
            }
            
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }
  
        for (int i = 0; i < 3; i++)  // Vitoria diagonal1 X e O
        {
            if (matriz[i][i] == 'X')
            {
                contadorVitoriaX++;
            }

            if (matriz[i][i] == 'O')
            {
                contadorVitoriaO++;
            }
  
        }

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

            // Vitoria diagonal2 X e O

            if (matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X') 
            {
                contadorVitoriaX = 3;
            }

            if (matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O')
            {
                contadorVitoriaO = 3;
            }
        

        teste = checarVitoria(contadorVitoriaX);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaX = 0;
            }

            teste = checarVitoria(contadorVitoriaO);

            if (teste == 0)
            {
                return 0;
            }
            else
            {
                teste = 1;
                contadorVitoriaO = 0;
            }

        break;
        
    }
    } while (x != 0);
        
    system ("pause");
    return 0;
}