//acquires filenames
#include "pipeline.h"//shared project definitoin
#include <dirent.h> //directory operation
#include <iostream> //error output
#include <cerrno>//error info
#include <cstring>//error descripton

//stage 1- filename acquisition
void stage1(
    BoundedBuffer<PathRecord>& buffer1,//output buffer
    std::atomic<bool>& hadError//shared error flag
)

{
    //open the current working directory with opendir(".")
    //check if the opening failed
    //read directory using readdir()
    //skip '.' and '..' directory entires
    //create pathrecord for each candidate
    //prefix every candidate filename with './'
    //push each candidate into buffer1
    //detect and report directory enumeration errors
    //close directory
    //send end record to buffer1


    //temp placeholder
    (void)buffer1;
    (void) hadError;
}