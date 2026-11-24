//print resutl and match count
#include "pipeline.h" //shared project definition
#include <iostream>//standard output
#include <cstddef>//size_t

//stage 5- output

void stage5(
    BoundedBuffer<LineRecord>& buffer4//input buffer
)

{
    size_t matchCount =0;//number of matching lines printed

    //repetedly retrieve the records from buffer 4
    //check fi the retreid record is END
    //print each matching record to requirerd format
    //increment matchCount once per printed line
    //Stope consuming reocrds afer END arrives
    //print final summary exactly once

    //temp placehodler
    (void)buffer4;
    (void)matchCount;
}