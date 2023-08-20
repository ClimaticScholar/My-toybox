#include<stdio.h>
#include<string>
struct stack{
    char data[10];
    int top;
}s;
void pop(){
    if (s.top==-1){
        printf("Underflow !!");
    }
    else{
      char d;
      d=s.data[s.top];
      s.top--;
      printf("%c",d);
    }
}
void push(){
  if((s.top+1)==10){
    printf("Overflow !!");
  }
  else{
  	char i;
  	printf("Enter item :");
  	scanf("%c",&i);
    s.top++;
    s.data[s.top+1]=i;
    s.data[s.top+2]="\0";
  }
}
void stacktop(){
  if(s.top==-1){
    printf("Underflow");
  }
  else{
    printf("Stack top is:%d",s.top);
  }
}
int IsEmpty(){
  if(s.top==-1){
    return 1;
  }
  else{
    return 0;
  }
}
int main(){
  int ch;
  s.top=-1;
  while(1){
  	printf("\nMenu:\n1.Push\n2.Pop\n3.Is Empty\n4.Stacktop\n5.Display\n6.Exit");
  	printf("\nEnter choice :");
  	scanf("%d",&ch);
  	switch(ch){
  		case 1:
  			push();
  			break;
  		case 2:
  			pop();
		    break;
  		case 3:
  			if(IsEmpty()==1){
  				printf("Stack is empty");
  				break;
			  }
			else{
				printf("Stack is not empty");
				break;
			}
		case 4:
			stacktop();
			break;
			
  		case 5:
  			printf("Elements present in the stack are :");
  			for(int i=0;i<=s.top;i++){
  				printf("\n%d",s.data[i]);
			  }
			break;
		case 6:
			return 0;
		default:
			printf("Wrong choice entered");
			break;
	  }
  }
  return 0;
}
