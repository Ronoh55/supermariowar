#ifndef PLAYER_WARPSTATUS
#define PLAYER_WARPSTATUS

class CPlayer;
struct Warp;

class PlayerWarpStatus
{
public:
    void update(CPlayer& player);
    void enterWarp(CPlayer& player, Warp* warp);

    short getWarpPlane();

private:
    void increasewarpcounter(CPlayer& player, short iGoal);
    void decreasewarpcounter(CPlayer& player);
    void chooseWarpExit(CPlayer& player);

    short warpcounter;
    short warpconnection;
    short warpid;
    short warpplane;
};

#endif // PLAYER_WARPSTATUS
