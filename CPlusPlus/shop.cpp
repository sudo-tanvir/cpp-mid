//A class named shop has product, price, number of item, as a data member, A mamber function name calculate will calculate  the total price of an itenbmake a constructor a non member function display will all the display information a product.

#include <iostream>
using namespace std;

class Shop
{
public:
    string product;
    float price;
    int numItems;

    // Constructor
    Shop(string p, float pr, int n)
    {
        product = p ;
        price = pr;
        numItems = n;
    }

    // Member function
    float calculate();
};

// Non-member function to display product information
void displayProduct(Shop item)
{
    cout << "Product: " << item.product << endl;
    cout << "Price per item: $" << item.price << endl;
    cout << "Number of items: " << item.numItems << endl;
    cout << "Total price: $" << item.calculate() << endl;
}
int main()
{
    Shop item("book", 80.99, 9);
    displayProduct(item);

    return 0;
}
float Shop::calculate()
{
    return price * numItems;
}
