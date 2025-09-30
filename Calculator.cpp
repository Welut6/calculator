#include <iostream>
using namespace std;

int main() //функция
{
	double a, b, res; //переменные 
	char op; //операция
	
	while (true)
	{
		cout << "1 number: ";
		cin >> a;

		cout << "operator (only: + - * /): ";
		cin >> op;

		cout << "2 number: ";
		cin >> b;

		switch (op) { //switch – выбор действия в зависимости от значения op

		case '+':
			res = a + b;
			break;
		case '-':
			res = a - b;
			break;
		case '*':
			res = a * b;
			break;
		case '/':
			if (b == 0) {
				cout << "You can't divide by zero.";
				return 1;
			}
			else {
				res = a / b;
			}
			break;
		default:
			cout << "Unknown operation!";
			return 1;
		}
		cout << "resultat:\n" << a << " " << op << " " << b << " = " << res;

		bool q;
		cout << "\nif you want to repeat, press: 1, if not: 0\n";
		cin >> q;
		if (q == 0) {
			return 0;
		}
		else {
			
		}
	}
}
