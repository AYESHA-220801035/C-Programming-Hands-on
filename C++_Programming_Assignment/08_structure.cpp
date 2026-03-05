#include <iostream>
using namespace std;
struct Customer
{
    int customerId;
    string name;
};
struct Order
{
    int orderId;
    string product;
    Customer cust;
};
int main()
{
    Order o;
    cout << "Enter Customer ID: ";
    cin >> o.cust.customerId;
    cout << "Enter Customer Name: ";
    cin >> o.cust.name;
    cout << "Enter Order ID: ";
    cin >> o.orderId;
    cout << "Enter Product Name: ";
    cin >> o.product;
    cout << "\n--- Order Details ---" << endl;
    cout << "Customer ID: " << o.cust.customerId << endl;
    cout << "Customer Name: " << o.cust.name << endl;
    cout << "Order ID: " << o.orderId << endl;
    cout << "Product: " << o.product << endl;
    return 0;
}