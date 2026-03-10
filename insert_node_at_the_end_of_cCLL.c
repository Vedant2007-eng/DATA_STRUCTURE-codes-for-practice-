#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node *NODE;

NODE createnode(){
    NODE temp;
    temp = (NODE)malloc(sizeof(struct node));
    temp -> next = NULL;
    return temp;
}

NODE insertAtlast(NODE first, int x){
    NODE temp = createnode();
    temp -> data = x;
    NODE last;
    
    if(first == NULL){
        temp -> next = temp;
        first = temp;
    }
    else{
        last = first;
        while(last != first){
            last = last -> next;
        }
    last -> next = temp;
    temp -> next = first;
    }
    return first;
}

int main(){
    printf("Programe exc ss");
    return 0;
}
