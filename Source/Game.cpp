#include <SFML/Graphics.hpp>
#include "/home/bryce/Documents/SFML/SFML_Base_Project/Headers/Game.h"
#include "/home/bryce/Documents/SFML/SFML_Base_Project/Headers/LP.h"
#include "/home/bryce/Documents/SFML/SFML_Base_Project/Headers/Playscene.h"
#include "/home/bryce/Documents/SFML/SFML_Base_Project/Headers/Titlescene.h"
#include "/home/bryce/Documents/SFML/SFML_Base_Project/Headers/LoadImage.h"
using namespace sf;

Scene* Game::scene;

Game::Game()
{
    LoadImage::Load();
    scene = new Titlescene();
}

Game::~Game()
{
    delete scene;
}

void Game::Init()
{
}

void Game::Update()
{
    scene->Update();
}

void Game::Draw()
{
    scene->Draw();
}

void Game::ChangeScene(Scene* newScene)
{
    delete scene;
    scene = newScene;
    scene->Init();
}