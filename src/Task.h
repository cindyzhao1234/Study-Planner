#pragma once
#include <string>
#include <raylib.h>

struct Task{
    std::string taskDescription;
    bool completed = false;
    Color color = BLACK;
    int fontSize = 16;
    int taskHeight = 60;
    Rectangle deleteTask;
};