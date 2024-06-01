#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

Node *addTwoNumbers(Node *&first,Node *&second)
{
    Node *ansHead=NULL;
    Node *ansTail=NULL;
    int carry=0;
    while(first && second)
    {
        int sum=carry+first->data+second->data;
        int digit=sum%10;
        carry=sum/10;
        Node *newNode=new Node(digit);

        if(ansHead==NULL)
        {
            ansHead=newNode;
            ansTail=newNode;
        }
        else{
            ansTail->next=newNode;
            ansTail=newNode;
        }
        first=first->next;
        second=second->next;
    }
    while(first)
    {
        int sum=carry+first->data;
        int digit=sum%10;
        carry=sum/10;
        Node *newNode=new Node(digit);
        ansTail->next=newNode;
        ansTail=newNode;
        first=first->next;
    }
      while(second)
    {
        int sum=carry+second->data;
        int digit=sum%10;
        carry=sum/10;
        Node *newNode=new Node(digit);
        ansTail->next=newNode;
        ansTail=newNode;
        second=second->next;
    }
    while(carry)
    {
        int sum=carry;
        int digit=sum%10;
        carry=sum/10;
        Node *newNode=new Node(digit);
        ansTail->next=newNode;
        ansTail=newNode;
    }
    return ansHead;

}

int main()
{
    Node *first=new Node(2);
    Node *second=new Node(4);
    Node *third=new Node(3);
    first->next=second;
    second->next=third;

    Node *fourth=new Node(5);
    Node *fifth=new Node(6);
    Node *sixth=new Node(4);

    fourth->next=fifth;
    fifth->next=sixth;

    Node *ans=addTwoNumbers(first,fourth);

    while(ans)
    {
            cout<<ans->data;
            ans=ans->next;
    }



}
