#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct Company{
    char name[20];
    int id;
    char address[100];
    char tel[20];
};
//typedef oldName newName
typedef struct Company Company;

struct Product{
    char name[20];
    int id;
    Company com;
};
typedef struct Product Product;

struct Stock{
    int pid;
    int amountProduct;
};
typedef struct Stock Stock;


Product listProduct[100];
Stock stocks[100];
int n=0;
int m=0;


bool checkExist(int id){
    for(int i=0; i<100; i++){
        if(listProduct[i].id == id){
            return true;
        }
    }
    return false;
}

void addProduct(){
    Product p;
    printf("Enter a product ID: "); scanf("%d", &p.id);
    printf("Enter a product name: "); scanf("%s", &p.name);



    if(!checkExist(p.id)){ //product not exist
        printf("\tHi! not exist!\n");
        listProduct[n].id = p.id;
        strcpy(listProduct[n].name, p.name); //error,

        //add to stock
        stocks[m].pid = p.id;
        stocks[m].amountProduct = 1;

        m++;
        n++;

    }else{ //product exist
        printf("\texist!\n");
        for(int i=0; i<100; i++){
            if(stocks[i].pid == p.id){
                stocks[i].amountProduct++;
                break;
            }
        }
    }

}


void displayProductByID(int id){
    int status=0;
    int kkk=0;
    for(int i=0; i<100; i++){
        if(listProduct[i].id == id){
            status=1;
            kkk=i;
            break;
        }
    }

    if(status==1){
        printf("\n\t%d %s\n\n", listProduct[kkk].id, listProduct[kkk].name);
    }else{
        printf("\n\tProduct with id=%d not found!!\n", id);
    }
}

void initializerProductListANDStock(){
    for(int i=0; i<100; i++){
        listProduct[i].id = 0;
        strcpy(listProduct[i].name, "");

        stocks[i].pid = -1;
        stocks[i].amountProduct = -1;
    }
}

//void initializerProductList(){
//    for(int i=0; i<100; i++){
//        listProduct[i].id = 0;
//        strcpy(listProduct[i].name, "");
//    }
//}
//void initializerStock(){
//    for(int i=0; i<100; i++){
//        stocks[i].pid = -1;
//        stocks[i].amountProduct = -1;
//
//    }
//}

void countProductByID(int id){
    if(checkExist(id)){
        for(int i=0; i<100; i++){
            if(stocks[i].pid == id){
                printf("\n\t*** #product of productID: %d =%d\n", id, stocks[i].amountProduct);
            }
        }
    }else{
        printf("\t**No product!\n");
    }
}

void countEachProduct(){

   if(n==0 || m==0) {
        printf("\n\t NO PRODUCT HAD BEEN ADDED YET!!\n");
   }else{
       for(int i=0; i<100; i++){
            for(int j=0; j<100; j++){
                if(listProduct[j].id ==stocks[i].pid){
                    printf("\n\t*** %d %s %d\n", listProduct[j].id, listProduct[j].name, stocks[i].amountProduct);
                }
            }
        }
   }
}

int main(){
    int choice;
//    initializerProductList();
//    initializerStock();
    initializerProductListANDStock();

    while(1){
        printf("**** Menu ****\n");
        printf("*****************\n");
        printf("1 -Add a product to the stock.\n");
        printf("2 -Display product information by id.\n");
        printf("3 -Count and display total number of a product by product id\n");
        printf("4 -Count and display total number of each product in the stock.\n");

        printf("\n\tYour choice: ");
        scanf("%d",&choice);
        if(choice==1){
            printf("\n\t**will add product to stock\n\n");
            addProduct();
        }else if(choice==2){
            printf("\n\t**Displaying product ...\n\n");
            int id;
            printf("Enter a product ID: "); scanf("%d", &id);
            displayProductByID(id);
        }else if(choice==3){
            printf("\n\t** Counting and displaying number of products by its id \n\n");
            int id;
            printf("Enter a product ID: "); scanf("%d", &id);
            countProductByID(id);

        }else if(choice==4){
            printf("\n\t**Counting and displaying number of each product\n\n");
            countEachProduct();
        }
    }
}
