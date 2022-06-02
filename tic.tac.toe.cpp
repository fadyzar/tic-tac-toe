#include<iostream>
#include <cstdlib>
using namespace std;
char currentMarker;


class marker{
private:
char Marker;

public:

void setMarker(char Marker){
    this->Marker=Marker;
}

char getMarker(){
    return Marker;
}

};



class player{
private:

string firstName;
marker player_marker;

public:
player(){}
player(string firstName,class marker player_marker){
  this->firstName=firstName;
  this->player_marker=player_marker;
}

void setfirstName(string firstName){
    this->firstName=firstName;
}
string  getFirstName(){
    return firstName;
}
 void setPlayerMarker(class marker player_marker){
this->player_marker=player_marker;

 }

 marker getPlayerMarker(){
     return player_marker;
 }
char chooseMarker(){
    string playerName;
    int flag=0;

      printf("\033[1;36m");
    cout<<"Please enter your name : "<<endl;
    cin>>playerName;
   
    cout<<playerName<<" "<<"please choose a marker [X] or [O]:"<<endl;
    cin>>currentMarker;
    
    if(currentMarker!='X'&&currentMarker!='O'&&currentMarker!='x'&&currentMarker!='o'){
          cout<<"Invalid Input!!!"<<endl;
   
    while(currentMarker!='X'&&currentMarker!='O'&&currentMarker!='x'&&currentMarker!='o'){
       cout<<playerName<<" "<<"please try again , choose a marker [X] or [O]:"<<endl;
       cin>>currentMarker;
    }
      }
 
      else if(currentMarker=='X'||currentMarker=='x')
          player_marker.setMarker(currentMarker);
    
      else
      player_marker.setMarker(currentMarker);
  

  //cout<<currentMarker<<endl;
  //cout<<"test  " <<player_marker.getMarker()<<endl;
return currentMarker;

}



};





class Board{

private:
char computerMarker;
char level;

public:

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void setComputerMarker(char computerMarker){
    this->computerMarker=computerMarker;
}
char getComputerMarker(){
    return computerMarker;
}



void draw_board()
{
    printf("\033[1;33m");
    cout<<"    "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<"\n";
    cout<<"   -----------"<<"\n";
    cout<<"    "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<"\n";
    cout<<"   -----------"<<"\n";
    cout<<"    "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<"\n";

}

void check_winner(){
     player first_name;
     //cout<<"test 2"<<currentMarker<<endl;
       
      for(int i=0;i<3;i++)
    {
        if(board[i][0]=='x'||board[i][0]=='X'&&board[i][1]=='x'||board[i][1]=='X'&&board[i][2]=='x'||board[i][2]=='X'){
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
        cout<<"YAYYYY, you won the game !!Congrats!!"<<endl;
        return ;
        }
        }
        if(board[0][i]=='x'||board[0][i]=='X'&&board[1][i]=='x'||board[1][i]=='X'&&board[2][i]=='x'||board[2][i]=='X'){
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
          cout<<"YAYYYY, you won the game !!Congrats!!"<<endl;
        return;
        }
        }

    }
if(board[0][0]=='x'||board[0][0]=='X'&&board[1][1]=='x'||board[1][1]=='X'&&board[2][2]=='x'||board[2][2]=='X'){
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
      cout<<"YAYYYY, you won the game !!Congrats!!"<<endl;
    return ;
    }
}
if(board[0][2]=='x'||board[0][2]=='X'&&board[1][1]=='x'||board[1][1]=='X'&&board[2][0]=='x'||board[2][0]=='X'){
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
      cout<<"YAYYYY, you won the game !!Congrats!!"<<endl;
    return ;
    }
}


      for(int i=0;i<3;i++)
    {
        if(board[i][0]=='o'||board[i][0]=='O'&&board[i][1]=='o'||board[i][1]=='O'&&board[i][2]=='o'||board[i][2]=='O'){
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
        cout<<"COMPUTER"<<" "<<" WON!!!"<<endl;
        return ;
        }
        }
        if(board[0][i]=='o'||board[0][i]=='O'&&board[1][i]=='o'||board[1][i]=='O'&&board[2][i]=='o'||board[2][i]=='O'){
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
          cout<<"COMPUTER"<<" "<<" WON!!!"<<endl;
        return;
        }
        }

    }
if(board[0][0]=='o'||board[0][0]=='O'&&board[1][1]=='o'||board[1][1]=='O'&&board[2][2]=='o'||board[2][2]=='O'){
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
      cout<<"COMPUTER"<<" "<<" WON!!!"<<endl;
    return ;
    }
}
if(board[0][2]=='o'||board[0][2]=='O'&&board[1][1]=='o'||board[1][1]=='O'&&board[2][0]=='o'||board[2][0]=='O'){
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
      cout<<"COMPUTER"<<" "<<" WON!!!"<<endl;
    return ;
    }
}



    return ;
}




int place_marker(int slot)
{

    int row;
    if(slot % 3 == 0) 
    row =  (slot / 3) - 1;
    else
    row = slot / 3;
    

    int col;
    if(slot % 3 == 0)
     col = 2;
    else 
    col = (slot % 3) - 1;
     //cout<<row<<col<<endl;
    if(board[row][col] == 'O' || board[row][col] == 'X')
    {
        cout<<"!!Slot already marked!!\n";
        return 0;
    }
    else{
        printf("\033[1;32m");
      board[row][col] = currentMarker;
      //draw_board();
      check_winner();
   
    
      
    }
 
    return 1;
}

char computer_Marker(){
    if(currentMarker=='X'||currentMarker=='x'){
       computerMarker='O';
       setComputerMarker(computerMarker);
    }
  if(currentMarker=='O'||currentMarker=='o'){
        computerMarker='X';
       setComputerMarker(computerMarker);
  }

 //cout<<"computer marker test!!"<<computerMarker<<endl;
return computerMarker;
}


void computerLowLevelMoves(){
    
     int row,col;
    row =  rand()%3;
    col= rand()%3;
   
   if(board[row][col] == 'O' || board[row][col] == 'X')
    {
        //cout<<"!!Slot already marked!!\n";
         computerLowLevelMoves();
        return ;
    }
    else{

    board[row][col] = computerMarker ;
        
    check_winner();

}
}

void computerHighLevelMoves(){




}

};


void optionChoose(){
 int option;
 int slot;    
 player player;   
 Board board;
 printf("\033[1;34m");
    cout<<"You have two levels which one you want :"<<endl ;
    cout<<"1. Level 'B' for beginners"<<endl;
    cout<<"2. Level 'A' for professional"<<endl;
   cin>>option;
   switch (option)
   {
   case 1:
player.chooseMarker();
board.draw_board();

for(int i=0;i<9;i++){
cout<<"Please enter your slot: "<<endl;
cin>>slot;

board.place_marker(slot);
board.computer_Marker();
board.computerLowLevelMoves();
board.draw_board();
//COMPUTER MOVE FUNCTION
}
       break;
   
   case 2:

       break;
   }
}



int main(){
int slot;    
player player;   
Board board;
int option;
printf("\033[1;32m");
cout<<endl<<"``````HEllO and welcome to my Tic_Tac_Toe 2022 game``````"<<endl;
cout<<"~~~~~~~~~~~~So let's have some fun~~~~~~~~~~~"<<endl;
cout<<"Please choose any option you want"<<endl;
cout<<"1. Press 1 to challenge your friend as two players"<<endl;
cout<<"2. Press 2 to get computer challenge"<<endl;
cin>>option;
switch (option)
{
case 1:
    /* code */
    break;

case 2:
optionChoose();
    break;
}


    return 0;
}
