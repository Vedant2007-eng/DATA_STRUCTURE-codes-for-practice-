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
NODE insertAtPositionInCLL(NODE first, int pos, int x) {
	NODE temp = createNodeInCLL();
    temp->data = x;

    if (pos == 1) {
        if (first == NULL) {
            temp->next = temp;
            return temp;
        } else {
            NODE last = first;
            while (last->next != first) {
                last = last->next;
            }
            temp->next = first;
            last->next = temp;
            first = temp;
            return first;
        }
    }

    NODE cur = first;
    int i = 1;

    while (i < pos - 1 && cur->next != first) {
        cur = cur->next;
        i++;
    }

    if (i != pos - 1) {
        printf("No such position in CLL so insertion is not possible\n");
        free(temp);
        return first;
    }

    temp->next = cur->next;
    cur->next = temp;

    return first;
}
