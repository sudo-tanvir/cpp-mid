//A class named shop has product, price, number of item, as a data member, A mamber function name calculate will calculate  the total price of an itenbmake a constructor a non member function display will all the display information a product.


#include <iostream>
#include <string>

using namespace std;

class Shop
{
public:
    string product;
    double price;
    int num_items;

    // Constructor
    Shop(string p, double pr, int n)
    {
        product = p;
        price = pr;
        num_items = n;
    }

    // Member function to calculate total price
    double calculate()
    {
        double total;
        total = price * num_items;
        return total;
    }

    // Non-member function to display product information
    void display(Shop s);
};

// Non-member function to display product information
void display(Shop s)
{
    cout << "Product: " << s.product << endl;
    cout << "Price: $" << s.price << endl;
    cout << "Number of items: " << s.num_items << endl;
    cout << "Total Price: $" << s.calculate() << endl;
}

int main()
{
    Shop product1("Widget", 10.0, 5);
    display(product1);

    return 0;
}
