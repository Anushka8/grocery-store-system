#include <iostream>
#include "Product.h"

int main()
{
    Product apple("Apple", 0.99, 50);
    apple.display();
    apple.updateQuantity(20);
    apple.display();

    return 0;
}