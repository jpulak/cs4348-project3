//validates command line arguments
#include "pipeline.h" //config and func declaration
#include <limits> // provide numeric range info
#include <sys/types.h> // for uid_t and gid_t

// validate command line args
bool parseArguments(
    int argc,//number of args
    char* argv[],//arg values
    Config& config,//validated settings
    std::string& errorMessage //error descripton
)
{
    //check if argc is 6
    //validte argv[1] as positive buffer capacity
    //validate argv[2] as -1 or non negative file size
    //validate argv[3] as -1 or valid UID
    //validate argv[4] as -1 or valid GID

    //reject numeric overflow adn trailing character
    //check if argv[5] is not empty
    //store validated values in config
    //return true if all args is valid

    //temp placeholders
    (void)argc;
    (void) argv;
    (void) config;

    errorMessage= "Argument validation isnt implemented";
    return false; //temp placehodler
}

