//filters matching lines

#include "pipeline.h"//shared project definition
#include <string>//string searching 

//stage 4- line filetring

void stage4(
    BoundedBuffer<LineRecord>& buffer3,//input buffer
    BoundedBuffer<LineRecord>& buffer4,//output buffer
    const Config& config//search settings
)

{
    //repetedly retrive the records from buffer3
    //check whether the retrieved record is END
    //forward END to buffer4 when finished
    //searhc line for ocnfig.searchText
    //use std::string::find for literal matching
    //forward mwatching linerecords to buffer 4
    //discard nonmatching lines

    (void)buffer3;
    (void)buffer4;
    (void)config;
}