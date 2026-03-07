#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node *NODE;

int count(NODE first){
    int cnt = 0;
    NODE temp = first;
    while(temp != NULL){
        cnt++;
        temp = temp -> next;
    }
    return cnt;
}
int main(){
    printf("Programe eec");
    return 0;
}
