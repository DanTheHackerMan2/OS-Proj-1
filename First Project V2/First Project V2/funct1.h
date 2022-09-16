#ifndef FUNCT1_H_  /* Include guard */
#define FUNCT1_H_

typedef struct node {
    long id;
    int yearOG;
    char* lastN;
    char* firstN;
    char* yearOS;
    struct node *next;
    struct node *prev;
} node;
#endif // FUNCT1_H_
