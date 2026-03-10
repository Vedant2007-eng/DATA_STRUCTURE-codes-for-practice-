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

NODE insertAtbegining(NODE first, int x){
    NODE temp = createNodeInCLL();
    temp -> data = x;
    NODE last;
    
    if(first == NULL){
        temp -> next = temp;
        first = temp;
    }
    else {
         last = first;
        while(last != first){
            last = last -> next;
        }
    }
    temp -> next = first;
    last -> next = temp;
    first = temp;
    return first;
}

int main(){
    printf("Programe exc ss");
    return 0;
}
