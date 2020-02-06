#include <iostream>
#include <SFML/Graphics.hpp>
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/LoadImage.h"
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/LP.h"
using namespace std;

int LoadImage::wolf;

LoadImage::LoadImage()
{}

LoadImage::~LoadImage()
{}

void LoadImage::Load()
{
    wolf = LP::SetTexture("/home/bryce/Documents/SFML/SFML_First_Project/Images/80x48Wolf_FullSheet.png", 640, 288);
}