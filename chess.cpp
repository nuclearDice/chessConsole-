#include <algorithm>
#include <iostream>
#include <pthread.h>
#include <string>
#include <iomanip>

class chessOption;
void showTutorial();
void showBoard();
int runningWater();
    char chessBoard[9][9]{ 
    {'8','e','h','r','q','k','r','h','e'},
    {'7','p','p','p','p','p','p','p','p'},
    {'6','0','0','0','0','0','0','0','0'},
    {'5','0','0','0','0','0','0','0','0'},
    {'4','0','0','0','0','0','0','0','0'},
    {'3','0','0','0','0','0','0','0','0'},
    {'2','P','P','P','P','P','P','P','P'},
    {'1','E','H','R','K','Q','R','H','E'},
    {' ','A','B','C','D','E','F','G','H'}};
int main(int line, int column){
chessOption option;
option.showTutorial();
option.showBoard();
char movef;
char movec;
char* movefp = &movef;
char* movecp = &movec;
std::cin>> movef;
std::cin>> movec;
option.runningWater(movecp, movefp);

std::cout<<column<<" "<<line<<" "<<chessBoard[column][line];
};
struct shessOption{
public:
void showTutorial(){
std::cout<<"p=pawn"<<std::endl;
std::cout<<"h=horse"<<std::endl;
std::cout<<"r=rook"<<std::endl;
std::cout<<"e=elephant"<<std::endl;
std::cout<<"k=king"<<std::endl;
std::cout<<"q=quenn"<<std::endl;

};

void showBoard(){

for (int i = 0; i < 9; i++) {   
        for (int j = 0; j < 9; j++) {           
            std::cout << std::setw(2) << chessBoard[i][j]; 
            }
        std::cout << std::endl;
    }

};
int runningWater(char movec, char movef){
int line;
int column;

main(line, column);
switch (movef){
    case 'A'|'a':{
    column = 1;
        }
    case 'B'|'b':{
    column = 2;
         }
    case 'C'|'c':{
    column = 3;
        }
    case 'D'|'d':{
    column = 4;
        }
    case 'E'|'e':{
    column = 5;
        }
    case 'F'|'f':{
    column = 6;
        }
    case 'G'|'g':{
    column = 7;
        }
    };
    switch (movef) {
    case 1:{
    line = 1;
    }
    case 2:{
    line = 2;
         }
    case 3:{
    line = 3;
        }
    case 4:{
    line = 4;
        }
    case 5:{
    line = 5;
        }
    case 6:{
    line = 6;
        }
    case 7:{
    line = 7;
        }
    };

return column, line;
}
};
class figures{
int pawn(){
bool first = false;

}
};
int horse(){
};
int rook(){
};
int elephant(){
};
int king(){
};
int quenn(){
};


