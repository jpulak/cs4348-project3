// create buffers and threads, join threads, return exit status
#include <iostream>//error output
#include <thread> //std::thread
#include <atomic> //atomic vars
#include <functional> //std::ref
#include <cstdlib>//exit status constants
#include "pipeline.h" //shared project defitions

//program entry

int main(int argc, char* argv[]){

    Config config; //store command line setting

    std::string errorMessage; //store argument errors

    //validate args before creating the threads

    if(!parseArguments(argc, argv, config, errorMessage))
    {
        std::cerr<< errorMessage<<'\n';//print error

        return EXIT_FAILURE;//return the non zero fail status
    }

    //shared flag if eror occured
    std::atomic<bool> hadError(false);

    //buffer 1 connect stage 1 to stage 2
    BoundedBuffer<PathRecord> buffer1(config.buffsize);

    //buffer 2 connect stage 2 to stage 3
    BoundedBuffer<PathRecord> buffer2(config.buffsize);

    //buffer 3 connect stage 3 to stage 4
    BoundedBuffer<PathRecord> buffer3(config.buffsize);

    //buffer 4 connect stage 4 to stage 5
    BoundedBuffer<PathRecord> buffer4(config.buffsize);

    //create stage 1 worker thread, create stage 2 worker thread
    //create stage 3 worker thread, create stage 4 worker thread
    //create stage 5 worker thread
    //hand the thread creation failure, join all five worker thread
    //return non zero fi hadError is ture

    return EXIT_FAILURE; //temp placeholder
}