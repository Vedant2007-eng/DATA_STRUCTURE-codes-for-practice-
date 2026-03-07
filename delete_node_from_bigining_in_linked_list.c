#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node *NODE;

NODE createNode(){
    NODE temp;
    temp = (NODE)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("ddwfwesd");
        exit(0);
    }
    temp -> next =NULL;
    return temp;
}

NODE deleteAtbegin(NODE first){
    NODE temp;
    if(first == NULL){
        printf("SLL is not present");
        return NULL;
    }
    temp = first;
    printf("The deleated node is : %d", temp -> data);
    first = temp -> next;
    free(temp);
    return first;
}
int main(){
    printf("Programe exc ss");
    return 0;
}
