#include <include/Functions/take_string.h>
#include <include/Functions/take_number.h>

#include <iostream>
#include <string>

int main(int argc, char* argv[]){

    if(argc < 2)
    {
        std::cerr << "Use: " << argv[0] << "<comand>" << std::endl; // Apresentar como se deve usar o comando
        return 1; // retornar erro 
    }
    
    if(argc == 2)
    {
        if(argv[2] == "list")
        {
            // ACESSAR E PRINTAR TODAS AS LISTS SEPARAS
        }
        else if(argv[2] == "--help" || argv[2] == "-h" || argv[2] == "-?")
        {
            // print help comands
        }
        else if(argv[2] == "--version" || argv[2] == "-v")
        {
            std::cerr << "\nVersion Alpha 0.1\n";
        }
        else if(argv[2] == "--author" || argv[2] || "MIAU")
        {
            // assinatura
            std::cout << "░░▄▄▄░░░░░░░░░░░░░░░░░░░░░░░░░░░░▄▄▄░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                         "░▄████▄░░░░░░░░░░Dan░░░░░░░░░░░▄▄████▄░░░░░░░░░░░░░░░░░░Samuel Valente░░░░░░░░░░░░\n"
                         "░██░▀▀███▄▄░▄▄▄████████▄▄▄░▄▄███▀░███░░░░░░░░░https://github.com/ValenteBy░░░░░░░░\n"
                         "░██░░░░░▀███████▀████▀▀██████▀░░░░███░░░░░░░░░/in/samuelvalentedeoliveira/░░░░░░░░\n"
                         "░██▄░░░░░░░░░▀█▀░███░░░██▀▀░░░░░░░██▀░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                         "░▀██▄▄░░░░░░░░░░░░▀░░░░▀░░░░░░░▄▄▄██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                         "░░▀██▀░░░░░░░░░░░░░░░░░░░░░░░░░▀███▀░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                         "░░▄██░░░░░░░░░░░░░░░░░░░░░░░░░░░░██▄░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                         "░░████▀░░███░░░░░░░░░░░░░░███░░█████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                         "░░███▀░░░█████░░░░░░░░░░█████░░░▀███░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                         "░░██░░░░░░▀▀▀▀░░░░░░░░░░▀▀▀▀░░░░░▀██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                         "▄▄███▄▄▄▄░░░░░░░░░░░░░░░░░░░░▄▄▄▄███▄▄░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                         "░▄▄██▄▄░░░▄█░░░░▄▀▀▀▀▄░░░░█▄░░░▄███▄▄░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                         "▀░░▄████▀▀▀▀░░░░░▀▄▄▀░░░░░▀▀▀▀████▄░░▀░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                         "░▄▀░░▀███▄▄░░░█▄▄█▀▀█▄▄▀░░░▄▄██▀░░░░░▀▄░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                         "░░░░░░░░▀███▄▄░░░░░░░░░░▄▄███▀░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                         "░░░░░░░░░░▀▀████▄▄▄▄▄▄████▀▀░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n"
                         "░░░░░░░░░░░░░░▀▀▀▀▀▀▀▀▀▀░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\n";

        }
        else
        {
            // cerr
        }
    }

    if(argc == 3)
    {
        if(argv[2] == "mark-in-progress")
        {
            // Recebe ID e modifica
        }
        else if(argv[2] == "mark-done")
        {
            // Recebe ID e marca como feita
        }
        else if(argv[2] == "delete")
        {
            // Criar function para tratar entrada mau recebida de inteiro
        }
        else if(argv[2] == "list")
        {
            if(argv[3] == "done")
            {

            }
            if(argv[3] == "todo")
            {

            }
            if(argv[3] == "in-progress")
            {

            }
        }
    }

    if(argc > 3)
    {
        // Criar function para pegar o resto de dos argv
        
        if(argv[2] == "add")
        {

            std::string name_task;
            bool is_string = false;
            for(int i = 3; i < argc; i++){
                std::string temp_string = argv[i];
                if('\"' == temp_string[0])
                {
                    is_string = 1;
                    // Trocar o nome dessa funçao
                    taskCli::get_string(name_task, temp_string);                    
                }
                else if(is_string)
                {
                    taskCli::get_string(name_task, temp_string);
                }
            }
        }
        else if(argv[2] == "update")
        {
            std::string temp_string = argv[3];
            int id_task;
            if(taskCli::is_number(temp_string))
            {
                id_task = stoi(temp_string);
            }
            else
            {
                std::cerr << "ID invalid" << std::endl 
                          << "Example: " << "add " << "1" << "\"my name task\"" << std::endl;
                return 1;
            }

            std::string name_task;
            bool is_string = false;
            for(int i = 4; i < argc; i++){
                std::string temp_string = argv[i];
                if('\"' == temp_string[0])
                {
                    is_string = 1;
                    // Trocar o nome dessa funçao
                    taskCli::get_string(name_task, temp_string);                    
                }
                else if(is_string)
                {
                    taskCli::get_string(name_task, temp_string);
                }
        }
    } 

    return 0;
}