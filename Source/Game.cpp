#include <SFML/Graphics.hpp>
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/Game.h"
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/LP.h"
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/Playscene.h"
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/Titlescene.h"
#include "/home/bryce/Documents/SFML/SFML_First_Project/Headers/Input.h"
using namespace sf;

Scene* Game::scene;

Game::Game()
{
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
    //Input::Update();
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