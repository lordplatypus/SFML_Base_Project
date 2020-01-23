#ifndef TITLESCENE_H_
#define TITLESCENE_H_
#include "Scene.h"
#include "LP.h"

class Titlescene : public Scene
{
public:
    Titlescene(LP* lp);
    ~Titlescene() override;
    void Init() override;
    void Update() override;
    void Draw() override;

private:
    LP* lp;
};

#endif