#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class TIC_TAC_TOE
{
public:

	void Board()
	{
		system("cls");
		cout << endl;
		cout << "  :\t___________________" << endl;
		cout << "   \t|     |     |     |" << endl;
		cout << " TIC\t|  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  |" << endl;
		cout << "   \t|_____|_____|_____|" << endl;
		cout << "   \t|     |     |     |" << endl;
		cout << " TAC\t|  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  |" << endl;
		cout << "   \t|_____|_____|_____|" << endl;
		cout << "   \t|     |     |     |" << endl;
		cout << " TOE\t|  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  |" << endl;
		cout << "  :\t|_____|_____|_____|" << endl;
	}

	void TossP()
	{

		int a;
		srand(time(NULL));
		a = rand() % 2;
		a = a + 1;
		cout << endl << "\tPlayer " << a << " Won The Toss " << endl;
		system("pause");
		PVP(a);
	}
	void TossM()
	{
		int a;
		srand(time(NULL));
		a = rand() % 2;
		a = a + 1;
		if (a == 1)
			cout << endl << "\tPlayer 1 Has Won The Toss" << endl;
		else
			cout << endl << "\tMachine  Has Won The Toss" << endl;
		system("pause");
		PVM(a);
	}
	void PVP(int player)
	{

		int choice, i = 1, a;
		char sign;
		do
		{
			Board();
			player = (player % 2) ? 1 : 2;
			cout << "  Player " << player << " Enter Number From 1-9 : ";
			cin >> choice;
			sign = (player == 1) ? 'X' : 'O';
			if (choice == 1 && board[0][0] == '1')
				board[0][0] = sign;
			else if (choice == 2 && board[0][1] == '2')
				board[0][1] = sign;
			else if (choice == 3 && board[0][2] == '3')
				board[0][2] = sign;
			else if (choice == 4 && board[1][0] == '4')
				board[1][0] = sign;
			else if (choice == 5 && board[1][1] == '5')
				board[1][1] = sign;
			else if (choice == 6 && board[1][2] == '6')
				board[1][2] = sign;
			else if (choice == 7 && board[2][0] == '7')
				board[2][0] = sign;
			else if (choice == 8 && board[2][1] == '8')
				board[2][1] = sign;
			else if (choice == 9 && board[2][2] == '9')
				board[2][2] = sign;
			else
				cout << "Invalid Entry";


			Board();
			i = Win_Con();
			player++;
		} while (i == -1);
		if (player == 2)
			cout << endl << " Congratulations Player 1, YOU WON !!! ";
		else
			cout << " Congratulations Player 2, YOU WON !!! ";

	}
	void PVM(int player)
	{


		int choice, i = 1, a;
		char sign;
		do
		{
			Board();
			player = (player % 2) ? 1 : 2;
			cout << "  Player " << player << " Enter Number From 1-9 : ";
			if (player == 2) {
				srand(time(0));
				choice = rand() % 9;
			}

			else if (player == 1) {
				cin >> choice;
			}
			sign = (player == 1) ? 'X' : 'O';
			if (choice == 1 && board[0][0] == '1')
				board[0][0] = sign;
			else if (choice == 2 && board[0][1] == '2')
				board[0][1] = sign;
			else if (choice == 3 && board[0][2] == '3')
				board[0][2] = sign;
			else if (choice == 4 && board[1][0] == '4')
				board[1][0] = sign;
			else if (choice == 5 && board[1][1] == '5')
				board[1][1] = sign;
			else if (choice == 6 && board[1][2] == '6')
				board[1][2] = sign;
			else if (choice == 7 && board[2][0] == '7')
				board[2][0] = sign;
			else if (choice == 8 && board[2][1] == '8')
				board[2][1] = sign;
			else if (choice == 9 && board[2][2] == '9')
				board[2][2] = sign;
			else
				cout << "Invalid Entry";


			Board();
			i = Win_Con();
			player++;
		} while (i == -1);
		if (player == 2)
			cout << endl << " Congratulations Player 1, YOU WON !!! ";
		else
			cout << " Losser Player 1, MACHINE HAS WON !!! ";
	}
	int Win_Con()
	{
		if (board[0][0] == board[0][1] && board[0][1] == board[0][2])
			return 1;
		else if (board[1][0] == board[1][1] && board[1][1] == board[1][2])
			return 1;
		else if (board[2][0] == board[2][1] && board[2][1] == board[2][2])
			return 1;
		else if (board[0][0] == board[1][0] && board[1][0] == board[2][0])
			return 1;
		else if (board[0][1] == board[1][1] && board[1][1] == board[2][2])
			return 1;
		else if (board[0][2] == board[1][2] && board[1][2] == board[2][2])
			return 1;
		else if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
			return 1;
		else if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
			return 1;
		else if (board[0][0] != '1' && board[0][1] != '2' && board[0][2] != '3' && board[1][0] != '4' &&
			board[1][1] != '5' && board[1][2] != '6' && board[2][0] != '7' && board[2][1] != '8' &&
			board[2][2] != '9')
			return 1;
		else
			return -1;

	}

	void Instructions()
	{
		int i;
		system("cls");
		cout << endl << endl;
		cout << "\t!! Following Instructions Should Be In Mind While Playing The Game !!" << endl << endl;
		cout << "   * Each Player will be given his/her own turn." << endl;
		cout << "   * Player 1 will be alloted 'X' sign and Player 2/Machine will be alloted 'O' sign." << endl;
		cout << "   * Each Player have to fill row, column or diagonal to win." << endl;
		
	}
	void Credits()
	{
		int i;
		system("cls");
		cout << endl << endl;
		cout << "\t !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \t" << endl;
		cout << "\t |            @@@               |" << endl;
		cout << "\t |                              |" << endl;
		cout << "\t |*          PHANTOM           *|" << endl;
		cout << "\t |*Game is Devolped by Abdullah*|" << endl;
		cout << "\t |* FAST-NU-CFD Batch-19 SE(A) *|" << endl;
		cout << "\t |                              |" << endl;
		cout << "\t |            @@@               |" << endl;
		cout << "\t !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \t";
	}
	char board[3][3] = { { '1', '2', '3' },{ '4', '5', '6' },{ '7', '8', '9' } };
};



int main()
{
	TIC_TAC_TOE obj;

	system("cls");
	int opt, i;
	cout << endl << endl;
	cout << "\t  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl << endl;
	cout << "\t | \t Enter 1 to Play Player vs Player    |" << endl;
	cout << endl << "\t |\t Enter 2 to Play Player vs Machine   |" << endl;
	cout << endl << "\t |\t Enter 3 to Show The Instructions    |" << endl;
	cout << endl << "\t |\t Enter 4 to Play The Credits         |" << endl;
	cout << "\t  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
	cout << endl << "   Option Chosed : ";
	cin >> opt;
	switch (opt)
	{
	case 1:
	{
		obj.Board();
		obj.TossP();
		cout << endl;
		cout << endl << endl << "If you want to go back to Main Menu, Press 1 : ";
		cin >> i;
		if (i == 1)
			main();
		break;
	}
	case 2:
	{
		obj.Board();
		obj.TossM();
		cout << endl;
		cout << endl << endl << "If you want to go back to Main Menu, Press 1 : ";
		cin >> i;
		if (i == 1)
			main();
	}   break;
	case 3:
	{
		obj.Instructions();
		cout << endl;
		cout << endl << endl << "If you want to go back to Main Menu, Press 1 : ";
		cin >> i;
		if (i == 1)
			main();
		break;
	}
	case 4:
	{
		obj.Credits();
		cout << endl;
		cout << endl << endl << "If you want to go back to Main Menu, Press 1 : ";
		cin >> i;
		if (i == 1)
			main();
		break;
	}
	default:
		cout << "WRONG ENTRY,TRY AGAIN";
		cout << endl << endl << "If you want to go back to Main Menu, Press 1 : ";
		cin >> i;
		if (i == 1)
			main();

	}

	cout << endl << endl;
	system("pause");
}




