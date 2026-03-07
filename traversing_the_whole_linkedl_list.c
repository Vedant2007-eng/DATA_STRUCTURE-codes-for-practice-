#include <stdio.h>
struct node {
    int data;
    struct node *next;
};
typedef struct node *NODE;

void traverselist(NODE first){
    NODE temp = first;
    while(temp != NULL){
        printf("%d-->",temp -> data);
        temp = temp -> next;
    }
}
int main(){
    printf("programe exc ss");
    return 0;
}
