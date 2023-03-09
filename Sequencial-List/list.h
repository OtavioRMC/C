

  typedef struct list List;
  
  List* list_create();
  void list_free(List* list);
  void list_display(List* list);
  void list_add(List* list, int value);
  int list_remove(List* list, int index);
  void list_set(List* list, int index, int value);
  void list_insert(List* list, int index, int value);
  
