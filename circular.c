//circularl list......
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insert(int val){
    struct node *hello = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if(head == NULL){
        head = temp;
        temp->next = head;
        return;
    }
    while(hello->next != head){
        hello = hello->next;
    }
    hello->next = temp;
    temp->next = head;
    return;
}
void insertFirst(int val){
    struct node *hello = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;

    if(head == NULL){
        head = temp;
        temp->next = head;
        return;
    }
    while(hello->next != head){
        hello = hello->next;
    }
    hello->next = temp;
    temp->next = head;
    head = temp;
    return;
}
void insertMid(int val, int pos){
    struct node *hello = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    
    while(hello->data != pos){
        hello = hello->next;
    }
    temp->next = hello->next;
    hello->next = temp;
    return;
}
void deleteEnd(){
    struct node *ptr = head;
    struct node *p ;
    if(head->next == head){
        head = NULL;
        free(ptr);
        return;
    }
    while(ptr->next != head){
        p = ptr;
        ptr = ptr->next;
    }
    p->next = head;
    free(ptr);
    return;
}
void deleteMid(int pos){
    struct node *ptr = head;
    struct node *p ;
    while(ptr->data != pos){
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
    return;
}

void deletFirst(){
    struct node *ptr = head;
    struct node *p = head;
    if(head->next == NULL){
        head = NULL;
        free(ptr);
        return;
    }
    while(ptr->next != head){
        ptr = ptr->next;
    }
    ptr->next = p->next;
    head = p->next;
    free(p);
    return;
}
void display(){
    struct node *ptr = head;
    if(head == NULL){
        printf("List is empty");
    }else{
        while(ptr->next != head){
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);
    }
    printf("\n");
}

int main(){
    insert(100);
    insert(200);
    insert(300);
    insert(400);
    insert(500);
    display();
    // deleteEnd();
    // deleteEnd();
    // insertFirst(1500);
    deletFirst();
    display();
}