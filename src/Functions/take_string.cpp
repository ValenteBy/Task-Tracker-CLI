#include <include/Functions/take_string.h>

void taskCli::get_string(std::string& name_task, std::string& temp_string)
{

    for(int c = 0; c < temp_string.size(); c++)
    {
        name_task.push_back(temp_string[c]);
    }
    name_task.push_back(' ');

}