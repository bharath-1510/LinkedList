#include <bits/stdc++.h>
using namespace std;
class ll {
public:
	int data;
	ll* next;
};

void print(ll* n)
{
	while (n != NULL) 
	{
		cout << n->data << " ";
		n = n->next;
	}
}

int main()
{
	ll* head = NULL;
	head = new ll();
	head->data = 1; 
	head->next = NULL;
	print(head);
	return 0;
}
//Linked list insertion
#include <bits/stdc++.h>
using namespace std;
class ll
{
	public:
	int data;
	ll *next;
};

void insert(ll** head, int data)
{
	ll* new_node = new ll();
	new_node->data = data;
	new_node->next = (*head);
	(*head) = new_node;
}
void insertAtend(ll** head, int data)
{
	ll* new_node = new ll();
	new_node->data = data;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;		
	}
	else
	{
	ll* last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;	
	}
}
void insertAtposition(ll** head ,int pos,int data)
{
	ll* new_node = new ll();
	new_node->data = data;
	new_node->next = NULL;
	if(pos==1)
		insert(head,data);	
	else
	{
		ll* temp=*head;
		ll* p = NULL;
		for(int i=1;i<pos;i++)
			if(temp!=NULL)
			{
				p=temp;
				temp=temp->next;
			}
		if(temp==NULL)
		{	
			cout<<"Error"<<endl;
			return;
		}		
		p->next=new_node;
		new_node->next=temp;
	}
}
void print(ll *node)
{
	while (node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
	cout<<endl;
}
int main()
{
	ll* head = NULL;
	insert(&head, 7);
	insert(&head, 1);
	insertAtend(&head, 51);		
	insert(&head, 4);
	insertAtend(&head, 5);			
	print(head);	
	insertAtposition(&head,5,9);
	cout<<"\nAfter Inserting";
	print(head);
	return 0;
}

