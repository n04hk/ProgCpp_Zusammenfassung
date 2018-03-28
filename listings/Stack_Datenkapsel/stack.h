// Datei: stack.h 
// Schnittstellendefinition fuer Stack
// R. Bonderer, 24.03.2010
#ifndef STACK_H_
#define STACK_H_

namespace storage
{
void init();
// initialisiert den Stack, muss als erste Methode aufgerufen werden, bevor Stack benutzt werden kann
  
void push(int e);
// legt ein Element auf den Stack, falls der Stack noch nicht voll ist
// wasError() gibt Auskunft, ob push() erfolgreich war
  
int pop();
// nimmt ein Element vom Stack, falls der Stack nicht leer ist
// wasError() gibt Auskunft, ob pop() erfolgreich war

int peek();
// liest das oberste Element vom Stack, falls der Stack nicht leer ist
// wasError() gibt Auskunft, ob peek() erfolgreich war
  
bool isEmpty();
// return: true:  Stack ist leer
//         false: sonst
  
bool isFull();
// return: true:  Stack ist voll
//         false: sonst
  
bool wasError();
// return: true: Operation war fehlerhaft
//         false: sonst
} // namespace storage

#endif // STACK_H_
