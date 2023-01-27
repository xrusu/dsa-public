#ifndef DSA_PUBLIC_TODO_H
#define DSA_PUBLIC_TODO_H

#include <string>
#include "../util/utils.h"

class ToDo {
private:
    unsigned int id;
    std::string description;
    bool isDone;

public:
    ToDo(std::string description, bool isDone);

    [[nodiscard]] unsigned int getId() const;

    std::string getDescription();

    [[nodiscard]] bool getIsDone() const;

    void setDescription(std::string newDescription);

    void setDone();

    void setUndone();
};


#endif //DSA_PUBLIC_TODO_H
