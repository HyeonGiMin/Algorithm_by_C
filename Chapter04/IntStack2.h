//
// Created by Min on 2019-08-30.
//

#ifndef PR_INTSTACK2_H
#define PR_INTSTACK2_H

enum { StackA, StackB };

typedef struct {
    int max;
    int ptrA;
    int ptrB;
    int *stk;
} IntStack;

int Initialize(IntStack *s, int max);

int Push(IntStack *s, int sw, int x);

int Pop(IntStack *s, int sw, int *x);

int Peek(const IntStack *s, int sw, int *x);

void Clear(IntStack *s, int sw);

int Capacity(const IntStack *s);

int Size(const IntStack *s, int sw);

int IsEmpty(const IntStack *s, int sw);

int IsFull(const IntStack *s);

int Search(const IntStack *s, int sw, int x);

void Print(const IntStack *s, int sw);

void Terminate(IntStack *s);

#endif //PR_INTSTACK2_H
