#include <iostream>
#include <string>

int main(int argc, char* argv[]){

    if(argc < 2)
    {
        std::cerr << "Use: " << argv[0] << "<comand>" << std::endl;//Apresentar como se deve usar o comando
        return 1; //retornar erro 
    }
    
    if(argc == 2)
    {
        if(argv[2] == "list")
        {
            //ACESSAR E PRINTAR TODAS AS LISTS SEPARAS
        }
        else if(argv[2] == "help" || argv[2] == "--h")
        {
            //print help comands
        }
        else
        {
            //cerr
        }
    }

    if(argc == 3){
        if(argv[2] == "list"){
            if(argv[3] == "todo"){
                //todo
            }else if(argv[3] == "done"){
                //todo
            }else if(argv[3] == "in-progress"){
                //todo
            }else{
                //cerr
            }
        }
        else if(argv[2] == "upadete"){
            //action update for task
            try{

            } catch{
                //cerr
                //return 1;
            }
        }
    }



    return 0;
}