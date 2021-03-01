#ifndef __MINHEAP_H
#define __MINHEAP_H
#include<iostream>
#include<vector>

using namespace std;

template<typename T>
class MinHeap
{
public:
    MinHeap(T buff[], int length);
    MinHeap(int capacity);
    virtual ~MinHeap();
    int getSize();
    bool isFull();
    bool isEmpty();
    void swap(vector<T> &vec, int i , int j);
    void floating(int index);
    void sink(int index);
    void push(T data);
    void printfAll();

private:
    int m_iHeapCapacity;
    int m_iHeapSize;
    vector<T> m_vecData;
};

template <typename T>
MinHeap<T>::MinHeap(T buff[], int length)
{
    m_iHeapCapacity = length;
    m_iHeapSize = 0;
    m_vecData.resize(length);
    for(int i = 0; i < length; i++)
    {
        push(buff[i]);
    }
}

template <typename T>
MinHeap<T>::MinHeap(int capacity)
{
    m_iHeapCapacity = capacity;
    m_iHeapSize = 0;
    m_vecData.resize(capacity);
}

template <typename T>
MinHeap<T>::~MinHeap()
{

}

template <typename T>
int MinHeap<T>::getSize()
{
    return m_iHeapSize;
}

template <typename T>
bool MinHeap<T>::isFull()
{
    if(m_iHeapSize >= m_iHeapCapacity)
        return true;
    return false;
}

template <typename T>
bool MinHeap<T>::isEmpty()
{
    if(m_iHeapSize == 0)
        return true;
    return false;

}

template <typename T>
void MinHeap<T>::swap(vector<T> &vec, int i, int j)
{
    T temp = vec[i];
    vec[i] = vec[j];
    vec[j] = temp;
}

template <typename T>
void MinHeap<T>::floating(int index)
{
    T temp;
    for(int i = index; i > 0; i*=0.5)
    {
        if(m_vecData[i-1] < m_vecData[i*0.5 -1])
            swap(m_vecData, i-1, i * 0.5 -1);
        else
            break;
    }
}

template <typename T>
void MinHeap<T>::sink(int index)
{
    int i = index;
    while(i*2 <= m_iHeapSize)
    {
        if(m_vecData[i-1] < m_vecData[i*2-1])
        {
            swap(m_vecData, i-1; i*2-1);
            if(i*2 + 1 <= m_iHeapSize and m_vecData[i-1] > m_vecData[i*2])
                swap(m_vecData, i-1, i*2);
            i *= 2;
        }
        else if(i*2 +1 <= m_iHeapSize and m_vecData[i-1] > m_vecData[i*2])
    }
}

#endif