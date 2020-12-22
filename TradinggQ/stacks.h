#ifndef STACKS_H_INCLUDED
#define STACKS_H_INCLUDED
#include "trade.h"

typedef struct _trading_queue_ TradinggQ;

struct _trading_queue_{
    char name[40];
    char date[15];
    int32_t price;
    int32_t quantity;
};

typedef struct _queue_ Queue;

struct _queue_ {
    uint32_t size;
    uint32_t count;
    uint32_t rear;
    uint32_t front;
    int32_t data[Q_LEN];


};

Queue queue_new(uint32_t size);
uint8_t queue_fl(Queue, *q);
uint8_t queue_em(Queue, *q);
Queue* queue_ad(Queue *q, TradinggQ share, QueueResult *res);
Queue *queue_del(Queue *q, QueueResult *res);
Queue *look_up(Queue *q, TradinggQ share);
Queue *topup(Queue *q, TradinggQ share, int32_t quantity);
uint32_t queue_length(Queue, *q);

#endif // STACKS_H_INCLUDED
