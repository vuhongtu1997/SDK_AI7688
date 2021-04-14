/*
 *RingBuffer.h is algorithm to receive data efficiently
 */
#ifndef GATEWAYMANAGER_RINGBUFFER_H_
#define GATEWAYMANAGER_RINGBUFFER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
#include <stdbool.h>

/*Define ingredient of ringbuffer*/
typedef struct ringbuffer_t
{
	void *buffer;   // data buffer
	void *buffer_end; // end of data buffer
	size_t capacity; // maximum number of items in the buffer
	size_t count;   // number of items in the buffer
	size_t sz;    // size of each item in the buffer
	void *head;    // pointer to head
	void *tail;    // pointer to tail
} ringbuffer_t;

/*
 * Initiate ring buffer
 * - Dynamic memory allocation for ring buffer
 * - Delete data in ring buffer
 * - Define size
 * - Set point read and write
 *
 * @param cb point manage ring buffer
 * @param capacity max data in ring buffer
 * @param sz size of a item
 * @return true- success, false- fail
 */
bool ring_init(ringbuffer_t *cb, size_t capacity, size_t sz);

/*
 * Check data in ring buffer
 *
 * @param cb point manage ring buffer
 * @return true- empty, false- not empty
 */
bool ring_free(ringbuffer_t *cb);

/*
 * Push data to the head ring buffer
 *
 * @param cb point manage ring buffer
 * @param item data to the ring buffer
 * @return true- success,false- fail
 */
bool ring_push_head(ringbuffer_t *cb, const void *item);

/*
 * Pop data from the tail ring buffer
 *
 * @param cb point manage ring buffer
 * @param item data get
 * @return true- success, false- fail
 */
bool ring_pop_tail(ringbuffer_t *cb, void *item);

#ifdef __cplusplus
}
#endif
#endif
