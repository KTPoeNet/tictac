#include <iostream>
#include <vector>
using namespace std;

std::vector<std::string> tictac = {{'-','-','-'},{'-','-','-'},{'-', '-', '-'}};
void display_table();
char player1_choice(char choice);
char player2_choice(char choice);
bool player1_victor();
bool player2_victor();

int main(){
  bool p1 = player1_victor();
  bool p2 = player2_victor();
  
  
  while(p1 == false || p2 == false)
  {
    
    char p1_choice,
      p2_choice;
    
    
    display_table();
       
    
    display_table();
    p1 = player1_victor();
    if(p1 == true)
    {
      cout << "Player1 winner" << endl;
      break;
    }
    cin >> p2_choice;
    player2_choice(p2_choice);
    p2 = player2_victor();
    if(p2 == true)
    {
      cout << "Player2 winner" << endl;
      break;
    }
  }
}


void display_table(){
  for(int i = 0; i < tictac.size();i++)
  {
    for(int j = 0; j < tictac[i].size();j++)
    {
      cout << tictac[i][j] << " ";
    }
    cout << "\n";
  }
}



bool player1_victor() {
  if(tictac[0][0] == 'x' && tictac[0][1]== 'x' && tictac[0][2] == 'x')
    {return true;}
  if(tictac[1][0] == 'x' && tictac[1][1]== 'x' && tictac[1][2] == 'x')
    {return true;}
  if(tictac[2][0] == 'x' && tictac[2][1]== 'x' && tictac[2][2] == 'x')
    {return true;}
  if(tictac[0][0] == 'x' && tictac[1][0]== 'x' && tictac[2][0] == 'x')
    {return true;}
  if(tictac[0][1] == 'x' && tictac[1][1]== 'x' && tictac[2][1] == 'x')
    {return true;}
  if(tictac[0][2] == 'x' && tictac[1][2]== 'x' && tictac[2][2] == 'x')
    {return true;}
  if(tictac[0][0] == 'x' && tictac[1][1]== 'x' && tictac[2][2] == 'x')
    {return true;}
  if(tictac[0][2] == 'x' && tictac[1][1]== 'x' && tictac[2][0] == 'x')
    {return true;}
  else{
    return false;
  }
}

bool player2_victor() {
  if(tictac[0][0] == 'o' && tictac[0][1]== 'o' && tictac[0][2] == 'o')
    {return true;}
  if(tictac[1][0] == 'o' && tictac[1][1]== 'o' && tictac[1][2] == 'o')
    {return true;}
  if(tictac[2][0] == 'o' && tictac[2][1]== 'o' && tictac[2][2] == 'o')
    {return true;}
  if(tictac[0][0] == 'o' && tictac[1][0]== 'o' && tictac[2][0] == 'o')
    {return true;}
  if(tictac[0][1] == 'o' && tictac[1][1]== 'o' && tictac[2][1] == 'o')
    {return true;}
  if(tictac[0][2] == 'o' && tictac[1][2]== 'o' && tictac[2][2] == 'o')
    {return true;}
  if(tictac[0][0] == 'o' && tictac[1][1]== 'o' && tictac[2][2] == 'o')
    {return true;}
  if(tictac[0][2] == 'o' && tictac[1][1]== 'o' && tictac[2][0] == 'o')
    {return true;}
  else {
    return false;
  }
}

char player1_choice(char choice) {
  switch(choice) {
    case '7':
      return tictac[0][0] = 'x';
      break;
    case '8':
      return tictac[0][1] = 'x';
      break;
    case '9':
      return tictac[0][2] = 'x';
      break;
    case '4':
      return tictac[1][0] = 'x';
      break;
    case '5':
      return tictac[1][1] = 'x';
      break;
    case '6':
      return tictac[1][2] = 'x';
      break;
    case '1':
      return tictac[2][0] = 'x';
      break;
    case '2':
      return tictac[2][1] = 'x';
      break;
    case '3':
      return tictac[2][2] = 'x';
      break;
  }
}

char player2_choice(char choice) {
  switch(choice) {
    case '7':
      return tictac[0][0] = 'o';
      break;
    case '8':
      return tictac[0][1] = 'o';
      break;
    case '9':
      return tictac[0][2] = 'o';
      break;
    case '4':
      return tictac[1][0] = 'o';
      break;
    case '5':
      return tictac[1][1] = 'o';
      break;
    case '6':
      return tictac[1][2] = 'o';
      break;
    case '1':
      return tictac[2][0] = 'o';
      break;
    case '2':
      return tictac[2][1] = 'o';
      break;
    case '3':
      return tictac[2][2] = 'o';
      break;
  }
}