#include <stdio.h>
#include <string.h>
int i;
//Ex1
struct Student{
	int studentID;
	int citizenID;
	char name[20];
	int score;
	char gender;

};
typedef struct Student Student;
//Ex2
void displayAllInformation(Student s[5]);
//Ex3
int studentIDReturn(Student s[5]);
//Ex4
void displayAllInfoScore(Student s[5]);
//Ex5
void lowestScoreStudent(Student s[5]);
int main(){
	Student s[5];
	int max,d;
	for (i=0;i<5;i++){


		printf("Enter your StudentID: ");
		scanf("%d",&s[i].studentID);
		printf("Enter your citizenID :");
		scanf("%d ",&s[i].citizenID);
        printf("Enter your name: ");
        gets(s[i].name);
        printf("Enter your gender: ");
		scanf(" %c",&s[i].gender);
        printf("Enter your score: ");
		scanf(" %d",&s[i].score);




	}
	displayAllInformation(s);

	displayAllInfoScore(s);
	lowestScoreStudent(s);






}
//Ex2
void displayAllInformation(Student s[5]){
    printf("Student's Id\tCitizen ID\tStudent's name\tGender\tScore");
    printf("\n");
	for( i =0;i<5;i++){
       printf("%d\t\t",s[i].studentID);
       printf("%d\t\t",s[i].citizenID);
       printf("%s\t\t",s[i].name);
       printf("%c\t",s[i].gender);
       printf("%d\n",s[i].score);
	}



}
//Ex3
int studentIDReturn(Student s[5]){

    int IDs= s[0].studentID;
//    char name[100] = s[0].name;
    int high =s[0].score;
    int cID = s[0].citizenID;
    for(i=0;i<5;i++){
        if(high<s[i].score){
            IDs= s[i].studentID;

     //name[100] = s[i].name;


        }
    }


    return IDs;



}
void displayAllInfoScore(Student s[5]){
    int max =studentIDReturn(s);
    printf("\n");
    printf("The IDStudent:%d has the highest score\n ",max);
}
void lowestScoreStudent(Student s[5]){
    int low = s[0].score;
    int ID = s[0].studentID;
    for(i=0;i<5;i++){
        if(low>s[i].score){

            ID=s[i].studentID;
        }

    }
    printf("ID student: %d has the lowest score\n ",ID);

}
