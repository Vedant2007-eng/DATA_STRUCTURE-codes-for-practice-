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
        printf("Memory allocation failed \n");
        return 0;
    }
    temp -> next = NULL;
    return temp;
}
NODE deleteAtend(NODE first){
    NODE temp,prev;
    if(first -> next = NULL){
        printf("deleated node is %d",temp -> data);
        free(temp);
        return NULL;
    }
    temp = first;
    while(temp -> next != NULL){
        prev = temp;
        temp = temp -> next;
    }
    printf("the deleted node is : %d",temp -> data);
    prev -> next = NULL;
    free(temp);
    return first;
}
int main(){
    printf("Programe exc ss");
    return 0;
}
