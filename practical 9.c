/*EXP:9
    TITEL: Design a structure student record to content
    name,Roll_number, and total marks obtained.
 WAP to read 5 students data from the user and then
 display the topper on the screen.
 NAME:ANISH THAKUR
 UIN:241P104
 ROLL NO:35
 CLASS/DIV: FE-2024 COMP ENG(02)-D */



#include<stdio.h> //header file

 //structure
 struct StudentRecord{

 char name[25];
 int roll_no;
 int totalMarks;

 };

 int main(){ //main function

 int topper=0,index=0;

 struct StudentRecord stud[5];

 printf("\t\t\t***The Find The Topper***\n");

 //reading data
 for(int i=0; i<5; i++){

 printf("\nEnter Data for student:%d\n", i+1);

 printf("Enter Name:");

 gets(stud[i].name);

 printf("\nEnter Roll No:");

 scanf("%d",&stud[i].roll_no);

 printf("\nEnter Total Marks:");

 scanf("%d",&stud[i].totalMarks);

 //finding the topper
 if(stud[i].totalMarks>topper){

 topper=stud[i].totalMarks;

 index=i;
 }

 getchar();
 }

 //printing topper details
 printf("\n\nTo Details of Topper are:\n\n");

 printf("Name : %s",stud[index].name);

 printf("\nRoll No : %d",stud[index].roll_no);

 printf("\nMarks : %d",stud[index].totalMarks);


 return 0;

70 } // end of main

/*OUTPUT
         ***The Find The Topper***

Enter Data for student:1
Enter Name:Anish thakur

Enter Roll No:35

Enter Total Marks:99

Enter Data for student:2
Enter Name:aryan

Enter Roll No:45

Enter Total Marks:80

Enter Data for student:3
Enter Name:kundan

Enter Roll No:70

Enter Total Marks:90

Enter Data for student:4
Enter Name:sushil

Enter Roll No:45

Enter Total Marks:78

Enter Data for student:5
Enter Name: kalpesh

Enter Roll No:2

Enter Total Marks:89


To Details of Topper are:

Name : Anish thakur
Roll No : 35
Marks : 99  */

