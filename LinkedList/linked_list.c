#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList{
    int data;
    struct LinkedList *next;
} node;

typedef struct DoublyLinkedList{
    int data;
    struct DoublyLinkedList *next, *prev;
}douNode;

douNode *tail_01 = NULL;

node *add(node *head, int key){
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = key;
    ptr->next = NULL;
    node *itter = head;
    while (itter->next != NULL)
        itter = itter->next;
    itter->next = ptr;
    return head;
}

node *create_list(node *head){
    int size;
    printf("Enter The Node to be Entered : ");
    scanf("%d", &size);

    if (size == 0)
        return head;

    for (int i = 0; i < size; i++)
    {
        printf("Enter The Value to be Inserted : ");
        int val;
        scanf("%d", &val);
        if (i == 0)
        {
            node *ref = (node *)malloc(sizeof(node));
            ref->data = val;
            ref->next = NULL;
            head = ref;
        }
        else
            head = add(head, val);
    }
    return head;
}

void pushatEnd(node* head,int key){
    node* ptr_02 = (node*)malloc(sizeof(node));
    ptr_02->data = key;
    ptr_02->next = NULL;

    node* ptr = head;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = ptr_02;
}

int popatEnd(node* head){
    node *ptr_01, *ptr_02;
    ptr_01 = head;
    ptr_02 = head;
    while ((ptr_01->next)->next != NULL)
    {
        ptr_01 = ptr_01->next;
        ptr_02 = ptr_02->next;
    }
    ptr_02 = ptr_02->next;
    ptr_01->next = NULL;
    int result = ptr_02->data;
    free(ptr_02);
    return result;
}

douNode *addDoubleNode(douNode *head, int key){
    douNode *ptr_01 = (douNode*)malloc(sizeof(douNode));
    ptr_01->data = key;
    ptr_01->next = NULL;
    ptr_01->prev = NULL;

    douNode *ptr_02 = head;
    while (ptr_02->next != NULL)
        ptr_02 = ptr_02->next;
    ptr_02->next = ptr_01;
    ptr_01->prev = ptr_02;
    tail_01 = ptr_01;
    return head;
}

douNode *createDoublyList(douNode* head){
    
    printf("Enter The Number of Nodes to be inserted : ");
    int size;
    scanf("%d",&size);
    if (size == 0)
        return head;

    for (int i = 0; i < size; i++)
    {
        printf("Enter The Data to be Entered : ");
        int val;
        scanf("%d",&val);

        if (i==0)
        {
            douNode *ptr = (douNode*)malloc(sizeof(douNode));
            ptr->data = val;
            ptr->next = NULL;
            ptr->prev= NULL;
            head = ptr;
            tail_01 = ptr;
        }
        else
            head = addDoubleNode(head,val);
    }
    return head;
}


void printLinearList(node *head){
    node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

void printList(douNode *head){
    douNode *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

void printReverseList(douNode *tail){
    douNode *ptr = tail;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->prev;
    }
}

node *deleteNode(node *head, int key){
    node *ptr_01, *ptr_02;
    ptr_01 = head;
    ptr_02 = head;
    while ((ptr_02->next)->data != key)
    {
        ptr_01 = ptr_01->next;
        ptr_02 = ptr_02->next;
    }
    ptr_02 = ptr_02->next;
    ptr_01->next = ptr_02->next;
    ptr_02->next = NULL;
    free(ptr_02);
    return head;
}

node* deleteHead(node* head){
    node* ptr = head;
    head = head->next;
    ptr->next = NULL;
    free(ptr);
    return head;
}

void concatenate(node *head_01, node *head_02){
    node *ptr = head_01;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = head_02;
}

int main()
{
    node *head_01 = NULL;
    head_01 = create_list(head_01);
    printLinearList(head_01);

    printf("\n\nEnter The Data to be inserted at End : ");
    int data;
    scanf("%d",&data);
    pushatEnd(head_01,data);
    printLinearList(head_01);

    printf("\nAfter Popping the List Looks like : ");
    int res = popatEnd(head_01);
    printLinearList(head_01);
    printf("\nThe Popped Element : %d\n",res);
    

    return 0;
}