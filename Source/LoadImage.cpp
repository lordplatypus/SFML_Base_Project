#include <iostream>
#include <SFML/Graphics.hpp>
#include "/home/bryce/Documents/SFML/SFML_Base_Project/Headers/LoadImage.h"
#include "/home/bryce/Documents/SFML/SFML_Base_Project/Headers/LP.h"
using namespace std;

int LoadImage::wolf;
vector<int> LoadImage::wolfAnimation;

LoadImage::LoadImage()
{}

LoadImage::~LoadImage()
{}

void LoadImage::Load()
{
    wolf = LP::SetTexture("/home/bryce/Documents/SFML/SFML_Base_Project/Images/80x48Wolf_FullSheet.png", 640, 288);
    wolfAnimation = LP::SetSprite(80, 48, 8, 6, LoadImage::wolf);
}