#include<stdio.h>
#include<stdlib.h>
struct llist{
	struct llist *next;
	int data;
};
typedef struct llist node;
node*head = NULL;
void push(int e){
	node *p=head,*q;
	if(head==NULL){
		 p=(node*)malloc(sizeof(node));
		 p->data=e;
		 p->next=NULL;
		 head=p;
	}
	else{
		while(p->next!=NULL){
			p=p->next;	
		}
		q=(node*)malloc(sizeof(node));
		q->data=e;
		q->next=NULL;
		p->next=q;
	}
}
int pop() {
    node *p = head, *q = NULL;
    int e;

    if (p == NULL) {
        printf("UNDERFLOW!!\n");
        return 0;
    }
    if (p->next == NULL) {
        e = p->data;
        free(p);
        head = NULL;
        return e;
    }
    while (p->next->next != NULL) {
        p = p->next;
    }

    q = p->next;
    e = q->data;
    p->next = NULL;
    free(q);
    
    return e;
}

void display(){
	node*p=head;
	printf("Stack elements :\n");
	do{
		printf("%d ",p->data);
		p=p->next;
	}while(p!=NULL);
}
int stacktop(){
	node*p=head;
	do{
		p=p->next;
	}while(p->next!=NULL);
	return p->data;
}
void menu(){
	printf("\n............Menu.............");
	printf("\n1.Push");
	printf("\n2.Pop");
	printf("\n3.Stacktop");
	printf("\n4.Display");
	printf("\n5.Exit");
}
int main(){
	int ch;
	while(1){
		menu();
		printf("\nEnter choice : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				int e;
				printf("\nEnter element : ");
				scanf("%d",&e);
				push(e);
				break;
			case 2:
				printf("Element popped is : %d",pop());
				break;
			case 3:
				printf("Topmost element is : %d",stacktop());
				break;
			case 4:
				display();
				break;
			case 5:
				return 0;
			default:
				printf("Wrong Choice !!");
		}
		
	}
	
}
