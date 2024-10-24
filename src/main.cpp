#include <iostream>
#include <string>

int main(int argc, char* argv[]){

    if(argc < 2){
        std::cerr << "Uso: " << argv[0] << "<comando>" << std::endl;//Apresentar como se deve usar o comando
        return 1; //retornar erro 
    }
    


    return 0;
}