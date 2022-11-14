// Dominik Jakubovskis
// Kolejka
// 2022-10-24

#include <stdio.h>
#include <stdlib.h>

struct fifo_node
 {
 int data;
 struct fifo_node *next;
 }

struct fifo_pointers {
  struct fifo_node *head, *tail;
} fifo;

void enqueue(struct fifo_pointers *fifo, int data) {
  struct fifo_node *new_node =
      (struct fifo_node *)malloc(sizeof(struct fifo_node));
  if (new_node) {
    new_node->data = data;
    new_node->next = NULL;
    if (fifo->head == NULL)
      fifo->head = fifo->tail = new_node;
    else {
      fifo->tail->next = new_node;
      fifo->tail = new_node;
    }
  } else
    fprintf(stderr, "Nowy element nie został utworzony!\n");
}

int dequeue(struct fifo_pointers *fifo) {
  if (fifo->head) {
    struct fifo_node *tmp = fifo->head->next;
    int data = fifo->head->data;
    free(fifo->head);
    fifo->head = tmp;
    if (tmp == NULL)
      fifo->tail = NULL;
    return data;
  }
  return -1;
}

void print_queue(struct fifo_pointers fifo) {
  while (fifo.head) {
    printf("%d ", fifo.head->data);
    fifo.head = fifo.head->next;
  }
  puts("");
}
void print_queue_with_for(struct fifo_pointers fifo) {
  for (; fifo.head; fifo.head = fifo.head->next)
    printf("%d ", fifo.head->data);
  puts("");
}
int main(void) {
  int i;
  for (i = 0; i < 5; i++)
    enqueue(&fifo, i);
  print_queue_with_for(fifo);
  while (fifo.head)
    printf("%d ", dequeue(&fifo));
  puts("");
  return 0;
}
