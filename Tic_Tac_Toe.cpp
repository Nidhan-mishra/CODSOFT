#include <iostream>

using namespace std;

char board[9]={'0','1','2','3','4','5','6','7','8'};
char T='X';
int m;

void drawboard()
{
    for (int i = 0; i <9; i++)
    {
        if (i==3 || i==6 || i==9)
        {
           cout<<"\n";
        }
        cout<<board[i]<<" ";
    }
}
void Turn()
{
    cout<<"\n"<<"Player "<<T<<" Enter a number from 0 to 8:";
    cin>>m;
    if (board[m] != 'X' && board[m] != 'O')
    {
        board[m]=T;
    }
    else
    {
        cout<<"Invalid input try again:"<<"\n";
        Turn();
    }
}

bool win()
{
      return (board[0] == board[1] && board[1] == board[2]) || 
      (board[3] == board[4] && board[4] == board[5]) || 
      (board[6] == board[7] && board[7] == board[8]) || 
      (board[0] == board[3] && board[3] == board[6]) || 
      (board[1] == board[4] && board[4] == board[7]) || 
      (board[2] == board[5] && board[5] == board[8]) ||
      (board[0] == board[4] && board[4] == board[8]) || 
      (board[2] == board[4] && board[4] == board[6]);
        
 
}

void switchT()
{
    T=(T=='X')?'O':'X';
}

bool draw()
{
    for (int i = 0; i < 9; i++) {
        if (board[i] != 'X' && board[i] != 'O') return false;
    }
    return true;
}


int main()
{
    while (true)
    {
       drawboard();
       Turn();
       if (win())
       {
        drawboard();
        cout<<"\n"<<"Player : "<<T<<" "<<"Wins!"<<"\n";
        break;
       }
       if (draw())
       {
        drawboard();
        cout<<"\n"<<"It is a draw"<<"\n";
        break;
       }
       switchT();
       
    }
   
}