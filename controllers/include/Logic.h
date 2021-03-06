#include "models/include/Game.h"
#include "controllers/include/StartController.h"
#include "controllers/include/ContinueController.h"
#include "controllers/include/GameController.h"
#include "controllers/include/Controller.h"
#include "models/include/State.h"


class Logic
{
    public:
        Logic();
        Controller *getController();

    private:
        Game *game;
        StartController *startController;
        ContinueController *continueController;
        GameController *gameController;
};