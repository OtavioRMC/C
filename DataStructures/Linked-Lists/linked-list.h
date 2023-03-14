typedef struct no Node;
Node* createList();
void destructList(Node **L);
void printList(Node *L);
void addBeggining(Node **L,int value);
void addEnd(Node **L,int value);
void removeBegin(Node **L);
void removeValue(Node **L);
void removeEnd(Node **L);
int searchValue(Node *L, int value);



