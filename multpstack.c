#include<stdio.h>
#define MAX 100
int stack[MAX],top1=-1,top2=MAX;
int isStack1Empty(){
    return (top1==-1)?1:0;
}
int isStack2Empty(){
    return (top2==MAX)?1:0;
}
int isStack1Empty(){
    return (top1==top2-1)?1:0;
}
int isStack2Full(){
    return (top2==top1+1)?1:0;
}
void push_stack1(int data){
    if(isStack1Full())
    printf("STACK-1 Overflow!!!!\n");
    else{
    stack[++top1]=data;
    printf("Element Added !!!\n");
}
}
void push_stack2(int data){
    if(isStack2Full())
    printf("STACK-2 Overflow!!!!\n");
    else{
    stack[--top2]=data;
    printf("Element Added !!!\n");
}
}
void pop_stack1(int data){
    if(isStack1Empty())
    printf("Stack-1 Underflow!!!\n");
    else{
        int i;   //  int value=stack[top--];
        for(i=top1;i>=0;i--){
  printf("%d\n",stack[i]);
        }
    }
}
void pop_stack2(int data){
    if(isStack2Empty())
    printf("Stack-2 Underflow!!!\n");
    else{
        int i;
        for(i=top2;i>=0;i--){
  printf("%d\n",stack[i]);
        }
    }
}
void peek_stack1(){
    if(isStack1Empty()){
        printf("Stack-1 is empty!!!!\n");
 return NULL ; 
    }
    else{
       return stack[top1];
    }
}
void peek_stack2(){
    if(isStack2Empty()){
        printf("Stack-2 is empty!!!!\n");
 return NULL ; 
    }
    else{
       return stack[top2];
    }
}
void show_stack1(){
    if(isStack1Empty())
    printf("Stack-1 is empty !!!!\n");
    else{
        int i;
        for(i=top1;i>=0;i--){
  printf("%d\n",stack[i]);
        }
    }
}
void show_stack2(){
    if(isEmpty())
    printf("Stack-2 is empty !!!!\n");
    else{
        int i;
        for(i=top2;i>=0;i--){
  printf("%d\n",stack[i]);
        }
    }
}
