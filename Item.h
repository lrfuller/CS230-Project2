//Item.h
#ifndef Item_h
#define Item_h
#include <stdio.h>
#include <iostream>
using namespace std;
class item{
private:
    string name;
    double price;
    string upc;
public:
    item();
    item(string,double,string);
    string getname();
    double getprice();
    void setname(string);
    void setprice(double);
    string getupc();
    void setupc(string);
};
item::item(){
    name = "";
    price = 0;
    upc = "";
}
item::item(string nameh,double pricei,string upc2){
    name = nameh;
    price = pricei;
    upc  = upc2;
}
string item::getname(){
    return name;
}
double item::getprice(){
    return price;
}
void item::setname(string name2){
    name = name2;
}
void item::setprice(double price2){
    price = price2;
}
void item::setupc(string upc2){
    upc = upc2;
}

string item::getupc(){
    return upc;
}
#endif //Item.h
