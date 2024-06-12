#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;


Node* merge(Node* list1, Node* list2) {
    Node* result;
    Node* temp;


    if (list1->data <= list2->data) {
        result = list1;
        list1 = list1->next;
    } else {
        result = list2;
        list2 = list2->next;
    }

    temp = result;

    while (list1 && list2) {
        if (list1->data <= list2->data) {
            temp->next = list1;
            list1 = list1->next;
        } else {
            temp->next = list2;
            list2 = list2->next;
        }
        temp = temp->next;
    }

    if (list1) {
        temp->next = list1;
    } else if (list2) {
        temp->next = list2;
    }

    return result;
}


void split(Node* start, Node** firstHalf, Node** secHalf) {

    int length = 0;
    Node* current = start;

  
    while (current != NULL) {
        length++;
        current = current->next;
    }


 
    int mid = length / 2;
    current = start;
    *firstHalf = start;

    for (int i = 0; i < mid - 1; i++) {
        current = current->next;
    }


    *secHalf = current->next;
    current->next = NULL;
}


Node* mergeSort(Node* head) {

    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* beg;
    Node* end;

    split(head, &beg, &end);

    beg = mergeSort(beg);
    end = mergeSort(end);

    return merge(beg, end);
}


int main() {
    Node *head = NULL;
    Node *newNode = NULL;
    int n;
    int i;

    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    int *data = (int*) malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &data[i]);
    }

    for (i = n - 1; i >= 0; i--) {
        newNode = (Node*) malloc(sizeof(Node));
        newNode->data = data[i];
        newNode->next = head;
        head = newNode;
    }

    printf("\n");
    printf("Original linked list :\n");
    Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    head = mergeSort(head);

    printf("\n");
    printf("Sorted linked list :\n");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");



    return 0;
}
