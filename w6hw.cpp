#include <iostream>
#include <string>
using namespace std;
int main()
{
 char Menu,Q;
 string usr1,pass1,usr2,pass2;
 do { cout << "//////////////////////Menu/////////////////////\n";
 cout << " 1.Register " << endl;
 cout << " 2.Login " << endl;
 cout << " Q.Exit Program " << endl;
 cout << "Enter Menu :";
 cin >> Menu;
 if (Menu == '1'){
	 cout << "********Register**********\n";
	 cout << "Input Username : ";
	 cin >> usr1;
	 cout << "Input Password :";
	 cin >> pass1;
 }
 else if (Menu == '2'){
			cout << "*********Login*************\n";
			int R = 0;
			do {  
			cout << "Input Username : ";
			cin >> usr2;
			cout << "Input Password :";
			cin >> pass2;
			if (usr1 == usr2 && pass1 == pass2){
				 cout << "Username or Password correct ^__^ " ;
				 R--;
				}
		    else {cout << "!!!!Username or Password incorrect Please try again!!!! "; R++;
				}
			cout << endl;
			}while ( R == 1 );
			cout << endl;
 }
 
 }while (Menu != 'Q');{cout << "Exit Program..." << endl;}
 return(0);
}
