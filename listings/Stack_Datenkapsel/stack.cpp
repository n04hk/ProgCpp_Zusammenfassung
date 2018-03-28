// Datei: stack.cpp 
// implementiert Stackoperationen
// R. Bonderer, 24.03.2016

#include "stack.h"
namespace // nameless namespace fuer file-lokale Daten
{
enum {maxElems = 10};    // Anzahl Stackelemente
int elem[maxElems];      // Array fuer Speicherung des Stacks
int top;                 // Arrayindex des naechsten freien Elements
bool error;              // true: Fehler passiert; false: sonst
}

namespace storage
{
void init()
{
  top = 0;
  error = false;
}

void push(int e)
{
  error = isFull();
  if (!error)
  {
    elem[top] = e;
    ++top;
  }
}

int pop()
{
  error = isEmpty();
  if (!error)
  {
    --top;
  }
  return elem[top];  // ist auch ok im Fehlerfall
}

int peek()
{
  error = isEmpty();
  if (!error)
    return elem[top-1];
  else
    return elem[top];  // elem[top] ist immer ein gueltiges Element
}

bool isEmpty()
{
  return top == 0;
}

bool isFull()
{
  return top == maxElems;
}

bool wasError()
{
  return error;
}
} // namespace storage
