#include<stdio.h>
#include<stdlib.h>

struct node{
char data;
struct node* next;
struct node* prev;
};

void insertfront(struct node** head, char data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = (*head);
    newnode->prev = NULL;
    if((*head) != NULL){(*head) = newnode;}
    }
void insertafter(struct node* prev_node, char data){
    if(prev_node == NULL){printf("Previous node cannot be empty\n");return;}
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = prev_node->next;
    prev_node->next = newnode;
    newnode->prev = prev_node;
    if(newnode->next != NULL){newnode->next->prev = newnode;}
}
void insertend(struct node** head, char data){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    struct node* temp = *head;
    if(*head == NULL){
        newnode->prev = NULL;
        *head = newnode;
        return;
        }
    while(temp->next!=NULL){temp = temp->next;}
    temp->next = newnode;
    newnode->prev = temp;
}
void deletenode(struct node** head, struct node* del_node){
    if(*head == NULL || del_node == NULL){return;}
    if(*head == del_node){*head = del_node->next;}
    if(del_node->next!=NULL){del_node->next->prev = del_node->prev;}
    if(del_node->prev!=NULL){del_node->prev->next = del_node->next;}
    free(del_node);
}
void displaylist(struct node* node){
    struct node* last;
    printf("{ ");
    while(node!=NULL){
      //  printf("{");
        printf("%c,",node->data);
        last = node;
        node = node->next;
        //printf(" }");
    }
    if(node == NULL){printf("NULL");}
    printf(" }\n");
}
int main(){
    struct node* head = NULL;
     insertend(&head,'v');
    insertfront(&head,'K');
    insertafter(head,'&');
    
    displaylist(head);
    printf("\n");
    
   
    return 0;
}
