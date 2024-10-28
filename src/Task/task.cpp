#include "include/Task/task.h"

#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

Task::Task(){}

void Task::setId(long long idSet){
    id = idSet;
}

long long Task::getId(){
    return id;
}

void Task::setDescription(std::string descriptionSet){
    description = descriptionSet;
}

std::string Task::getDescription(){
    return description;
}
void Task::setStatus(std::string statusSet){
    status = statusSet;
}
std::string Task::getStatus(){
    return status;
}
void Task::setCreatedAt( ){
    createdAt = string(__DATE__) + " " + string(__TIME__);
}
std::string Task::getCreatedAt(){
    return createdAt;
}
void Task::setUpdatedAt(std::string updatedAtSet){
    updatedAt = updatedAtSet;
}
std::string Task::getUpdatedAt(){
    return updatedAt;
}

bool Task::createTask(){
    json newData;
    newData["Id"] = 1;
    newData["Description"] = getDescription();
    newData["Status"] = getStatus();
    newData["CreateAt"] = getCreatedAt();
    newData["UptadeAt"] = newData["CreateAt"];
 }
 //Criar funcao para armazenar esse JSON