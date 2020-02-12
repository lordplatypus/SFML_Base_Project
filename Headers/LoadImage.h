#ifndef LOAD_IMAGE_H_
#define LOAD_IMAGE_H_
#include <iostream>
#include <vector>

class LoadImage
{
public:
    LoadImage();
    ~LoadImage();
    static void Load();
    static int wolf;
    static std::vector<int> wolfAnimation; 
};

#endif