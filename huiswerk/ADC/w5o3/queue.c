/* --------------------------- */
//  Student:    Michel Baartman
//  StuNummer:  1696929
//  Docent:     Jorn Bunk
//  Opdracht:   week 5 opdracht 3
/* --------------------------- */

#include "queue.h"

/*! \brief init_queue
 *  resets queue to default.
 */
void init_queue(Queue* pq)
{
	printf("\ninit_queue...");
	pq->tail = -1;
	pq->head = 0;
}

/*! \brief enqueue
 *  adds something at the back of the queue.
 */
void enqueue(Queue* pq, int data)
{
	printf("\nenqueue +[%d]...", data);
	(pq->tail) ++; // moves pointer 1 step ahead
	pq->a[pq->tail] = data; // puts data at the head of queue
}

/*! \brief dequeue
 *  removes something at the fronth of the queue.
 */
int dequeue(Queue* pq)
{
	int data = pq->a[pq->head];
	printf("\ndequeue -[%d]...", data);
	//pq->head += 1; // causes memory leak
	for(int i = (pq->head); i <= pq->tail; i++){
		pq->a[i] = pq->a[i+1];
	}
	pq->tail --;
	return data;
}

/*! \brief show
 *  shows current queue
 */
void show(Queue q)
{
	printf("\nshow...");
	if(q.tail > -1){
		printf("[%d]", (q.a)[q.head]);
		for(int i = (q.head)+1; i <= q.tail; i++){
			printf("[%d]", q.a[i]);
		}
	} else {
		puts("empty queue");
	}
}
