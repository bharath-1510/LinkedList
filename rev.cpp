#include <bits/stdc++.h>
using namespace std;
class ll
{
	public:
	int data;
	ll *next;
};

void delte(ll** head)
{
	ll* last = *head;
	*head=last->next;
}
void deleteAtend(ll** head)
{
	if (*head == NULL)
	{
		cout<<"Error"<<endl;
	}
	else
	{
	ll* last = *head;
	while (last->next->next != NULL)
		last = last->next;
	last->next = NULL;	
	}
}
void deleteAtposition(ll** head ,int pos)
{
	if(pos==1)
		delte(head);	
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
		p->next=temp->next;		
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
void find(ll* n1,int n)
{
	while(n1!=NULL)
	{
		if(n1->data==n)
		{
			cout<<"Found"<<endl;
			return;
		}
		n1=n1->next;
	}
	cout<<"Not Found";
}
int si(ll* n1)
{
	int i=0;
	while(n1!=NULL)
	{
		i++;
		n1=n1->next;
	}
	return i;
}
void rev(ll** head)
{
	ll* temp=NULL;
	ll* temp1=NULL;
	ll* cur=*head;
	while(cur!=NULL)
	{
		temp1=cur->next;
		cur->next=temp;
		temp=cur;		
		cur=temp1;
	}
	*head=temp;	
}
int main()
{
	ll* head = NULL;
	int k;
	
	insert(&head, 7);	
	insert(&head, 1);
	insertAtend(&head, 51);		
	insert(&head, 4);	
	insertAtend(&head, 5);					
	cout<<"\nPostion : ";
	cin>>k;
	insertAtposition(&head,k,9);
	cout<<"Original values : ";	
	print(head);	
	cout<<endl;
	delte(&head);//"Values after deleting begining : "
	print(head);		
	deleteAtend(&head);//"Values after deleting end : "
	print(head);
	int n;
	cout<<"Postion : ";
	cin>>n;
	deleteAtposition(&head,n);//"Values after deleting postion : "
	cout<<"\nAfter Deleting";
	print(head);
	int j;
	cin>>j;
	find(head,j);
	int size=si(head);
	cout<<"length : "<<size; 
	cout<<"Original values : ";	
	rev(&head);
	print(head);	
	cout<<endl;
	rev(&head);
	cout<<"Original values : ";	
	print(head);	
	cout<<endl;
	return 0;
}


