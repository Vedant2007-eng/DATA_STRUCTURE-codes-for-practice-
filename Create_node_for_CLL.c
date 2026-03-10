#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node *NODE;

NODE createNodeInCLL(){
    NODE temp;
    temp = (NODE)malloc(sizeof(struct node));
    temp -> next = NULL;
    return temp;
}
int main(){
    printf("Programe exc ss");
    return 0;
}
