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
