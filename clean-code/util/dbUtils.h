#ifndef DSA_PUBLIC_DBUTILS_H
#define DSA_PUBLIC_DBUTILS_H

#include "../model/toDo.h"

class DbUtils {
private:
    std::vector<ToDo> toDoList = std::vector<ToDo>();
public:
    void addToDo(const ToDo &toDo);

    void deleteToDoById(unsigned int id);

    std::vector<ToDo> getToDoList();

    ToDo getToDoById(unsigned int id);

    std::vector<ToDo> getDone();

    std::vector<ToDo> getUnDone();

    void markAsDone(unsigned int id);

    void markAsUndone(unsigned int id);

    void editDescription(unsigned int id, std::string newDescription);

    void getDescription(unsigned int id);
};


#endif //DSA_PUBLIC_DBUTILS_H
