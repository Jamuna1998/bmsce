#include<bits/stdc++.h>
using namespace std;
#define UNASSIGNED 0
#define N 9
#define SQN 2

bool Findunassignedlocation(int grid[N][N],int &row,int &col);
bool isSafe(int grd[N][N],int row,int col,int num);
bool UsedinRow(int grid[N][N],int row,int num);
bool Usedincol(int grid[N][N],int col,int num);
bool Usedinbox(int grid[N][N],int boxstartrow,int boxstartcol,int num);

bool SolveSudoku(int grid[N][N])
{
	int row,col;
	if(!Findunassignedlocation(grid,row,col))
		return true;
	for(int num=1;num<=N;num++)
	{
	 if(isSafe(grid,row,col,num))
	 {
		grid[row][col]=num;
		if(SolveSudoku(grid))
		 return true;
		grid[row][col]=UNASSIGNED;
	 }
	}
	return false;
}
bool Findunassignedlocation(int grid[N][N],int &row,int &col)
{
	for(row=0;row<N;row++)
	{	 
		for(col=0;col<N;col++)
	  	{	
			if(grid[row][col]==UNASSIGNED)
				return true;
		}
	}
	return false;
}

bool isSafe(int grid[N][N],int row,int col,int num)
{
	return !UsedinRow(grid,row,num) && !Usedincol(grid,col,num) && !Usedinbox(grid,row-row%SQN,col-col%SQN,num) && grid[row][col]==UNASSIGNED;
}

bool UsedinRow(int grid[N][N],int row,int num)
{
	for(int col=0;col<N;col++)
		{
			if(grid[row][col]==num)
				return true;
		}
	return false;
}

bool Usedincol(int grid[N][N],int col,int num)
{
	for(int row=0;row<N;row++)
		{
			if(grid[row][col]==num)
				return true;
		}
	return false;
}

bool Usedinbox(int grid[N][N],int boxstartrow,int boxstartcol,int num)
{
	for(int row=0;row<SQN;row++)
	{
		for(int col;col<SQN;col++)
		{
			if(grid[row+boxstartrow][col+boxstartcol]==num)
			return false;
		}
	}
	return false;
}
void printGrid(int grid[N][N])
{
	for(int row=0;row<N;row++)
	{
		for(int col=0;col<N;col++)
		cout<<grid[row][col]<<" ";
	cout<<endl;
	}
}

int main()
{
	int grid[N][N]={{0,0,0,2,6,0,7,0,1},{6,8,0,0,7,0,0,9,0},{1,9,0,0,0,4,5,0,0},{8,2,0,1,0,0,0,4,0},
			{0,0,4,6,0,2,9,0,0},{0,5,0,0,0,3,0,2,8},{0,0,9,3,0,0,0,7,4},{0,4,0,0,5,0,0,3,6},{7,0,3,0,1,8,0,0,0}};
	if(SolveSudoku(grid)==true)
		printGrid(grid);
	else
		cout<<"no solution";
	return 0;
}
