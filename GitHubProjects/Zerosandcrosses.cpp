#include <iostream> 
#include <algorithm>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <fstream>


using namespace std;


enum Menu {
    EXITGAME, //0
    STARTGAME //1
};

enum CellType{
    NONE, //0
    NOUGHT, //1 
    CROSS //2
};
void AITurn (CellType b[3][3], CellType AI, int boardsize){
    //int boardsize = 3;
    //CellType AI = NOUGHT;
    srand(time(nullptr));
    int i1= rand();
    i1=i1%3;
    int j1= rand();
    j1=j1%3;
    int IsThereSpace=0; //создаем переменную для того чтобы знать остались ли у нас клетки или нет
    for (int i=0; i<boardsize; i++){
            for (int j=0; j<boardsize; j++){
                if (b[i][j]==NONE){
                    IsThereSpace+=1;
                }   
            }
        }
    if (IsThereSpace>0){
        if((i1<=boardsize && i1>0) && (j1<=boardsize && j1>=0)){
            while (b[i1][j1]!=NONE){
                i1=rand();
                i1=i1%3;
                j1=rand();
                j1=j1%3;
            }
            b[i1][j1]=NOUGHT;
            //ход машины
        }
    }
    cout << "Here's the board after the machine made its move: " << endl;
    for (int i=0; i<boardsize; i++){
            for (int j=0; j<boardsize; j++){
                switch (b[i][j]){
                case NONE: 
                printf("\033[3%d;4%dm", 7, 4);
                cout << "  ";
                printf("\033[00m");
                break;

                case CROSS: 
                printf("\033[3%d;4%dm", 0, 2);
                cout << "x ";
                printf("\033[00m");
                break;

                case NOUGHT:
                printf("\033[3%d;4%dm", 0, 1);
                cout << "o ";
                printf("\033[00m");
                break;

                default:
                cout << "  ";
                break;
                }  
            }
            cout << endl;
        }
    return;
}

bool Checkwin (CellType board[3][3], CellType Type, int boardsize){
    bool IsWinning = true;
    //int boardsize = 3;
    for (int i=0;i<boardsize; i++){
        IsWinning =true;
        for (int j=0; j<boardsize;j++){
            if (board[i][j]!=Type){
                IsWinning = false;
                break;
            }
        }
        if(IsWinning==true){
            break;
        }
    }
    if (IsWinning==true){
        return true;
    }
    else {
        return false;
    }

    for (int j=0; j<boardsize; j++){
        IsWinning =true;
        for (int i=0; i<boardsize; i++){
            if (board[i][j]!=Type){
                IsWinning = false;
                break;
            }
        }
        if(IsWinning==true){
            break;
        }
    }

    if (IsWinning==true){
        return true;
    }
    else {
        return false;
    }

    for (int i=0; i<boardsize; i++){
        IsWinning =true;
        if(board[i][i]!=Type){
            IsWinning=false;
            break;
        }
    }

    if (IsWinning==true){
        return true;
    }
    else {
        return false;
    }

    for (int i=boardsize-1; i<=0; i--){
        IsWinning =true;
        if(board[i][i]!=Type){
            IsWinning=false;
            break;
        }
    }

    if (IsWinning==true){
        return true;
    }
    else {
        return false;
    }
}

void StartGame(CellType board[3][3], CellType AiT, CellType PlayerT, int boardsize, int wins, int loses, int ties, int games){
    //int boardsize=3;
    //CellType AiT = NOUGHT;
    //CellType PlayerT = CROSS;
    int IsThereSpace=0; //создаем переменную для того чтобы знать остались ли у нас клетки или нет
    do {
        IsThereSpace=0;
        for (int i=0;i<boardsize; i++){
            for (int j=0; j<boardsize;j++){
                if (board[i][j]==NONE){
                    IsThereSpace+=1;
                }   
            }
        }
        cout << "Take a look at the board!" << endl;
        Sleep (300);
        cout << ". ";
        Sleep (300);
        cout << ". ";
        Sleep (300);
        cout << ". " << endl;
        for (int i=0; i<boardsize; i++){
            for (int j=0; j<boardsize; j++){
                switch (board[i][j]){
                case NONE: 
                printf("\033[3%d;4%dm", 7, 4);
                cout << "  ";
                printf("\033[00m");
                break;

                case CROSS: 
                printf("\033[3%d;4%dm", 0, 2);
                cout << "x ";
                printf("\033[00m");
                break;

                case NOUGHT:
                printf("\033[3%d;4%dm", 0, 1);
                cout << "o ";
                printf("\033[00m");
                break;

                default:
                cout << " ";
                break;
                }   
            }
        cout << " " << endl; 
        }
        int i, j;
        Sleep (2000);
        cout << "Enter the number of the line - it souldn't be bigger than 3 and shouldn't be taken by other move" << endl;
        cin >> i;
        i=i-1;
        //делаем из чисел индексы
        Sleep (300);
        cout << ". ";
        Sleep (300);
        cout << ". ";
        Sleep (300);
        cout << " ." << endl;
        system ("cls");
        cout << "Enter the number of the column - it shouldn't be bigger than 3 and shouldn't be taken by other move" << endl;
        cin >> j;
        j=j-1;
        Sleep (300);
        cout << ". ";
        Sleep (300);
        cout << ". ";
        Sleep (300);
        cout << " ." << endl;
        system ("cls");

        if((i<boardsize && i>=0) && (j<boardsize && j>=0) && (board[i][j]==NONE)){ //тут идут проверки на правильность клетки а дальше ходы
            board[i][j]=PlayerT;
            cout << "Here's the board after you made your move: " << endl;
            for (int i=0; i<boardsize; i++){
                for (int j=0; j<boardsize;j++){
                    switch (board[i][j]){
                    case NONE: 
                    printf("\033[3%d;4%dm", 7, 6);
                    cout << "  ";
                    printf("\033[00m");
                    break;

                    case CROSS: 
                    printf("\033[3%d;4%dm", 0, 2);
                    cout << "x ";
                    printf("\033[00m");
                    break;

                    case NOUGHT:
                    printf("\033[3%d;4%dm", 0, 1);
                    cout << "o ";
                    printf("\033[00m");
                    break;

                    default:
                    cout << "  ";
                    break;
                    }   
                }
                cout << endl;
            }
            Sleep (2000);
            system ("cls");
            bool IsWinning;
            IsWinning=Checkwin(board, PlayerT, boardsize);
            if (IsWinning==true){
                cout << "Congratulations!! You won!" << endl;
                wins+=1;
                games+=1;
                return;
            }
            AITurn(board, AiT, boardsize);
            Checkwin(board, AiT, boardsize);
            if (IsWinning==true){
                cout << "Oooooh, the machine won!" << endl;
                loses+=1;
                games+=1;
                return;
            }
        }
        else {
            cout << "Please enter a number WITHIN the range of numbers OR a spot on the board that is not taken." << endl;
        }
        if (IsThereSpace==0){
            cout << "Looks like you have a tie! Not bad, good game!" << endl;
            ties+=1;
            games+=1;
            return;
        }
    } while (IsThereSpace!=0); //вот тут я сразу захотела заключить весь процесс в цыкл: если клетки остались - ходим
    return;
}

int main(){
    fstream info;
    info.open("info.txt", fstream::in);
    int wins, loses, games, moves, boardsize=3, ties, moves_in_this_game;
    info >> games;
    info >> wins;
    info >> loses;
    info >> ties;
    info.close();
    bool win = false;
    //была ли победа или нет
    srand(time(nullptr));
    //рандом на потом
CellType board[3][3];
for (int i=0; i<boardsize; i++){
    for (int j=0; j<boardsize; j++){
        board[i][j]=NONE;
    }
}
CellType PlayerT = CROSS;
CellType AiT = NOUGHT;
int MenuNum;
Menu command;

bool PlayedBefore = false;
do {
    if (PlayedBefore == false){
        cout << "Greetings, my friend! Welcome to Crosses and Noughts!" << endl;
    }
    else {
        system("cls");
        cout << "Want to play again?" << endl;
        for (int i=0; i<boardsize; i++){
            for (int j=0; j<boardsize; j++){

            }
        }
    }
    Sleep (300);
    cout << ". ";
    Sleep (300);
    cout << ". ";
    Sleep (300);
    cout << ". " << endl;
    //анимация в консоли с точками как "мысли машины"
    cout << Menu::STARTGAME << " - Start a new game" << endl;
    cout << Menu::EXITGAME << " - Exit the game" << endl;
    cout << "Enter your command, please" << endl;
    cin >> MenuNum;
    command = Menu(MenuNum);

    switch (command){
        case STARTGAME:
            StartGame(board, AiT, PlayerT, boardsize, wins, loses, ties, games);
        break;

        case EXITGAME:
            cout << "Game closing... reboot system if you want to play again";
            Sleep (300);
            cout << ". ";
            Sleep (300);
            cout << ". ";
            Sleep (300);
            cout << ". " << endl;
            return 0;
        break;

        default:
            cout << "Please, enter valid command" << endl;
        break;
    }

    cout << "Game ended!" << endl;
    Sleep(1000);
        cout << "Here are your stats: " << endl;
    Sleep (300);
    cout << ". ";
    Sleep (300);
    cout << ". ";
    Sleep (300);
    cout << ". " << endl;
    cout << "Total Games played: ", games;
    cout << endl;
    Sleep (300);
    cout << ". ";
    Sleep (300);
    cout << ". ";
    Sleep (300);
    cout << ". " << endl;
    cout << "Total wins: ", wins;
    cout << endl;
    Sleep (300);
    cout << ". ";
    Sleep (300);
    cout << ". ";
    Sleep (300);
    cout << ".  " << endl;
    cout << "Total Loses: ", loses; 
    Sleep (300);
    cout << ". ";
    Sleep (300);
    cout << ". ";
    Sleep (300);
    cout << ".  " << endl;
    cout << "Total ties: ", ties;
    Sleep (300);
    cout << ". ";
    Sleep (300);
    cout << ". ";
    Sleep (300);
    cout << ".  " << endl;
    info.open("info.txt", fstream::trunc | fstream::out);
    info << games << endl;
    info << wins << endl;
    info << loses << endl;
    info << ties << endl;
    info.close();
    command=EXITGAME;
    PlayedBefore=true;
} while (command != STARTGAME); //проверка на комманду в меню




//надо придумать как "перезапустить систему автоматически" чтобы не повторять код сверху
    return 0;
}