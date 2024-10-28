#ifndef TASK_H
#define TASK_H

#include <string>

class Task {

    private:
        long long id;
        std::string description;
        std::string status;
        std::string createdAt;
        std::string updatedAt;

    public:

        Task();
        
        void setId(long long idSet);
        long long getId();
        void setDescription(std::string descriptionSet);
        std::string getDescription();
        void setStatus(std::string statusSet);
        std::string getStatus();
        void setCreatedAt();
        std::string getCreatedAt();
        void setUpdatedAt(std::string updatedAtSet);
        std::string getUpdatedAt(); 
        
        bool createTask();

};

#endif