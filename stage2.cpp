//filters files
#include "pipeline.h"// shared project definitions
#include <sys/stat.h>//lstat and file metadata
#include <iostream> //error output
#include <cerrno>//error info
#include <cstring>//error description

//stage 2- file filtering

void stage2(
    BoundedBuffer<PathRecord>& buffer1,//input buffer
    BoundedBuffer<PathRecord>& buffer2,//output buffer
    const Config& config,//filer fitler settings
    std::atomic<bool>& hadError//shared error flag
)
{

    //repetivly retrive the records from buffer1
    //check i teh tretired record is END
    //forward END to buffer 2 when tis finished
    //retrieve file metadata using lstat()
    //reprot lstat error and continue processing
    //skip files that are not regular files
    //apply the file size fitler, apply UID filter, GID filer if enables
    //forward eligible files to buffer 2

    //temp placehodlers
    (void)buffer1;
    (void)buffer2;
    (void)config;
    (void)hadError;
}