#include<stdio.h>
#include<stdlib.h>

struct node{
    char data;
    struct node*next;
};
struct node*head,*tail=NULL;

void addnode(int data){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if(head == NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        tail->next = newnode;
        tail = newnode;
    }
}
void display(){
    struct node*current = head;
    if(head==NULL){
        printf("list is empty\n");
        return;
    }
printf("Nodes of the linked list\n");
    printf("{ ");
while(current != NULL){
printf("%c",current->data);
current = current->next;
printf(",");
}printf(" }");
printf("\n");
}

int main(){
    addnode('k');
    addnode('h');
    addnode('u');
    addnode('s');
    addnode('h');
    addnode('i');
    display();
    return 0;
}