#include <iostream>

using namespace std;

int main()
{
    int s = 0, t = 0, u = 0, a = 7, b = 18, c = 20, d = 7;
	cout << "        ///  SCHOOL SUPPLY SHOP  ///  \n\n";
	cout << " \t1. Ballpen = " << a << " peso each\n" << " \t2. Padpaper = " << b << " peso each\n" << " \t3. Notebook = " << c << " peso each\n" << " \t4. Pencil = " << d << " peso each\n";
	cout << "\n What item would you like to buy?";
	cin >> s;
    cout << "\n How many item would you like to buy for this?";
	cin >> t;

	if (s == 1)
 	{
		cout << "\n Total Amount: " << a*t << " Peso";
	}
 	else if (s == 2)
 	{
	  	cout << "\n Total Amount: " << b*t << " Peso";
	}
	else if (s == 3)
	{
	  	cout << "\n Total Amount: " << c*t << " Peso";
	}
	else if (s == 4)
	{
	  	cout << "\n Total Amount: " << d*t << " Peso";
	}
	cout << "\n\n How much is your money worth?";
	cin >> u;
	if (s == 1)
 	{
		cout << "\n Your Exchange Money: " << u-(a*t) << " Peso";
	}
 	else if (s == 2)
 	{
	  	cout << "\n Your Exchange Money: " << u-(b*t) << " Peso";
	}
	else if (s == 3)
	{
	  	cout << "\n Your Exchange Money: " << u-(c*t) << " Peso";
	}
	else if (s == 4)
	{
	  	cout << "\n Your Exchange Money: " << u-(d*t) << " Peso";
	}
    cout << "\n\n                 Thank you for buying school supplies.";
    cout << "\n               We hoped that all the best were offered.";
	return 0;
}
