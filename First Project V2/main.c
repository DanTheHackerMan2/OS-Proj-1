#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funct1.h"


void main()
{
int state=0;
struct node *first=NULL;
struct node *last=NULL;
struct node *temp = NULL;
char* input;
while(state!=5){
  if (state==0){
    printf("\n");
    printf("What would you like to do?\n");
    printf("Type 1 to add an individual\n");
    printf("Type 2 to remove an individual\n");
    printf("Type 3 to print the list from beginning to end\n");
    printf("Type 4 to print the list from end to beginning\n");
    printf("Type 5 to close program\n");
    scanf("%d", &state);  
  }
  if (state==1){// add
  struct node *new = NULL;
  new = malloc(sizeof(struct node));
  if (first==NULL){//Allocates memory to structs//For initial Item
    int len;
    printf("\nPlease input the Last Name:\n");
    scanf("%s",input);
    len = (int) strlen(input);
    new->lastN = (char *) malloc(len); 
    strcpy(new->lastN, input);
    printf("Please input the First Name:\n");
    scanf("%s",input);
    len = (int) strlen(input);
    new->firstN = (char *) malloc(len);
    strcpy(new->firstN, input);
    printf("Please input the year of the Student:\n");
    scanf("%s",input);
    len = (int) strlen(input);
    new->yearOS = (char *) malloc(len);
    strcpy(new->yearOS, input);
    printf("Please input the year of Graduation:\n");
    scanf("%d",&new->yearOG);
    printf("Please input the 9 digit Student id Num:\n");
    scanf("%ld",&new->id);
    new->next=NULL;
    new->prev=NULL;
    first = new;
    last = new;
  }
  else { //Allocates memory to structs// For inital Item
    last->next=new;
    new->prev=last;
    int len;
    printf("Please input the Last Name:\n");
    scanf("%s",input);
    len = (int) strlen(input);
    new->lastN = (char *) malloc(len); 
    strcpy(new->lastN, input);
    printf("Please input the First Name:\n");
    scanf("%s",input);
    len = (int) strlen(input);
    new->firstN = (char *) malloc(len);
    strcpy(new->firstN, input);
    printf("Please input the year of the Student:\n");
    scanf("%s",input);
    len = (int) strlen(input);
    new->yearOS = (char *) malloc(len);
    strcpy(new->yearOS, input);
    printf("Please input the year of Graduation:\n");
    scanf("%d",&new->yearOG);
    printf("Please input the 9 digit Student id Num:\n");
    scanf("%ld",&new->id);
    printf("Last Name: %s\n", new->lastN);
    printf("First Name: %s\n", new->firstN);
    printf("Year of Student: %s\n", new->yearOS);
    printf("Year of Graduation: %u\n", new->yearOG);
    printf("Student ID Number: %ld\n", new->id);
    new->next==NULL;
    last=new;
  }
  state=0;
  }
/*
  if(state==2){//Remove //De allocates Memory
    if(first==NULL){
    state=0;
    printf("\nList is empty :(\n"); 
    }
    if(first!=NULL){
      temp=first;
      int running=0;
      char* enteredS;
      printf("Please enter Last Name of the deleted student: \n");
      scanf("%s", enteredS);
      while (running==0){
        if(enteredS!=temp->lastN){
          if(temp->next!=NULL){
          temp=temp->next;
          }
          else{
            printf("Name was not found");
            running=1;
          }
        }
        else{
          free(temp->lastN);
          free(temp->firstN);
          free(temp->yearOS);
          if(temp==first){
            first=temp->next;
          }
          else{
            temp->next->prev=temp->prev;
            temp->prev->next=temp->next;
          }
          running=1;
        }
      }
    }
    state=0;
  }
*/


  if(state==3){//Prints forward from first to last //Allocates and deallocates memory
    if(first==NULL){//Inital check to see if list isnt empty;
      state=0;
      printf("\nList is empty :(\n");
    }
    if(first!=NULL){
    int num=1;
    int run=0;
    temp = malloc(sizeof(struct node));
    temp=first;
    while(run==0){
      if(temp==last){
        run=2;
      }
      printf("\n%d.\n",num);
      printf("Last Name: %s\n", temp->lastN);
      printf("First Name: %s\n", temp->firstN);
      printf("Year of Student: %s\n", temp->yearOS);
      printf("Year of Graduation: %d\n", temp->yearOG);
      printf("Student ID Number: %ld\n", temp->id); 
    num+=1;
    if(temp!=last){
    temp=temp->next;
    }
    }
  state=0;
  }
  }
  if(state==4){//Prints backwards from last to first //Allocates and deallocates memory
    if(first==NULL){//Inital check to see if list isnt empty;
      state=0;
      printf("\nList is empty :(\n");
    }
    if(first!=NULL){
    int num=1;
    int run=0;
    temp = malloc(sizeof(struct node));
    temp=last;
    while(run==0){
      if(temp==first){
        run=2;
      }
      printf("\n%d.\n",num);
      printf("Last Name: %s\n", temp->lastN);
      printf("First Name: %s\n", temp->firstN);
      printf("Year of Student: %s\n", temp->yearOS);
      printf("Year of Graduation: %d\n", temp->yearOG);
      printf("Student ID Number: %ld\n", temp->id); 
    num+=1;
    if(temp!=first){
    temp=temp->prev;
    }
    }
  state=0;
  }
  }
}
temp = malloc(sizeof(struct node));
int run=0;
int num=1;
while(run==0){
  temp=last;
  if(temp==first){
    run=2;
    }
    free(temp->lastN);
    free(temp->firstN);
    free(temp->yearOS);
    last=temp->prev;
    printf("\nCleared:%d\n",num);
    num+=1;
    }

}




