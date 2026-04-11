#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};


void add_element(struct node *head, int value){
    struct node *ptr=head;
    while(ptr -> next != NULL){
        ptr = ptr -> next;
    }
    struct node *new_node = malloc(sizeof(struct node));
    new_node -> data = value;
    new_node -> prev = ptr;
    new_node -> next = NULL;
    ptr -> next = new_node;
}
    
void print(struct node *head){
    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr -> data);
        ptr = ptr -> next;
    }
    printf("\n");
}

int finding_element(struct node *head, int value){
    struct node *ptr = head;
    while(ptr != NULL){
        if(ptr -> data == value) return 1;
        ptr = ptr -> next;
    }
    return 0;
}



int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 10;
    head -> prev = NULL;
    head -> next = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 20;
    current -> prev =head;
    current -> next = NULL;
    head -> next = current;

    add_element(head,30);
    add_element(head,40);

    print(head);

    int found = finding_element(head, 20);
    printf("Finding element 20: ");
    if (found) {
        printf("Element found!\n");
    } else {
        printf("Element not found!\n");
    }

    found = finding_element(head, 50);
    printf("Finding element 50: ");
    if (found) {
        printf("Element found!\n");
    } else {
        printf("Element not found!\n");
    }

}