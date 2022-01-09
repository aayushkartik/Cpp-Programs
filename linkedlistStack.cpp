#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};
class Stack{
private:
    Node *top;
public:
    Stack(){top=NULL;}
    void push(int value);
    void pop();
    void display();
};
void Stack :: push(int value){
    Node *n = new Node();
    if(n==NULL){
        cout<<"Stack overflow"<<endl;
    }
    else{
        n ->data= value;
        n->next = top;
        top=n;
    }
}
void Stack::pop(){
    int x= -1;
    if(top==NULL){
        cout<<"Stack underflow"<<endl;
    }
    else{
        Node *t= top;
        top=top->next;
        delete t;
    }
}
void Stack::display(){
    Node *t= top;
    while(t!=NULL){
        cout<<t->data<<' ';
        t = t->next;
    }
    cout<<endl;
}
int main(){
    Stack st;

    st.push(10);
    st.push(30);
    st.push(60);
    st.push(19);
    st.push(69);
    st.push(89);
    st.push(9);
    st.push(99);
    st.push(999);
    st.display();
    st.pop();
    st.display();
    return 0;
}