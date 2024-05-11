#  **Doubly-Linked List ADT**
### What is Doubly Linked-List
Doubly linked list is a complex type of linked list in which a node contains a pointer to the previous and the next node in the sequence. Therefore, in a doubly-linked list, a node consists of three parts:
* node data
* a pointer to the next node in sequence (next pointer)
* a pointer to the previous node (previous pointer)

A sample node in a doubly-linked list is shown in the figure.

![](https://i.imgur.com/zVbEtkK.png)

This is how a linked-list looks like:

![](https://i.imgur.com/BblFhKN.png)

![](https://i.imgur.com/N8xv8Q7.png)


* **Inserting a node in a linked list**

![](https://i.imgur.com/usZgAK1.png)

* **Deleting a node in a linked list**

![](https://i.imgur.com/L1bMuzP.png)

```c
#include<stdio.h>
#include<stdlib.h>

 struct Node
 {
    int val;
    struct Node* prev;
    struct Node* next;
    
 };

 struct ListRecord
 {
    struct Node* head;
    struct Node* tail;
    int length;
 };
 
 typedef struct ListRecord *List;

// Function to make empty Doubly Linked List
void Makeemptylist(List l)
{
    l->head = (struct Node*)malloc(sizeof(struct Node));
    if(l==NULL) // Checking l is NULL or not
    {
        printf("\nOut of memory !");
        exit(0);
    }
    else
    {
        l->head->prev = NULL;
        l->head->next = NULL;
        l->tail = l->head;
        l->length = 0;
    }
}

 // Function to create Doubly Linked List 
 List createlist(int size)
 {
    List L;
    L = (struct ListRecord*)malloc(sizeof(struct ListRecord));
    if(L==NULL) // Checking L is NULL or not
    {
        printf("\nOut of memory !");
        return NULL;
    }
    else
    {
        Makeemptylist(L);
        return L;
    }
 }


// Function to insert from the beginning
void insert_beg(List L,int x)
{
    struct Node *newnode; // creating newnode
    newnode = (struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL) // Checking newnode is NULL or not
    {
        printf("\nOut of memory !");
        exit(1);
    }
    else
    {
        
        newnode->val=x;
        newnode->next=NULL;
        newnode->prev = NULL;

        // adding part
        // because tail is moving ^-^
        L->tail->next=newnode;
        newnode->prev = L->tail;
        L->tail=newnode;
        L->length++;
        // inserting the elements beginning of the list
    }
}

// Function to insert a Node at given position in Doubly Linked List 
void insert(List l,int pos, int val)
{
    struct Node *newnode; // creating newnode
    newnode = (struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL) // Checking newnode is NULL or not
    {
        printf("\nOut of memory !");
        exit(1);
    }
    else
    {
        newnode->val = val;
        newnode->prev = NULL;
        newnode->next = NULL;

        if(pos > l->length + 1 ) // adjusting position
            pos = l->length + 1;
        if(pos == l->length + 1) // inserting at the end (tail)
        {
            l->tail->next = newnode;
            newnode->prev = l->tail;
            l->tail = newnode;
        } 
        else // inserting between two nodes
        {
            int i;
            struct Node *dummy;
            dummy = l->head;
            // finding proper position to add
            for (i = 0; i < pos ; i++)
            {
                dummy = dummy->next;
            }
            newnode->prev = dummy;
            dummy->next = newnode;
            newnode->next = dummy->next;
            dummy->next->prev = dummy;
            dummy = newnode;
        }
    }
}

// function to print Doubly Linked List
void Normal_print(List l)
{
    struct Node* current;
    current = l->head->next;
    while(current != NULL)
    {
        printf(" %d <-->",current->val);
        current = current->next;
    }
    printf("\n");
}

// function to print Doubly Linked List
void Reverse_print(List l)
{
    struct Node* current;
    current = l->tail;
    while(current->prev != NULL)
    {
        printf(" %d <-->",current->val);
        current = current->prev;
    }
    printf("\n");
}

int main()
{
    List l;
    l = createlist(4);
    insert_beg(l,1);
    insert_beg(l,2);
    insert_beg(l,5);
    Reverse_print(l);
    Normal_print(l);
}
```

---

# Doubly-Linked List ADT
## (Dynamic Linked List Implementation)
The information stored includes artist’s name, album title, genre and your rating from 1-5. Create a data structure to represent a CD. Build a doubly linked list  using the above abstract data type, and allow the user to choose functions:

*  **InsertTitle()**: inserts a new CD to the list;
*  **DeleteTitle()**: delete a CD from the list;
*  **DisplayForward()**: to display the collection forward;
*  **DisplayBackward()**: to display the collection backwards.
```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct Node
 {
    char artist_name[20];
    char album_title[20];
    char genre[12];
    int rating;
    struct Node* prev;
    struct Node* next;

 };

 struct ListRecord
 {
    struct Node* head;
    struct Node* tail;
    int length;
 };

 typedef struct ListRecord *List;

// Function to make empty Doubly Linked List
void Makeemptylist(List l)
{
    l->head = (struct Node*)malloc(sizeof(struct Node));
    if(l==NULL) // Checking l is NULL or not
    {
        printf("\nOut of memory !");
        exit(0);
    }
    else
    {
        l->head->prev = NULL;
        l->head->next = NULL;
        l->tail = l->head;
        l->length = 0;
    }
}

 // Function to create Doubly Linked List
 List createlist(int size)
 {
    List L;
    L = (struct ListRecord*)malloc(sizeof(struct ListRecord));
    if(L==NULL) // Checking L is NULL or not
    {
        printf("\nOut of memory !");
        return NULL;
    }
    else
    {
        Makeemptylist(L);
        return L;
    }
 }


// Function to insert from the beginning
void  InsertTitle(List L)
{
    char name[20];
    char title[20];
    char gen[12];
    int rate;
    struct Node *newnode; // creating newnode
    newnode = (struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL) // Checking newnode is NULL or not
    {
        printf("\nOut of memory !");
        exit(1);
    }
    else
    {
        printf("Artist's name:");
        scanf_s(" %[^\n]s",&name);
        printf("Album title:");
        scanf("%s",title);
        printf("Genre:");
        scanf("%s",gen);
        printf("Rating:");
        scanf("%d",&rate);

        strcpy(newnode->artist_name,name);
        strcpy(newnode->album_title,title);
        strcpy(newnode->genre,gen);
        newnode->rating = rate;
        newnode->next=NULL;
        newnode->prev = NULL;

        // adding part
        // because tail is moving ^-^
        L->tail->next=newnode;
        newnode->prev = L->tail;
        L->tail=newnode;
        L->length++;
        // inserting the elements beginning of the list
    }
}

void DeleteTitle(List l)
{
    char title[20];
    printf("Enter title to delete:");
    scanf("%s",title);
    struct Node* curr;
    curr = l->head->next;
    // finging the node belongs to the title
    while(curr != NULL)
    {
        if(strcmp(title,curr->artist_name) == 0)
        {
            if(curr->prev != NULL)
            {
                curr->prev->next=curr->next;
            }
            if(curr->next != NULL)
            {
                curr->next->prev = curr->prev;
            }

            curr->prev=NULL;
            curr->next=NULL;
            printf("\n%s is deleted.",curr->artist_name);
            free(curr);
            break;
        }
        curr = curr->next;
    }
}

// function to print Doubly Linked List
void DisplayForward(List l)
{
    struct Node* current;
    current = l->head->next;
    while(current != NULL)
    {
        printf(" %s , %s , %s , %d ",current->artist_name,current->album_title,current->genre,current->rating);
        current = current->next;
    }
    printf("\n");
}

// function to print Doubly Linked List
void DisplayBackward(List l)
{
    struct Node* current;
    current = l->tail;
    while(current->prev != NULL)
    {
        printf(" %s , %s , %s , %d ",current->artist_name,current->album_title,current->genre,current->rating);
        current = current->prev;
    }
    printf("\n");
}

int main()
{
    List l;
    l = createlist(l);
    int choice = 0;
    while(choice != 5)
    {
    printf("\n****************************************************");
    printf("\n1) Insert New CD");
    printf("\n2) Delete title ");
    printf("\n3) Display backward");
    printf("\n4) Display forward");
    printf("\n5) Exit");
    printf("\nwhat would you like to do ? ");
    scanf("%d",&choice);
    printf("****************************************************\n");

    if(choice == 1) // Adding new element
    {
        InsertTitle(l);
    }
    else if(choice == 2) // Deleting element
    {
        DeleteTitle(l);
    }
    else if(choice == 3) // displaying backward
    {
        DisplayBackward(l);
    }
    else if(choice == 4) // displaying forward
    {
        DisplayForward(l);
    }

    }
}

```
**Output**
```c
****************************************************
1) Insert a new CD
2) Delete title
3) Display forward
4) Display backward
5) Exit
What would you like to do? 1
****************************************************
Artist’s name: Michael Jackson
Album title: Smooth Criminal
Genre: Pop
Rating:7
****************************************************
1) Insert a new CD
2) Delete title
3) Display forward
4) Display backward
5) Exit
What would you like to do? 1
****************************************************
Artist’s name: Jax Jones
Album title: Play
Genre: Deep House
Rating: 8
****************************************************
1) Insert a new CD
2) Delete title
3) Display forward
4) Display backward
5) Exit
What would you like to do? 3
****************************************************
Jax Jones, Play, Deep House, 8
Michael Jackson,Smooth Criminal, Pop, 7
****************************************************
1) Insert a new CD
2) Delete title
3) Display forward
4) Display backward
5) Exit
What would you like to do? 4
****************************************************
Michael Jackson,Smooth Criminal, Pop, 7
Jax Jones, Play, Deep House, 8
****************************************************
1) Insert a new CD
2) Delete title
3) Display forward
4) Display backward
5) Exit
What would you like to do? 2
****************************************************
Enter title to delete: Michael Jackson
Michael Jackson is deleted.
****************************************************
1) Insert a new CD
2) Delete title
3) Display forward
4) Display backward
5) Exit
What would you like to do? 3
****************************************************
Jax Jones, Play, Deep House, 8
****************************************************
1) Insert a new CD
2) Delete title
3) Display forward
4) Display backward
5) Exit
What would you like to do? 5
****************************************************
```


