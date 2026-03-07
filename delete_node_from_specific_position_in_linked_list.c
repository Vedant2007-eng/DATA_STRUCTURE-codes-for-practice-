#include <stdio.h>
#include <stdlib.h>

struct node {
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
NODE deleteAtPosition(NODE first, int pos) {
    NODE lastNode, prevPos;
    int i;

    if (first == NULL) {
        printf("No such position in SLL so deletion is not possible\n");
        return first;
    }

    lastNode = first;

    if (pos == 1) {
        first = first->next;
        printf("The deleted element from SLL : %d\n", lastNode->data);
        free(lastNode);
        return first;
    }

    prevPos = NULL;
    for (i = 1; i < pos && lastNode != NULL; i++) {
        prevPos = lastNode;
        lastNode = lastNode->next;
    }

    if (lastNode == NULL) {
        printf("No such position in SLL so deletion is not possible\n");
        return first;
    }

    prevPos->next = lastNode->next;
    printf("The deleted element from SLL : %d\n", lastNode->data);
    free(lastNode);

    return first;
}
