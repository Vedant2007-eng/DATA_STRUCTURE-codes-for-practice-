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
    return temp;
}
int main(){
    printf("programe exc ss");
    return 0;
}
