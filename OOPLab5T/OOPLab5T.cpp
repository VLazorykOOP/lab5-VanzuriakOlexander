// OOPLab5T.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include "Lab5Exmaple.h"
using namespace std;
// Ваші файли загловки 
//

void ShowTaskMenu() {
  cout << "Exersices" << endl;
  cout << "1. Task 1" << endl;
  cout << "2. Task 2" << endl;
  cout << "3. Task 3" << endl;
}

int main()
{
    bool isSelected = false;
  while (!isSelected) {
    system("cls");
    ShowTaskMenu();
    int ch;
    cin >> ch;
    switch (ch) {
    case 1:
      exersice1();
      isSelected = true;
      break;
    case 2:
      exersice2();
      isSelected = true;
      break;
    case 3:
      exersice3();
      isSelected = true;
    default:
      break;
    }
  }
    

}
