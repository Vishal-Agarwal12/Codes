#include<iostream>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
using namespace std;

void enqueue(int x){
    if(rear==N-1){
        cout<<"Overflow";
    }
    else if((front=-1) && (rear=-1)){
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}

void dequeue(){
    if((front=-1) && (rear=-1)){
        cout<<"Underflow";
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front++;
    }
}

void display(){
    if((front=-1)&&(rear=-1)){
        cout<<"Underflow";
    }
    else{
        for(int i=front;i<rear+1;i++){
            cout<<queue[i];
        }
    }
}

void peek(){
    if((front=-1)&&(rear=-1)){
        cout<<"Underflow";
    }
    else{
        cout<<queue[front];
    }
}

int main(){
    enqueue(2);
    enqueue(5);
    enqueue(8);
    enqueue(3);
    // dequeue();
    // dequeue();
    // peek();
    display();

    return 0;
}