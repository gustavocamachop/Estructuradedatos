// EjemploHerencia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Rectangulo.h"
#include "conio.h"

using namespace std;

int main(void) {
   Rectangulo Rect;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   // Muestra el área de un rectangulo
   cout << "Total area: " << Rect.getArea() << endl;
   getch();
   return 0;
}