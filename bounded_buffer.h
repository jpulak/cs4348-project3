//shared producer-consumer synchronization
#ifndef BOUNDED_BUFFER_H
#define BOUNDED_BUFFER_H

#include <queue> //store records in FIFO
#include <mutex> //mutual exclusion
#include<condition_variable>// threads wait
#include<cstddef> //for size_t

//template for buffer to store different record types
template <typename T>
class BoundedBuffer
{
    private:

    size_t capacity; //max number of records allowed
    std::queue<T> buffer; //store records in FIFO
    std::mutex mtx; //protect shared buffer
    std::condition_variable notFull;//producer wait here
    std::condition_variable notEmpty; //consumers wait here

    public:
    //constructor recieves the max buffer capacity

    explicit BoundedBuffer(size_t size) : capacity(size)
    {

    }
    //add one record to buffer 

    void push(const T& item){
        //aquire buffer mutex, wait till buffer is not full, then isnert item into queue
        //release mutex and then notify wating consumer
        (void)item; //temp placeholder
    }
    //remove and return oldest record
    T pop(){
        //aquire buffer mutex, wait till buffer isnt empty
        //retrieve front record, remove front record
        //release mutix, notify waiting producer
        //return retrieved record

        return T{}; //temp placeholder
    }
};


#endif