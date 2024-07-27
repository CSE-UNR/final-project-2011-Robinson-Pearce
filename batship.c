//Final Project

#include<stdio.h>
#define FILE_NAME "easy.txt"

char board[10][10];
const char PLAYER;



void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();

int main() {

FILE *fout;
	
fout = fopen("board.txt", "r");


char winner;
char response;

	do 
	{
	winner = ' ';
	response = ' ';
	resetBoard(); 

	printBoard();
	
	playerMove();
	
	printf("Would you like to play again? (Y/N): ");
	scanf("%c", &response);

	} while(response == 'Y');
	
	printf("\nThanks for playing!\n");
	






return 0;
}
void resetBoard()
{
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
		board[i][j] = ' ';
		}
	}
	

}
void printBoard()
{
	printf("*****LET'S PLAY BATSHIP*****\n");
	printf("   A B C D E F G H I J\n");
	printf("1\n");
	printf("2\n");
	printf("3\n");
	printf("4\n");
	printf("5\n");
	printf("6\n");
	printf("7\n");
	printf("8\n");
	printf("9\n");
	printf("10\n");
	printf("	 Fire AWAY!\n");
}
int checkFreeSpaces()
{
	int freeSpaces = 100;
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
		if (board[i][j] != ' ');
		{
		freeSpaces--;
		}
	}
}
return freeSpaces;
}
void playerMove()
{
	char x;
	int y;
	
	do 
	{
	printf("(enter a spot in the grid like A1) ");
	scanf("%c%d", &x,&y);
	x--;
	y--;
	if(board[x][y] != x,y)
	{
		printf("\nInvalid Move\n");
	} else
		board[x][y] = PLAYER;
		break;
	} while (board[x][y] != ' ');
}
