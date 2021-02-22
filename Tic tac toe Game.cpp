//Tic tac toe game

#include<iostream>
#include<cstdlib>
#include<cctype>

using namespace std;

void TurnPlayerO ( char[][3],char&);		//Function prototypes
void TurnPlayerX ( char[][3], char&);
void PrintGrid();
void PrintWinner(int);

const int ROWS= 3;
const int COLUMNS =3;
char grid[ROWS][COLUMNS] = {'A','B','C',
						 	'D','E','F',
						 	'G','H','I'};

int main()
{
	
	int count;		//to keep track of turns
	char letter;
	
	cout<<"Welcome to the TIC TAC TOE GAME!!!"<<endl;
	
	//Printing initial grid table;
	cout<<"Initial grid table: "<<endl;
	PrintGrid();
	cout<<endl<<"The first turn is for the Os"<<endl;
	
	count = 1;
	
	while ( count <= 9)
	{
		if (( count % 2 ) != 0 )
		{
			TurnPlayerO(grid,letter);		//Place on the grid the turn for the Os
		}
		else
		{
			TurnPlayerX(grid,letter);		//Place on the grid the turn for the Xs
		}
		PrintGrid();
	
		if     (((grid[0][0] == grid[0][1]) && (grid[0][0] == grid[0][2])) ||	//if statement checks out if there is a winner
				((grid[1][0] == grid[1][1]) && (grid[1][0] == grid[1][2])) ||
				((grid[2][0] == grid[2][1]) && (grid[2][0] == grid[2][2])) ||
				((grid[0][0] == grid[1][0]) && (grid[0][0] == grid[2][0])) ||
				((grid[0][1] == grid[1][1]) && (grid[0][1] == grid[2][1])) ||
				((grid[0][2] == grid[1][2]) && (grid[0][2] == grid[2][2])) ||
				((grid[0][0] == grid[1][1]) && (grid[0][0] == grid[2][2])) ||
				((grid[0][2] == grid[1][1]) && (grid[0][2] == grid[2][0])))
				{
					PrintWinner(count);		//Prints a winner
				}
		
	
		count++;
	}
	
	if(count >= 10 )
	{
		cout<<"It is a TIE!!\a";
	}
		
	
	return 0;
}
//Function definitions
//************************************************************************************
void TurnPlayerO ( char grid[][3],char& letter )
//The user is prompt to enter a letter of the grid, the O will be
//place on the spot of the letter.
{
	cout<<"Enter the letter in which you would like to place the O: ";
	cin>>letter;
	
		switch(toupper(letter)) 	//Converts the letter to uppercase, in case the user uses a lowercase
		{
			case 'A': grid[0][0]='O';
					  break;
			case 'B': grid[0][1]='O';
					  break;
			case 'C': grid[0][2]='O';
					  break;
			case 'D': grid[1][0]='O';
					  break;
			case 'E': grid[1][1]='O';
					  break;
			case 'F': grid[1][2]='O';
					  break;
			case 'G': grid[2][0]='O';
					  break;
			case 'H': grid[2][1]='O';
					  break;
			case 'I': grid[2][2]='O';
					  break;
			default:  break;
					  
		}
	
}
//************************************************************************************
void TurnPlayerX ( char grid[][3],char& letter)
//The user is prompt to enter a letter of the grid, the X will be
//place on the spot of the letter.
{
	cout<<"Enter the letter in which you would like to place the X: ";
	cin>>letter;
	
		switch(toupper(letter))			//Converts the letter to uppercase, in case the user uses a lowercase
		{
			case 'A': grid[0][0]='X';
					  break;
			case 'B': grid[0][1]='X';
					  break;
			case 'C': grid[0][2]='X';
					  break;
			case 'D': grid[1][0]='X';
					  break;
			case 'E': grid[1][1]='X';
					  break;
			case 'F': grid[1][2]='X';
					  break;
			case 'G': grid[2][0]='X';
					  break;
			case 'H': grid[2][1]='X';
					  break;
			case 'I': grid[2][2]='X';
					  break;
			default:  break;
		}
	
}
//************************************************************************************
void PrintGrid()
//Prints the actual grid table of the game
{
	for (int i=0; i < 3; i++)
	{
		for (int j=0; j < 3; j++)
		{
			cout<<grid[i][j]<<" ";
		}
		cout<<endl;
	}
}
//************************************************************************************
void PrintWinner(int count)
//Prints the winner of the game
// IF count is an even number
//		the X-Player wins.
// ELSE
//		the O-Player wins.
{
	if ((count % 2 ) != 0)
	{
		cout<<"The winner is the O-PLAYER!!"<<endl;
		cout<<"The game is over\a";
		exit(0);
	}
	else
	{
		cout<<"The winner is the X-PLAYER!!";
		cout<<"The game is over\a";
		exit(0);
	}
	
}
