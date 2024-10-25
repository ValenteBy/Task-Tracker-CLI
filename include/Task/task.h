#ifndef LIST_H
#define LIST_H

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
        void setId(long long id);
        long long getId();
        void setDescription(std::string description);
        std::string getDescription();
        void setStatus(std::string status);
        std::string getStatus();
        void setCreatedAt(std::string createdAt);
        std::string getCreatedAt();
        void setUpdatedAt(std::string updatedAt);
        std::string getUpdatedAt(); 
        
        bool createTask();

};

#endif