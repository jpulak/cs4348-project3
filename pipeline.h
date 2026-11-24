// shared variables, structures and function declarations

#ifndef PIPELINE_H
#define PIPELINE_H

#include <string>//std::string
#include <atomic>// threadsafe error flag
#include <cstddef>  //size_t
#include "bounded_buffer.h"// boudned buffer class

//validated command line args
struct Config
{
    size_t buffsize = 0;// capacity of each buffer
    long long filesize = -1;//min file size 
    long long uid = -1;//required user id
    long long gid = -1;//required group id
    std::string searchText;//substring to search for
};

//distinguish normal data from completion records
enum class RecordType
{
    DATA, //normal
    END   //no more records arrive
};

//record type used by Buffer 1 and buffer 2
struct PathRecord
{
    RecordType type = RecordType::DATA; //record category
    std::string filename; //relative filename beginning with ./
};

//record type used by buffer 3 and 4
struct LineRecord
{
    RecordType type = RecordType::DATA;//record category
    std::string filename;//file name
    size_t lineNumber = 0;// line number in file
    std::string text; //original contents
};

//validate and store command line args
bool parseArguments(
    int argc,//number of args
    char* argv[],//values of arg
    Config& config,//store validated args
    std::string& errorMessage//store validation errors
);

//stage 1- acquire filenames
void stage1(
    BoundedBuffer<PathRecord>& buffer1,//output buffer
    std::atomic<bool>& hadError// shared error flag
);

//stage 2- filters files
void stage2(
    BoundedBuffer<PathRecord>& buffer1,//input buffer
    BoundedBuffer<PathRecord>& buffer2,//output buffer
    const Config& config,//file filter settings
    std::atomic<bool>& hadError//shared error flag
);

//stage 3- generate lines
void stage3(
    BoundedBuffer<PathRecord>& buffer2,//input buffer
    BoundedBuffer<LineRecord>& buffer3,// output buffer
    std::atomic<bool>& hadError//shared error flag
);

//stage 4- filter matching lines
void stage4(
    BoundedBuffer<LineRecord>& buffer3,//input buffer
    BoundedBuffer<LineRecord>& buffer4,// out buffer
    const Config& config//search settings
);

//stage 5- prints results
void stage5(
    BoundedBuffer<LineRecord>& buffer4 //input buffer
);

#endif
