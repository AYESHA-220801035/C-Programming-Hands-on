#include <iostream>
#include <vector>
using namespace std;
class Order
{
private:
    vector<pair<int, int>> items; 
public:
    void addLineItem(int id, int qty)
    {
        items.push_back({id, qty});
    }
    int totalItems()
    {
        int total = 0;
        for(auto item : items)
        {
            total += item.second;
        }
        return total;
    }
    void printSummary()
    {
        cout << "Order Summary:\n";
        for(auto item : items)
        {
            cout << "Item ID: " << item.first 
                 << " Quantity: " << item.second << endl;
        }
        cout << "Total Items = " << totalItems() << endl;
    }
};
int main()
{
    Order order1;  
    order1.addLineItem(101, 2);
    order1.addLineItem(205, 5);
    order1.addLineItem(330, 3);
    order1.printSummary();
    return 0;
}