// TicTacToe.cpp

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool game = true;
	int select;
	char answer;
	bool good = false;

	int p1score = 0;
	int p2score = 0;

	int one = 0;
	int two = 0;
	int thr = 0;
	int fur = 0;
	int fiv = 0;
	int six = 0;
	int svn = 0;
	int egt = 0;
	int nin = 0;

	cout << "___|___|___";
	cout << endl;
	cout << "___|___|___";
	cout << endl;
	cout << "   |   |   ";
	cout << endl;
	cout << endl;
	cout << "Player 1 Make Your Selection:";
	cout << endl;
	cout << endl;
	cout << "_1_|_2_|_3_";
	cout << endl;
	cout << "_4_|_5_|_6_";
	cout << endl;
	cout << " 7 | 8 | 9 ";
	cout << endl;
	cout << endl;

	while(game == true)
	{
		for (int i = 0; i < 9; i++)
		{
			if (i % 2 == 0) // even
			{
				cout << "Player 1, Make Your Selection: ";
				cout << endl;
			}
			else //odd
			{
				cout << "Player 2, Make Your Selection:";
				cout << endl;
			}

			while (good == false)
			{
				cin >> select;
				cout << endl;

				//check select
				if ((select > 0) && (select < 10))
				{
					switch (select)
					{
						case 1:
						{
							if (one < 1)
							{
								if (i % 2 == 0)
									one = 1;
								else
									one = 2;

								good = true;
								break;
							}
								
						}
						case 2:
						{
							if (two < 1)
							{
								if (i % 2 == 0)
									two = 1;
								else
									two = 2;

								good = true;
								break;
							}
						}
						case 3:
						{
							if (thr < 1)
							{
								if (i % 2 == 0)
									thr = 1;
								else
									thr = 2;

								good = true;
								break;
							}
						}
						case 4:
						{
							if (fur < 1)
							{
								if (i % 2 == 0)
									fur = 1;
								else
									fur = 2;

								good = true;
								break;
							}
						}
						case 5:
						{
							if (fiv < 1)
							{
								if (i % 2 == 0)
									fiv = 1;
								else
									fiv = 2;

								good = true;
								break;
							}
						}
						case 6:
						{
							if (six < 1)
							{
								if (i % 2 == 0)
									six = 1;
								else
									six = 2;

								good = true;
								break;
							}
						}
						case 7:
						{
							if (svn < 1)
							{
								if (i % 2 == 0)
									svn = 1;
								else
									svn = 2;

								good = true;
								break;
							}
						}
						case 8:
						{
							if (egt < 1)
							{
								if (i % 2 == 0)
									egt = 1;
								else
									egt = 2;

								good = true;
								break;
							}
						}
						case 9:
						{
							if (nin < 1)
							{
								if (i % 2 == 0)
									nin = 1;
								else
									nin = 2;

								good = true;
								break;
							}
						}
					}
				}
				
				if(good == false)
				{
					cout << "Make Your Selection:";
					cout << endl;
				}
			}
			good = false;
			//print board
			cout << "_";
			if (one == 0)
				cout << "__|_";
			else if (one == 1)
				cout << "X_|_";
			else
				cout << "O_|_";

			if (two == 0)
				cout << "__|_";
			else if (two == 1)
				cout << "X_|_";
			else
				cout << "O_|_";

			if (thr == 0)
				cout << "__";
			else if (thr == 1)
				cout << "X_";
			else
				cout << "O_";
			cout << endl;
			cout << "_";
			if (fur == 0)
				cout << "__|_";
			else if (fur == 1)
				cout << "X_|_";
			else
				cout << "O_|_";

			if (fiv == 0)
				cout << "__|_";
			else if (fiv == 1)
				cout << "X_|_";
			else
				cout << "O_|_";

			if (six == 0)
				cout << "__";
			else if (six == 1)
				cout << "X_";
			else
				cout << "O_";
			cout << endl;
			cout << " ";
			if (svn == 0)
				cout << "  | ";
			else if (svn == 1)
				cout << "X | ";
			else
				cout << "O | ";

			if (egt == 0)
				cout << "  | ";
			else if (egt == 1)
				cout << "X | ";
			else
				cout << "O | ";

			if (nin == 0)
				cout << "  ";
			else if (nin == 1)
				cout << "X ";
			else
				cout << "O ";
			cout << endl;

			//check if win
			if (((one == 1) && (two == 1) && (thr == 1)) ||
				((fur == 1) && (fiv == 1) && (six == 1)) ||
				((svn == 1) && (egt == 1) && (nin == 1)) ||
				((one == 1) && (fur == 1) && (svn == 1)) ||
				((two == 1) && (fiv == 1) && (egt == 1)) ||
				((thr == 1) && (six == 1) && (nin == 1)) ||
				((one == 1) && (fiv == 1) && (nin == 1)) ||
				((thr == 1) && (fiv == 1) && (svn == 1))
				)
			{
				p1score = p1score + 1;
				break;
			}

			if (((one == 2) && (two == 2) && (thr == 2)) ||
				((fur == 2) && (fiv == 2) && (six == 2)) ||
				((svn == 2) && (egt == 2) && (nin == 2)) ||
				((one == 2) && (fur == 2) && (svn == 2)) ||
				((two == 2) && (fiv == 2) && (egt == 2)) ||
				((thr == 2) && (six == 2) && (nin == 2)) ||
				((one == 2) && (fiv == 2) && (nin == 2)) ||
				((thr == 2) && (fiv == 2) && (svn == 2))
				)
			{
				p2score = p2score + 1;
				break;
			}

			//change score
		}
		cout << "Score: P1 - ";
		cout << p1score;
		cout << " P2 - ";
		cout << p2score;
		cout << endl;
		cout << endl;
		cout << "Play Again? ";
		cin >> answer;
		
		if ((answer == 'N') || (answer == 'n'))
		{
			game = false;
		}
		else
		{
			one = 0;
			two = 0;
			thr = 0;
			fur = 0;
			fiv = 0;
			six = 0;
			svn = 0;
			egt = 0;
			nin = 0;

			cout << endl;
		}
	}
    return 0;
}

