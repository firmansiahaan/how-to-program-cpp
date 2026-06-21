// Fig. 19.16: Queue.h
// Queue class-template definition.
#ifndef QUEUE_H
#define QUEUE_H#pragma once

#include "List.h" // List class definition

template< typename QUEUETYPE >
class Queue : private List < QUEUETYPE> {
public:
	// enqueue calls List member function insertAtBack
	void enqueue(const QUEUETYPE& data) {
		insertAtBack(data);
	}

	// dequeue calls List member function removeFromFront
	bool dequeue(QUEUETYPE & data) {
		return removeFromFront(data);
	}

	// isQueueEmpty calls List member function isEmpty
	bool isQueueEmpty() const {
		return this->isEmpty();
	}

	// printQueue calls List member function print
	void printQueue() const {
		this->print();
	}
};

#endif