#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void remove_from_right(List*, int);
void remove_from_middle(List*, int);
void resize_array_remove(List*);
void resize_array_add(List*);
void shift_insert (List*, int);


typedef enum  {false,true} bool;

 struct list {
 	int* array;
 	int size;
 	int length;
 };
 
  List* list_create(){
  	List* list = (List*) malloc(sizeof(List));
  	list -> length = 0;
  	list -> size = 5;
  	list -> array = (int*) malloc(5*sizeof(int));
  	return list;
  }
  
  void list_free(List* list) {
  	free(list -> array);
  	free(list);
  }
  
  void list_display(List* list) {
  	int i;
  	for (i = 0; i < list->length; i++){
  		printf("%d, ", list->array[i]);
	  }
  }

  void list_add(List* list, int value) {	  
	  if(list->length == list->size) {
	  list->array =  realloc(list->array,sizeof(int)*2*list->size);
		list->size = list->size*2;
		list->array[list->length] = value;
		list->length++;
  }
	else{
		list->array[list->length] = value;
		list->length++;
	}

}	
	

int list_remove(List* list, int index){
		int value;

if(list->length == 0) return -1;
if(index >= list->length || index < 0) return -1;

value = list->array[index];
if(index == list->length - 1) remove_last_position(list,index); 
else remove_from_middle(list,index);

if(list->length < list->size/2) resize_array_remove(list); 

return value;
}

void remove_from_right(List* list, int index){//função que remove o ultimo item da lista
    list->array[index] = (uintptr_t)NULL; 
    list->length = list->length - 1;     
}
	

void remove_from_middle(List* list, int index){ //função que remove um item do meio da lista e a reorganiza
    list->array[index] = (uintptr_t)NULL; 
    for (int i = index; i < list->length - 1; i++){
        list->array[i] = list->array[i+1];
    }
    list->array[list->length-1] =(uintptr_t)NULL; 
    list->length = list->length - 1;  
}

void resize_array_remove(List* list){ //função que realoca o tamanho da lista para metade do seu valor
    list->array = realloc (list->array, sizeof(int) * list->size/2);
    list->size = list->size/2;
}

void resize_array_add(List* list){//função que realoca o tamanho  da lista para o dobro do seu valor
    list->array = realloc (list->array, sizeof(int) * list->size * 2);
    list->size = list->size * 2;
}

void list_insert (List* list, int index,int value){ 
	if(list->length >= list->size ){
		list->array = realloc(list->array,list->size*2*sizeof(int));
		list->size = list->size*2;
		for(int i = list->length ; i > index; i--){
			list->array[i] = list->array[i-1];
		}
		list->array[index] = (uintptr_t)NULL;
		list->array[index] = value;
		list->length++;
	}

}	
/*
	int list_remove(List* list,int index){
		if(index < 0 || index >= list->legth) return;
		int i;

		int itemRemoved = list->array[index];

		for(i = index; i < list->length - 1; i++)
			list->array[i] = list->array[i+1];
	}
	list->array[list->length-1] = NULL;
	list->length--;

	if(list->length <=  list->size/4){
		list->array = (int*) realloc(list->array,(list->size/2)*sizeof(int));
		list->size = list->size/2;
	}

	return itemRemoved;
*/