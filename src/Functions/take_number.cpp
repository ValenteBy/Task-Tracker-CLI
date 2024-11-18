#include <include/Functions/take_number.h>

bool taskCli::is_number(std::string& number){
    
    for(char c : number)
    {
        if(!std::isdigit(c))
        {
            return false;
        }
    }
    return true;
}

