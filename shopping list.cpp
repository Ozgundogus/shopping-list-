


                      
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <vector>
using namespace std;
struct groList
{
	int id;
	char name[20];
	double price;
	int quantity;
	char type[20];
};

void loading(void);
void gotoxy(int, int);

int main()
{
	groList groc[1];
	int choice_menu = 0;
	char choice_by;
	char input;

	system("color 3");
	/*loading();*/
	system("cls");
	int numProd = 0;


pass:
	//{
	//    char userChar[100], choice='Y', input, passChar[100];
	//    
	//    for (int i=0; i<100; userChar[i++]=0);
	//    
	//	while(choice=='Y')
	//	{
	//		gotoxy(20, 4);
	//		for (int i=0; i<41; i++)
	//		{
	//			cout<<char(220);
	//		}
	//			gotoxy(20, 5);
	//			cout<<char(220);
	//			gotoxy(20, 6);
	//			cout<<char(220);
	//			gotoxy(20, 7);
	//			cout<<char(220);
	//			gotoxy(20, 8);
	//			cout<<char(220);
	//			gotoxy(20, 9);
	//			cout<<char(220);
	//			gotoxy(20, 10);
	//			cout<<char(220);
	//			gotoxy(20, 11);
	//			cout<<char(220);
	//			gotoxy(20, 12);
	//			cout<<char(220);
	//
	//			gotoxy(60, 5);
	//			cout<<char(220);
	//			gotoxy(60, 6);
	//			cout<<char(220);
	//			gotoxy(60, 7);
	//			cout<<char(220);
	//			gotoxy(60, 8);
	//			cout<<char(220);
	//			gotoxy(60, 9);
	//			cout<<char(220);
	//			gotoxy(60, 10);
	//			cout<<char(220);
	//			gotoxy(60, 11);
	//			cout<<char(220);
	//			gotoxy(60, 12);
	//			cout<<char(220);
	//		
	//			gotoxy(20, 12);
	//		for (int i=0; i<41; i++)
	//		{
	//			cout<<char(220);
	//		}
	//
	//		gotoxy(25, 8);
	//		cout<<"ENTER USERNAME: ";
	//		gotoxy (42, 8);
	//		cin.getline(userChar,100);
	//		system("cls");
	//
	//		gotoxy(20, 4);
	//		for (int i=0; i<41; i++)
	//		{
	//			cout<<char(220);
	//		}
	//			gotoxy(20, 5);
	//			cout<<char(220);
	//			gotoxy(20, 6);
	//			cout<<char(220);
	//			gotoxy(20, 7);
	//			cout<<char(220);
	//			gotoxy(20, 8);
	//			cout<<char(220);
	//			gotoxy(20, 9);
	//			cout<<char(220);
	//			gotoxy(20, 10);
	//			cout<<char(220);
	//			gotoxy(20, 11);
	//			cout<<char(220);
	//			gotoxy(20, 12);
	//			cout<<char(220);
	//
	//			gotoxy(60, 5);
	//			cout<<char(220);
	//			gotoxy(60, 6);
	//			cout<<char(220);
	//			gotoxy(60, 7);
	//			cout<<char(220);
	//			gotoxy(60, 8);
	//			cout<<char(220);
	//			gotoxy(60, 9);
	//			cout<<char(220);
	//			gotoxy(60, 10);
	//			cout<<char(220);
	//			gotoxy(60, 11);
	//			cout<<char(220);
	//			gotoxy(60, 12);
	//			cout<<char(220);
	//		
	//			gotoxy(20, 12);
	//		for (int i=0; i<41; i++)
	//		{
	//			cout<<char(220);
	//		}
	//
	//		gotoxy (25, 8);
	//		cout<<"ENTER PASSWORD: ";
	//		gotoxy (42, 8);
	//		
	//	for (int i=0;;i++)
	//	{
	//	input=_getch();
	//	if ((input!=8)&&(input!=13))
	//	{	
	//		passChar[i]=input;
	//	}
	//
	//	else if (input==8)
	//		i-=2;
	//	else if (input==13)
	//		break;
	//
	//	gotoxy(25, 8);
	//    cout<<"ENTER PASSWORD: ";
	//	gotoxy(42, 8);
	//	for (int j=0; j<i+1; j++)
	//		cout<<char(236);
	//	}
	//		cout<<endl;
	//    if ((!strcmp(userChar,"admin"))&&(!strcmp(passChar, "secret")))
	//    {
	//		gotoxy (24, 20);
	//        cout<<"Access Granted!";
	//		Sleep(500);
	//		goto menu;
	//		
	//	}
	//    else 
	//		gotoxy (24, 19);
	//		cout<<"Acess denied!\n";
	//		gotoxy (24, 20);
	//		cout<<"Do you want to try again? Y/N : ";
	//		cin>>choice;
	//			choice=toupper(choice);
	//			cin.ignore(100,'\n');
	//		for (int i=0; i<100; userChar[i++]=0);
	//			for (int i=0; i<100; passChar[i++]=0);
	//			system("cls");
	//    
	//}
	//		system("cls");
	//	}
	//
	//
	//
	//	system("cls");
	//	gotoxy(17, 2);
	//	cout<<"              __          __   __          __   \n";
	//	gotoxy(17, 3);
	//	cout<<" \\  /  \\  /  |__   |     |    |  | |\\  /| |__ \n";
	//	gotoxy(17, 4);
	//	cout<<"  \\/    \\/   |__   |__   |__  |__| | \\/ | |__ \n";
	//	gotoxy(17, 5);
	//	cout<<"                 ___   __  \n";
	//	gotoxy(17, 6);
	//	cout<<"                  |   |  | \n";
	//	gotoxy(17, 7);
	//	cout<<"                  |   |__| \n\n";
	//	gotoxy(21, 8);
	//	cout<<" ___   __    __   __   __    __         \n";
	//	gotoxy(21, 9);
	//	cout<<"| __  |__|  |  | |    |__   |__|   \\ / \n";
	//	gotoxy(21, 10);
	//	cout<<"|___| |  \\  |__| |__  |__   |  \\    |  \n\n";
	//	gotoxy(23, 11);
	//	cout<<"      __   __   __  __   __   __ \n";
	//	gotoxy(23, 12);
	//	cout<<"|  | |__| |  \\ |__|  |  |__  |__| \n ";
	//	gotoxy(23, 13);
	//	cout<<"|__| |    |__/ |  |  |  |__  |  \\\n";
	//	gotoxy(23, 14);
	//
	//	system ("pause>0");
	//	system ("cls");

menu:
	system("cls");
	gotoxy(28, 8);
	cout << "MENU: \n";
	gotoxy(28, 9);
	cout << "1- ADD RECORD/s";
	gotoxy(28, 10);
	cout << "2- DELETE RECORD/s";
	gotoxy(28, 11);
	cout << "3- VIEW RECORD/s";
	gotoxy(28, 12);
	cout << "4- SEARCH RECORD/s";
	gotoxy(28, 13);
	cout << "5- EXIT";
	gotoxy(28, 14);
	cout << "CHOICE: ";
	gotoxy(36, 14);
	cin >> choice_menu;

	switch (choice_menu)
	{
	case 1:
		system("cls");
		gotoxy(24, 8);
		cout << "NO. OF PRODUCTS TO BE ENTERED: ";
		cin >> numProd;

		for (int i = 0; i < numProd; i++)
		{
			system("cls");
			gotoxy(22, 9);
			cout << "ENTER THE FOLLOWING INFORMATION.";
			gotoxy(22, 10);
			cout << "ID OF THE PRODUCT: ";
			cin >> groc[i].id;
			cin.get();
			gotoxy(22, 11);
			cout << "NAME OF THE PRODUCT: ";
			cin.getline(groc[i].name, 19);
			gotoxy(22, 12);
			cout << "TYPE OF THE PRODUCT: ";
			cin.getline(groc[i].type, 19);
			gotoxy(22, 13);
			cout << "QUANTITY OF THE PRODUCT: ";
			cin >> groc[i].quantity;
			cin.get();
			gotoxy(22, 14);
			cout << "PRICE OF THE PRODUCT: ";
			cin >> groc[i].price;
			cin.get();
		}
		goto menu;
		break;
	case 2:
		goto menu;
		break;
	case 3:
		system("cls");
		cout << setw(4) << "ID"
			<< setw(15) << "NAME"
			<< setw(13) << "TYPE"
			<< setw(14) << "QUANTITY"
			<< setw(15) << "PRICE"
			<< setw(18) << "TOTAL SALES";


		for (int i = 0; i < numProd; i++)
		{
			double totalSales = 0;
			totalSales = totalSales + (groc[i].price * groc[i].quantity);
			double totalSalestwo = 0;
			totalSalestwo = totalSalestwo + totalSales;

			cout << endl;
			cout << setw(4) << groc[i].id
				<< setw(15) << groc[i].name
				<< setw(13) << groc[i].type
				<< setw(14) << groc[i].quantity
				<< setw(15) << groc[i].price
				<< setw(18) << totalSales;

		}

		for (int i = 0; i < numProd; i++)
		{
			double totalSales = 0;
			totalSales = 0;
			double totalSalestwo = 0;
			totalSalestwo = totalSalestwo + (totalSales + (groc[i].price * groc[i].quantity));

			cout << endl;
			cout << setw(80) << totalSalestwo;
		}

		system("pause>0");
		system("cls");
		goto menu;
		break;
	case 4:

		break;
	case 5: system("cls");
		gotoxy(17, 10);
		cout << "THANK YOU FOR UPDATING THE GROCERY LIST!";
		system("pause>0");
		return 0;
		break;
	default: system("cls");
		gotoxy(15, 10);
		cout << "IINVALID INPUT! PLEASE, ENTER 1-5 ONLY. THANK YOU.";
		Sleep(1400);
		goto menu;
		break;
	}
}

void loading(void)
{
	gotoxy(32, 10);
	cout << "L O A D I N G \n";
	for (int i = 0; i < 80; i++)
	{
		cout << (char)221;
		for (long j = 0; j < 16000000; j++)
		{
		}
	}
	cout << endl;
}

void gotoxy(int x, int y)
{

	COORD coord;

	coord.X = x; coord.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}