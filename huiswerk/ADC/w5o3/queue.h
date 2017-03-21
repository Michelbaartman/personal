#define QUEUESIZE 50

typedef struct {
	int a[QUEUESIZE];
	int head;
	int tail;
} Queue;

void init_queue(Queue* pq);
void enqueue(Queue* pq, int data);
int dequeue(Queue* pq);
void show(Queue q);