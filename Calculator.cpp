#include <iostream>
using namespace std;

int main()
{
    double a, b, res;
    string op; // изменили на string для поддержки "**"

    while (true)
    {
        cout << "1 number: ";
        cin >> a;

        cout << "operator (only: +, -, *, /, **): ";
        cin >> op;

        cout << "2 number: ";
        cin >> b;

        // Заменяем switch на if-else из-за строкового оператора "**"
        if (op == "+") {
            res = a + b;
        }
        else if (op == "-") {
            res = a - b;
        }
        else if (op == "*") {
            res = a * b;
        }
        else if (op == "/") {
            if (b == 0) {
                cout << "You can't divide by zero.";
                return 1;
            }
            res = a / b;
        }
        else if (op == "**") {
            // логика возведения в степень (только для целых положительных степеней)
            if (b < 0) {
                cout << "Error: negative exponent not supported in this implementation";
                return 1;
            }

            double a1 = a;
            int int_b = (int)b; // преобразуем к целому

            // Проверяем, является ли степень целым числом
            if (b != int_b) {
                cout << "Warning: fractional part of exponent will be ignored\n";
            }

            if (int_b == 0) {
                res = 1; // любое число в степени 0 = 1
            }
            else {
                for (int i = 1; i < int_b; i++) {
                    a1 = a1 * a;
                }
                res = a1;
            }
        }
        else {
            cout << "Unknown operation!";
            return 1;
        }

        cout << "Result:\n" << a << " " << op << " " << b << " = " << res << "\n";

        char q;
        cout << "\nYou want to repeat? (Y/N)\n";
        cin >> q;
        if (q == 'N' or q == 'n'); {
            break;
        }
    }

    cout << "Goodbye!!!";
    return 0;
}