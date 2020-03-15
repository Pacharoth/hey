#include <stdio.h>
#include<string.h>
enum color{red,yellow,blue,white,black};
struct productInformation{
    int pid;
    char name[20];
    int pDate;
    int exDate;
    enum color colors;
};
enum sellerType{VIP,normal,gold,silver};
typedef struct AddressSeller{
    char houseNumber[20];
    char road[20];
    char city[20];
}address;
struct seller{
    int sid;
    enum sellerType sell;
    address seller;
};
int main(){

}
