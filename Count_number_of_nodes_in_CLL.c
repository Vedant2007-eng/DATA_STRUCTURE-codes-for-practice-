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

int countCLL(NODE first){
    int cnt = 0;
    
    if(first == NULL){
        printf("List is empty");
        return 0;
    }
    NODE temp = first;
    do{
        cnt++;
        temp = temp -> next;
    }while(temp != first);
    
    return cnt;
}

int main(){
    printf("Programe exc ss");
    return 0;
}
