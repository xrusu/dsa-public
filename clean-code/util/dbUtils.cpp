#include "dbUtils.h"


void DbUtils::addToDo(const ToDo &toDo) {
    this->toDoList.push_back(toDo);
}

void DbUtils::deleteToDoById(unsigned int id) {
    for (int i = 0; i < this->toDoList.size(); i++) {
        if (this->toDoList[i].getId() == id) {
            this->toDoList.erase(this->toDoList.begin() + i);
            return;
        }
    }
}

std::vector<ToDo> DbUtils::getToDoList() {
    return this->toDoList;
}

ToDo DbUtils::getToDoById(unsigned int id) {
    for (auto &i: this->toDoList) {
        if (i.getId() == id) {
            return i;
        }
    }
    throw std::invalid_argument("No to-do with this id");
}

std::vector<ToDo> DbUtils::getDone() {
    std::vector<ToDo> done;
    for (auto &i: this->toDoList) {
        if (i.getIsDone()) {
            done.push_back(i);
        }
    }
    return done;
}

std::vector<ToDo> DbUtils::getUnDone() {
    std::vector<ToDo> undone;
    for (auto &i: this->toDoList) {
        if (!i.getIsDone()) {
            undone.push_back(i);
        }
    }
    return undone;
}

void DbUtils::markAsDone(unsigned int id) {
    this->getToDoById(id).setDone();
}

void DbUtils::markAsUndone(unsigned int id) {
    this->getToDoById(id).setUndone();
}

void DbUtils::editDescription(unsigned int id, std::string newDescription) {
    this->getToDoById(id).setDescription(std::move(newDescription));
}

void DbUtils::getDescription(unsigned int id) {
    std::cout << this->getToDoById(id).getDescription() << std::endl;
}
