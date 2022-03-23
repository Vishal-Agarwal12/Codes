#include<iostream>
#define N 5
int stack[N];
int top=-1;
using namespace std;
    
void push(){
    int x;
    cout<<"Enter data";
    cin>>x;
    if(top==N-1){
        cout<<"Overflow";
    }
    else{
        top++;
        stack[top]=x;
    }  
}

void pop(){
    if(top==-1){
        cout<<"Underflow";
    }
    else{
        top--;
    }
}

void peek(){
    if(top==-1){
        cout<<"Underflow";
    }
    else{
        cout<<stack[top];
    }
}

void display(){
    for(int i=top;i>=0;i--){
        cout<<stack[i];
    }
}

int main(){
    push();
    push();
    push();
    push();
    pop();
    display();
    return 0;
}