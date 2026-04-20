typedef struct Node {
    int data;
    struct Node *next;
} Node;
int count() {
    int dem = 0;
    Node *p = head;

    while (p != NULL) {
        dem++;
        p = p->next;
    }

    return dem;
}
