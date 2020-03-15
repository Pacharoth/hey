#include <stdio.h>
#include <string.h>
struct address{
	int houseNo;
	char road[100];
	char city[100];
	char country[100];
};
struct Customer{
	int id;
	char name[100];
	char gender[100];
	struct address address;
};
int i;
typedef struct Customer customer;
customer customer[5];
void customerId(customer customer[5]){
	n = customer[0].id;
	for(i =0;i<5;i++){
		if(n==customer[i].id){
			printf("Customer %d of id: %d",i+1,n);
		}
	}
}
void customerAll(customer customer[5]){
	for(i=0;i<5;i++){
		printf("id is %d",)
	}
}

int main(){
	for(i=0;i<5;i++){
	printf("Enter id:");scanf("%d",&customer[i].id);
	printf("Enter name:");scanf(" %s",&customer[i].name);
	printf("Enter gender:");scanf(" %c",&customer[i].gender);
	printf("Enter houseno:");scanf("%d",&customer[i].address.houseNo);
	printf("Enter road");scanf(" %s",&customer[i].address.road);
	printf("Enter city");scanf(" %s",&customer[i].address.city);
	printf("Enter country");scanf(" %s",&customer[i].address.country);
}
customerId(n)
}