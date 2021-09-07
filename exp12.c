#include<stdio.h>
#include<stdlib.h>
int size=0;
struct Node
{
struct Node* prev;
int data;
struct Node* next;
}*first=NULL;
void Insert(struct Node* p,int index,int element)
struct Node* p;
int i;
{
if (index == 0)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
temp->data = element;
temp->prev = NULL;
temp->next = first;
if (first != NULL)
{
first->prev = temp;
}
first = temp;
}
else
{
struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
temp->data = element;
struct Node* p = first;
for (int i = 0; i < index - 1; i++)
{
p = p->next;
}
temp->next = p->next;
temp->prev = p;
p->next=temp;
if (p->next != NULL)
{
p->next->prev = temp;
}
}size++;
}
struct Node* Delete(struct Node* p, int index)
{
if (first == NULL)
{
printf("Deletion not possible\n ");
}
if (index == 0)
{
p = first;
if (p->next != NULL)
{
p->next->prev = NULL;
first = first->next;
free(p);
}else{
	free(p);
}
}else if(index==size-1)
{
	p=first;
	while(p->next->next!=NULL)
	{
		p=p->next;
	}
	p->next=NULL;
}else if(index<0 || index>size)
{
	printf("Invalid index input\n");
}
else
{
p = first;
for (int i = 0; i < index - 1; i++)
{
p = p->next;
}
struct Node*nxt=p->next;
p->next=nxt->next;
nxt->next->prev=p;
free(nxt);
}
return first;
}
void Display(struct Node *p)
{
p = first;
while (p != NULL)
{
printf("%d ", p->data);
p = p->next;
}
printf("\n");
}

int main()
{
Insert(first, 0, 45);
Insert(first, 1, 55);
Insert(first, 2, 65);
Insert(first, 3, 75);
Insert(first, 4, 85);
Insert(first, 5, 95);

printf("Elements present in the linked list are\n");
Display(first);
first=Delete(first,4);
printf("Elements present in the linked list after deletion are\n");
Display(first);
}
