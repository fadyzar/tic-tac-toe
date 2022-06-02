#include<iostream>
#include <cstdlib>
using namespace std;
//const INFINITY -99999
char currentMarker;
int computerScore=0;
int playerScore=0;
int flag=1;

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
//int computerScore=0;
//int playerScore=0;
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
public:

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

bool check_winner(){
  
     player first_name;
     //cout<<"test 2"<<currentMarker<<endl;
       
      for(int i=0;i<3;i++)
    {
        if((this->board[i][0]=='x'||this->board[i][0]=='X') && (this->board[i][1]=='x'||this->board[i][1]=='X') && (this->board[i][2]=='x'||this->board[i][2]=='X')){
        if((this->board[i][0] ==this-> board[i][1]) && (this->board[i][1] == this->board[i][2])) {
        cout<<"YAYYYY you won the game !!Congrats!!"<<endl;
      
        return true;
         //break;
        }
        }
  
        if((this->board[0][i]=='x'||this->board[0][i]=='X') && (this->board[1][i]=='x'||this->board[1][i]=='X') && (this->board[2][i]=='x'||this->board[2][i]=='X')){
        if((this->board[0][i] ==this-> board[1][i]) && (this->board[1][i] ==this-> board[2][i])) {
          cout<<"YAYYYY you won the game !!Congrats!!"<<endl;
    
        return true;
         //break;
        }
        }

    }
if((this->board[0][0]=='x'||this->board[0][0]=='X') && (this->board[1][1]=='x'||this->board[1][1]=='X') && (this->board[2][2]=='x'||this->board[2][2]=='X')){
    if((this->board[0][0] == this->board[1][1]) && (this->board[1][1] == this->board[2][2])) {
      cout<<"YAYYYY you won the game !!Congrats!!"<<endl;
   
        return true;
    }
}
if((this->board[0][2]=='x'||this->board[0][2]=='X') && (this->board[1][1]=='x'||this->board[1][1]=='X') && (this->board[2][0]=='x'||this->board[2][0]=='X')){
    if((this->board[0][2] == this->board[1][1]) && (this->board[1][1] == this->board[2][0])) {
      cout<<"YAYYYY you won the game !!Congrats!!"<<endl;

        return true;
    }
}


      for(int i=0;i<3;i++)
    {
        if((this->board[i][0]=='o'||this->board[i][0]=='O') && (this->board[i][1]=='o'||this->board[i][1]=='O') && (this->board[i][2]=='o'||this->board[i][2]=='O')){
        if((this->board[i][0] == this->board[i][1]) && (this->board[i][1] == this->board[i][2])) {
        cout<<"COMPUTER"<<" "<<" WON!!!"<<endl;
       
        return true;
        }
        }
        if((this->board[0][i]=='o'||this->board[0][i]=='O') && (this->board[1][i]=='o'||this->board[1][i]=='O') && (this->board[2][i]=='o'||this->board[2][i]=='O')){
        if((this->board[0][i] == this->board[1][i]) && (this->board[1][i] == this->board[2][i])) {
          cout<<"COMPUTER"<<" "<<" WON!!!"<<endl;

        return true;
       }
        }

    }
if((this->board[0][0]=='o'|| this->board[0][0]=='O') && ( this->board[1][1]=='o'|| this->board[1][1]=='O') && ( this->board[2][2]=='o'|| this->board[2][2]=='O')){
    if((this->board[0][0] == this->board[1][1]) && (this->board[1][1] == this->board[2][2])) {
      cout<<"COMPUTER"<<" "<<" WON!!!"<<endl;

        return true;
   }
}
if((this->board[0][2]=='o'||this->board[0][2]=='O') && (this->board[1][1]=='o'||this->board[1][1]=='O') && (this->board[2][0]=='o'||this->board[2][0]=='O')){
    if((this->board[0][2] == this->board[1][1]) && (this->board[1][1] == this->board[2][0])) {
      cout<<"COMPUTER"<<" "<<" WON!!!"<<endl;
        
        return true;
    }
}



    return false;
}




void place_marker(int slot)
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
        return ;
    }
    else{
        printf("\033[1;32m");
      board[row][col] = currentMarker;
     

    
      
    }
 
    
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

 // cout<<"computer marker test!!"<<computerMarker<<endl;
return computerMarker;
}


void computerLowLevelMoves(){
    
     int row,col;
    row =  rand()%3;
    col= rand()%3;
   
   if(board[row][col] == 'O' || board[row][col] == 'X' || board[row][col] == 'o' || board[row][col] == 'x')
    {
        //cout<<"!!Slot already marked!!\n";
         computerLowLevelMoves();
       
        return ;
    }
    else{

    board[row][col] = computerMarker ;

}
}

bool emptySpot(char b[3][3]){
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if (board[i][j]!='X'&&board[i][j]!='x'&&board[i][j]!='O'&&board[i][j]!='o'){
                return true;
                }
            }
        }
        return false;

}

void bestMove(){

int bestScore= -999;
int bestRowMove,bestColMove;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       
        //check if the spot is available?
        if(emptySpot(board)==true){
            // cout<<computerMarker<<endl;
            //board[i][j]=computerMarker;
            int score=minimax(board);
            if(score>bestScore){
                bestScore=score;
                bestRowMove=i;
                bestColMove=j;
            }
        }
         
    }

}
board[bestRowMove][bestColMove]=computerMarker;



}

int minimax(char board[3][3]){

return 1;

}
 
 
 


};



//end of board class

void levelOne(){
 int slot;    
 player player;   
 Board board;
 
if(flag==1){
player.chooseMarker();
}
board.draw_board();



while(true){

cout<<"Please enter your slot: "<<endl;
cin>>slot;

board.place_marker(slot);
if(board.check_winner()==true){
     playerScore++;
    board.draw_board();
 break;
}
board.computer_Marker();
board.computerLowLevelMoves();
if(board.check_winner()==true){
    computerScore++;
    board.draw_board();
    break;
}
board.draw_board();

}
char answer;
     
     while(true){
    cout<<"Computer: "<<computerScore<<" "<<"You: "<<playerScore<<endl;
    cout<<"Do you want to play again?(y/n):"<<endl;
    cin>>answer;
     if(answer =='y'|| answer =='Y'){
     flag=0;
      levelOne();
 
     }
     else 
    cout<<"I hope you enjoy it!!"<<endl;
    break;
     }



}

//high level
void levelTwo(){
    int slot;    
 player player;   
 Board board;
 
if(flag==1){
player.chooseMarker();
}
board.draw_board();



while(true){

cout<<"Please enter your slot: "<<endl;
cin>>slot;

board.place_marker(slot);
if(board.check_winner()==true){
     playerScore++;
    board.draw_board();
 break;
}
board.computer_Marker();
board.bestMove();
if(board.check_winner()==true){
    computerScore++;
    board.draw_board();
    break;
}
board.draw_board();

}
char answer;
     
     while(true){
    cout<<"Computer: "<<computerScore<<" "<<"You: "<<playerScore<<endl;
    cout<<"Do you want to play again?(y/n):"<<endl;
    cin>>answer;
     if(answer =='y'|| answer =='Y'){
     flag=0;
      levelTwo();
 
     }
     else 
    cout<<"I hope you enjoy it!!"<<endl;
    break;
     }



}


void computerOptionChoose(){
 int option;
 int slot;   

 player player;   
 Board board;
 printf("\033[1;34m");
    cout<<"You have two levels which one you want :"<<endl ;
    cout<<"1. Level '1' for beginners"<<endl;
    cout<<"2. Level '2' for professional"<<endl;
   cin>>option;
   switch (option)
   {
   case 1:
     levelOne();
      
       break;
   
   case 2:
     levelTwo();
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
computerOptionChoose();
    break;
}


    return 0;
}
