#include "toDo.h"

#include <utility>

ToDo::ToDo(std::string description, bool isDone) {
    this->id = Utils::generateId();
    this->description = std::move(description);
    this->isDone = isDone;
}

unsigned int ToDo::getId() const {
    return this->id;
}

std::string ToDo::getDescription() {
    return this->description;
}

bool ToDo::getIsDone() const {
    return this->isDone;
}

void ToDo::setDescription(std::string newDescription) {
    this->description = std::move(newDescription);
}

void ToDo::setDone() {
    this->isDone = true;
}

void ToDo::setUndone() {
    this->isDone = false;
}
