#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};


int enqueue(struct node *head,int value){
    struct node *ptr=head ;
    while(ptr -> link !=NULL){
        ptr=ptr->link;
    }
    struct node *new = malloc(sizeof(struct node));
    new -> data = value;
    new -> link =NULL;
    ptr -> link =new;
    return 0;
}



struct node *dequeue(struct node *head){
    if(head == NULL) return head;
    struct node *ptr = malloc(sizeof(struct node));
    ptr = head -> link;
    return ptr;
}

int print(struct node *head){
    if(head == NULL ) printf("Head is already null");
    struct node *ptr=head;
    while(ptr != NULL){
        printf("%d",ptr -> data);
        printf(" ");
        ptr = ptr-> link;
    }
    return 0;
}


int main(){
    struct node *head=malloc(sizeof(struct node));
    head -> data = 10;
    head -> link = NULL;
     
    printf("Initial queue:20\n");
    enqueue(head,20);
    print(head);
    printf("\n");

    printf("Initial queue:30\n");
    enqueue(head,30);
    print(head);
    printf("\n");

    printf("After performing dequeue operation:\n");
    head = dequeue(head);
    print(head);
}























































































    // at_position(head,2,30);
    // print(head);
    // printf("\n");



































// int at_position(struct node *head,int pos,int value){
//     struct node *ptr=head;
//     int position=1;
//     while(position < pos-1 && ptr!=NULL){
//         ptr = ptr -> link;
//         position ++;
//     }

//     struct node *new=malloc(sizeof(struct node));
//     new -> data = value;
//     new -> link = ptr -> link;

//     ptr -> link = new;

//     return 0;
// }