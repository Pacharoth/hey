#include<stdio.h>
int n;
struct company{
    int id;
    char name[20];
    char address[100];
};
struct Product{
    int id ;
    char name[20];
    struct company s;
};
struct Stock{
    struct Product p;

};
void addItem(struct Stock s[100],int n){
    int i;
    for(i=0;i<n;i++){
    printf("Enter pid:");scanf("%d",&s[i].p.id);
    printf("Enter proname:");scanf("%s",&s[i].p.name);
    //printf("Enter the amount:");scanf("%d",&s[i].quantities);
    printf("Enter companay id: ");scanf("%d",&s[i].p.s.id);
    printf("Enter company's name: ");scanf("%s",&s[i].p.s.name);
    printf("Enter company's address: ");
    scanf("%s",&s[i].p.s.address);
    gets(s[i].p.s.address);}

}
void displayProInfoById(struct Stock s[100],int n){
    int i;
    for(i=0;i<n;i++){
    printf("ID of Product %d name %s\n",s[i].p.id,s[i].p.name);
    }

}

void countProId(struct Stock s[100],int n){
    int i,count=0;
    for(i = 0;i<n;i++){
            if(s[i-1].p.id==s[i].p.id){
            count++;

            }

    }
    for(i = 0;i<n;i++){
        printf("the id of pro %d name %s amount %d\n",s[i].p.id,s[i].p.name,count);

    }
}
void countProCount(struct Stock s[100],int n, int f){
    int i,count=0;
    for(i =0;i<n;i++){
        if(s[i-1].p.id==s[i].p.id){
            count++;
        }
    }
    for(i=0;i<n;i++){
        if(f==s[i].p.id){
            printf("the id of pro %d name %s amount %d\n",s[i].p.id,s[i].p.name,count);
            break;
        }

    }


}
int main(){
    int n,count = 0;
    char p;
    int f;
    struct Stock s[100];

    do{
            printf("Enter your choice a addProduct b displayIDPro c SearchProById d counteachPro: f: exit: ");
            scanf("%c",&p);

    switch(p){
    case 'a':
        printf("Enter array of product:");
        scanf("%d",&n);
        addItem(s,n);
        break;
    case 'b':
        displayProInfoById(s,n);
        break;
    case 'c':
        printf("Search product:");
        scanf("%d",&f);
        countProCount(s,n,f);
        break;
    case 'd':
        countProId(s,n);
        break;
    case 'f':
        printf("Exit the program");
        break;


    }
        n++;
    }while(p!='f');
}
