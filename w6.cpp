#include <iostream>
#include <string>
using namespace std;
int main()
/*{
	int Round=1,Start=1,X = 1,Sum = 0;
	cout << "Input  round : ";
	cin >> Round;
	cout << "Input start number :";
	cin >> Start;
	while (X <= Round ){
		Sum = Sum+(Start*Start);
		cout << "\t" << Start << "\t" << Start*Start << endl;
		X++;
		Start++;
	}
	cout << "sum = " << Sum << endl;
	return(0);
}*/

/*{
	int line = 0,i = 1;
	//char a = '*';
	cout << "Input line :";
	cin >> i;
	while (i <= line){
		int j=1;
		while (j <= i){
		cout << ("*");
		j++;
		}
	
	i++;
	cout << endl;
	}
	return(0);
	}*/

/*{
	char Ch;
	//int Count = 0;
	int lower = 0;
	int upper = 0;
	int number = 0;
	int special = 0;
	//string Str;
	cout << "Enter String :";
	while(cin >> Ch){
		if(Ch =='.')break;
		else if (Ch >= 'a' && Ch <= 'z')
			lower++;
		else if (Ch >= 'A' && Ch <= 'Z')
			upper++;
		else if (Ch >= '0' && Ch <= '9')
			number++;
		else Ch, special++;
			//Count++;
		//Str += Ch;
	}
	cout << "Your message have " << lower << " lowers character." << endl;
	cout << "Your message have " << upper << " uppers character." << endl;
	cout << "Your message have " << number << " numberic character." << endl;
	cout << "Your message have " << special << " special character." << endl;
	//cout << Count << endl;
	return(0);
}*/

/*{
	string Str;
	cout << "Enter String (10 char):";
	getline(cin,Str) ;
	cout << endl;
	cout << "Your string enter : "  << Str << endl;
	cout << "Length of string = "  << Str.length() << endl;
	if (Str.length() >10  ){//break;
			cout << "Your string is more than 10 characters. " << endl;
	}else
	{ 
		for (int  n  = 0 ; n < Str.length() ; n++) {
			cout << "Position " << n << "=" << Str.at(n) << endl;
		}
	}
	return(0);
}*/

{
	char Choice;
	int R=0,S=0;
	cout << "Program Calculate Area \n";
	cout << " 1. Circle \n";
	cout << " 2. Square \n";
	cout << " 3. Exit\n";
	//if (Choice > 4)break;
	do {
	cout << "Enter your choose number : ";
	cin >> Choice;
	if(Choice == '1')
	{
		cout << "Enter Radis : ";
		cin >> R;
		cout << "Area of Circle is " << 3.14*R*R << endl;
	}
	else if (Choice == '2')
	{
		cout << "Enter Square : ";
		cin >> S;
		cout << "Area of Square is " << S*S << endl;
	}
}while(Choice != '3'); 
}