#include <iostream>
using namespace std;

int askForNumber()
{

  int E;
  cout << "What number?\n>>> ";
  cin >> E;
  return E;
}

char askForOperation()
{
  char operation;
  cout << "What operation? (+ for addition, - for subtraction, / for division, and * for multiplication)\n>>> ";
  cin >> operation;
  return operation;
}

int calculate(int x, char op, int y)
{
  int result;
  switch (op){
    case '+':
      result = x + y;
      break;
    case '-':
      result = x - y;
      break;
    case '/':
      result = x / y;
      break;
    case '*':
      result = x * y;
      break;
    default:
      throw "Invalid operation";
      break;
  }
  return result;
}

int main()
{

  while (true)
  {
    int x = askForNumber();
    char operation = askForOperation();
    int y = askForNumber();
    int result = calculate(x, operation, y);
    cout << "The result is:\n";
    cout << result;

    cout << "\nWould you like to make another calculation? y/n\n>>> ";

    int repeat;
    cin >> repeat;
    if (repeat == 'n')
    {
      cout << "Goodbye!\n\n";
      return 0;
    }
  }

  return 0;
}
