#ifndef PLAYERINFO_H
#define PLAYERINFO_H

#include <iostream>

class Player {
public:
    std::string name;
    std::string college;
    std::string hometown;
    int height;
    int weight;
    int ppg;
    int rpg;
    int apg;
    int sos;
    int threeptpct;
    int freethrpct;
    int fgpct;

    std::string PersonalInfo() {
        return "The player named " + name + " went to " + college + " and is from " + hometown + ".";
    }

    std::string StatsInfo() {
        std::string strheight = std::to_string(height);
        std::string strweight = std::to_string(weight);

        return "This player is " + strheight + " inches tall and weighs " + strweight + " pounds.";
    }
};

#endif