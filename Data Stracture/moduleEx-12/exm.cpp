#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void input_value(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void output_value(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}
int size(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}
bool are_sizes_equal(Node *head1, Node *head2)
{
    return size(head1) == size(head2);
}
void revers_(Node * head)
{
    if(head ==NULL) return;
    revers_(head->next);
    cout << head->value << " "; 
}
void print_middle(Node * head)
{

    if(size(head)%2==0)
    {
        for (int i = 1; i <= size(head)/2; i++)
        {
            head=head->next;
        }
        cout << head->value << " " << head->next->value <<  endl;  
    }else{
        for (int i = 1; i <= size(head)/2; i++)
        {
            head=head->next;
        }
        cout << head->value <<  endl;  
    }
}
int max_value(Node * head )
{
    int max=INT_MIN;
    while (head !=NULL)
    {
        if(max<head->value) max=head->value;
        head=head->next;
    }
    return max;
}
int min_value(Node * head )
{
    int min=INT_MAX;
    while (head !=NULL)
    {
        if(min>head->value) min=head->value;
        head=head->next;
    }
    return min;
}
void sort_Desending(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value < j->value) swap(i->value, j->value);
        }
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;


    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        input_value(head, tail, v);
    }
    output_value(head);
    size(head);
    are_sizes_equal();
    revers_(head);
    print_middle(head);
    max_value(head);
    min_value(head);
    sort_Desending(head);
    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void input(Node *&head, Node *&tail, int v)
{
    Node *Nnode = new Node(v);
    if (head == NULL)
    {
        head = Nnode;
        tail = Nnode;
        return;
    }
    tail->next = Nnode;
    Nnode->prev = tail;
    tail = Nnode;
}
void print_Next(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}
void print_prev(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->value << " ";
        tail = tail->prev;
    }
    cout << endl;
}
int size(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void ascending(Node *head)
{
    while (head != NULL)
    {
        for (Node *i = head; i != NULL; i = i->next)
        {
            if (head->value > i->value)
            {
                swap(head->value, i->value);
            }
        }
        head = head->next;
    }
}
void dscending(Node *head)
{
    while (head != NULL)
    {
        for (Node *i = head; i != NULL; i = i->next)
        {
            if (head->value < i->value)
            {
                swap(head->value, i->value);
            }
        }
        head = head->next;
    }
}
bool isSame(Node *head1, Node *head2)
{
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->value != head2->value)
            return false;
        head1 = head1->next;
        head2 = head2->next;
    }
    return size(head1) == size(head2);
}
void revers_two_pointer(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
    }
    swap(i->value, j->value);
}
bool isPalindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        if (i->value != j->value)
            return false;
        i = i->next;
        j = j->prev;
    }
    if (i->value != j->value)
        return false;
}
void insart_pogition(Node *&head, Node *&tail, int v, int p)
{
    Node *Nnode = new Node(v);

    if (head == NULL)
    {
        head = Nnode;
        tail = Nnode;
        return;
    }
    else if (p == 0)
    {
        Nnode->next = head;
        Nnode->next->prev = Nnode;
        head = Nnode;
    }
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        while (t--)
        {
            int p, v;
            cin >> p >> v;
            insart_pogition(head, tail, v, p);
        }
        print_Next(head);
        print_prev(tail);
    }
    return 0;
}

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_next(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}
void print_prev(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->value << " ";
        tail = tail->prev;
    }
}
int size(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void insart_any_position(Node *head, int v, int p)
{
    Node *Nnode = new Node(v);
    Node *tmp = head;
    for (int i = 0; i < p - 1; i++)
    {
        tmp = tmp->next;
    }
    Nnode->next = tmp->next;
    tmp->next = Nnode;
    Nnode->next->prev = Nnode;
    Nnode->prev = tmp;
    cout << tmp->value << endl;
}
void insart_head(Node *&head,Node *&tail, int v)
{
    Node *tmp = head;
    Node *Nnode = new Node(v);
    if (head == NULL)
    {
        head = Nnode;
        tail= Nnode;
        return;
    }
    Nnode->next = tmp;
    tmp->prev = Nnode;
    head = Nnode;
    
}
void insart_tail(Node *&head,Node * &tail,int v)
{
    Node * Nnode=new Node(v);
    if(tail==NULL)
    {
        head=Nnode;
        tail=Nnode;
        return;
    }
    tail->next=Nnode;
    Nnode->prev=tail;
    tail=Nnode;
}
void deleteNode(Node * head,int p)
{
    Node * del=NULL;
    Node * tmp=head;
    for (int i = 0; i < p-1 ; i++)
    {
        tmp=tmp->next;
    }
    del=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete del;
}
void deletetail(Node *& tail)
{
    Node * del=tail;
    tail=tail->prev;
    tail->next=NULL;
    delete del;
}
void deleteHead(Node *& head)
{
    Node * del=head;
    head=head->next;
    head->prev=NULL;
    delete del;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    
    while (true)
    {
        int v;
        cin>>v;
        if(v== -1) break;
        insart_tail(head,tail,v);
    }
    print_next(head);
    print_prev(tail);
    if(p==0)
    {
        insart_head(head,tail,v);
    }else if(p == size(head))
    {
        insart_tail(head,tail,v);
    }else if(p>=size(head))
    {
        cout << "invalide" << endl;
    }
    else
    {
        insart_any_position(head,v,p);
    }
    deleteNode(head,p);
  
    deletetail(tail);
    
    if(p>=size(head))
    {
        cout << "invalide" << endl;
    }
    else if(p==0)
    {
        deleteHead(head);
    }
    else if(p==(size(head)-1))
    {
        deletetail(tail);
    }
    else
    {
        deleteNode(head,p);
    }


    return 0;
}