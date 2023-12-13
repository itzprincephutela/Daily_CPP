//Function overloading(operator overloading is a function)

//depend on types of argument or list of arguments
//not on return type

#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Item{
    string name;
    double price;


    Item(const string& n,double p):name(n),price(p){}  //constant string refrence

};

class shoppingcart{
    private:
    vector<Item> items;
    public:
    void addItem(const Item& item){
        items.push_back(item);
    }
    double calTotalPrice(){
        double total=0.0;
        for(const Item& item: items){
            total+=item.price;
        }
        return total;
    }
    double calTotalPrice(double discountPerc){
        double total=calTotalPrice();
        double discount = total*(discountPerc/100.0);
        return total-discount;
    }
};

int main(){
    Item book("Twisted",400.50);
    Item mobile("OnePlus",40000.50);
    shoppingcart cart;
    cart.addItem(book);
    cart.addItem(mobile);
    double totalWithoutDisc=cart.calTotalPrice();
    double totalWithDisc=cart.calTotalPrice();

    cout<<"Total without discount: "<<totalWithoutDisc<<endl;
    cout<<"Total with discount: "<<totalWithDisc<<endl;

    return 0;


}