// Datei: stacktest.cpp 
// implementiert ein Testprogramm fuer Stackoperationen
// R. Bonderer, 24.03.2010
#include <iostream>
#include "stack.h"
using namespace std;
using namespace storage;

int main(void)
{
  char ch = 0;
  int i;
  init();  // storage::init()
  do
  {
    cout << "\n\nOperation (Quit, pUsh, pOp, peeK, isEmpty, isFull) ";
    cin >> ch;
    switch(ch)
    {
    case 'Q':   // quit
    case 'q':
        break;
    case 'U':   // push
    case 'u':
      cout << "\nElement to push: ";
      cin >> i;
      push(i);
      if (wasError())
        cout << "\nError: Stack full.";
      break;
    case 'O':   // pop
    case 'o':
      i = pop();
      if (wasError())
        cout << "\nError: Stack is empty (nothing to pop).";
      else
        cout << "\nPopped element " << i;
      break;
    case 'K':   // peek
    case 'k':
      i = peek();
      if (wasError())
        cout << "\nError: Stack is empty (nothing to peek).";
      else
        cout << "\nPeeked element " << i;
      break;
    case 'E':   // isEmpty
    case 'e':
      if (isEmpty())
        cout << "\nStack is empty.";
      else
        cout << "\nStack contains elements.";
      break;
    case 'F':   // isFull
    case 'f':
      if (isFull())
        cout << "\nStack is full.";
      else
        cout << "\nStack has spare capacity.";
      break;
    default:
      cout << "\nInvalid operation.";
      break;
    }
  }  while (ch != 'Q' && ch != 'q');
  return 0;
}
