//prints results and match count
#include "pipeline.h"//shared porject definition
#include <fstream> //file reading
#include <iostream> // error output
#include <string>// provide dynamically sized strings

//stage 3- line generation

void stage3(
    BoundedBuffer<PathRecord>& buffer2, // Input buffer
    BoundedBuffer<LineRecord>& buffer3, // Output buffer
    std::atomic<bool>& hadError         // Shared error flag
)

{

    //repetively retrieve records from buffer 2
    //check if the retrieved record is END
    //forward END LineRecord when finished
    //open each eligible file
    // report file opening errors and continue
    //start line nubmering at 1 for each file
    //read each line suign std::getline()
    //create linerecord contaiing filename, line nubmer and original line text
    //push linerecord into buffer3
    //increment line nubmer
    //detect and report actual file read errors
    //clsoe fiel or stream close automatically 


    //temp placeholders
    (void)buffer2;
    (void)buffer3;
    (void)hadError;
}