#include <iostream>
using namespace std;
system('cls');
int main() 
{
    int inven[5] = {9, 5, 15, 60, 8};
    int* awa = inven;
    cout << "Inventory before update:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Product " << i << " = " << *(awa + i) << endl;
    }
    int id, change;
    cout << "Enter product ID from 0 to 4: ";
    cin >> id;
    if (id < 0 || id > 4) 
    {
        cout << "Invalid ID";
    }
    cout << "Enter quantity to add or remove: ";
    cin >> change;
    int& Stock = inven[id];
    if (Stock + change < 0) {
        cout << "Not enough stock"<<endl;
    }
    Stock = Stock + change;
    cout << "Inventory after update:"
    for (int i = 0; i < 5; i++) {
        cout << "Product " << i << " = " << *(awa + i) << endl;
    }
    return 0;
}