#include<stdio.h>
#include<stdlib.h>
#define size 10
struct queue{
	int data;
	struct queue*next;
};
typedef struct queue node;
node*front=NULL;
node*rear=NULL;
void enqueue(int e){
	node*p,*q;
	p=(node*)malloc(sizeof(node));
	p->data=e;
	p->next=NULL;
	if(front == NULL && rear == NULL){
		front=rear=p;
	}	
	else{
		q=front;
		while(q->next!=NULL){
			q=q->next;
		}
		q->next=p;
		rear=p;
	}
}
void dequeue(){
	if(front == 0){
		printf("Undeflow");
	}
	else{
		node *p=front;
		front = p->next;
		free(p);
	}
}
void print(){
	node*p;
	p=front;
	while(p!=NULL){
		printf("\n%d",p->data);
		p=p->next;
	}
}
void menu(){
	printf("Menu :");
	printf("\n1.Enqueue");
	printf("\n2.Dequeue");
	printf("\n3.Print");
	printf("\n4.Exit");
}
int main(){
	int f=0,ch;
	menu();
		while(f==0){
		printf("\nEnter choice :");
		scanf("%d",&ch);
		if(ch==1){
			int e;
			scanf("%d",&e);
			enqueue(e);
		}
		if(ch==2){
			dequeue();
		}
		if(ch==3){
			print();
		}
		if(ch==4)
			f=1;
		if(ch>4)
			printf("Wrong choice entered");
	}
	return 0;
}
