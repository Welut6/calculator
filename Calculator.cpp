#include <iostream>
using namespace std;

int main() //функция
{
	double a, b, res; //переменные 
	char op; //операция

	cout << "1 number:";
	cin >> a;

	cout << "operator:";
	cin >> op;

	cout << "2 number:";
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
		res = a / b;
		break;
	}
	cout << "resultat=" << res;
	return 0;
}
