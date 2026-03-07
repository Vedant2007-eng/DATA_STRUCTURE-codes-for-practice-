#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node *NODE;

NODE createNode(){
    NODE temp;
    temp = (NODE)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("Memory allocation failed\n");
        exit(0);
    }
    temp -> next = NULL;
    return 0;
}

NODE insertAtBegin(NODE first, int x){
    NODE temp;
    temp = createNode();
    temp -> data = x;
    temp -> next = first;
    first = temp;
    return first;
}

int main(){
    printf("Programe exc ss");
    return 0;
}
