//
//  main.cpp
//  bicycleFrame
//

#include <iostream>
#include <math.h>

using namespace std;

// bicycle class

struct BicycleFrame
{
    float bbstackHeight;
    float bbDrop;
    float chainStayLength;
    float drop;
    int forkRake;
    
    float frontForkStackHeight;
    float frontCenterLength;
    float headTubeLength;
    float headtubeAngle;
    float headtubeHeight;
    
    float reach;
    float rearCenterLength;
    float saddleToPedalDist;
    float seatTubeAngle;
    float seatingAngle;
    
    float seatTubeCenterToTop;
    float seatTubeHeight;
    float topTubeEffectiveLength;
    float topTubeLength;
    float wheelbaseDist;
    
    float steelTubeRadius;
    std::string	modelName;
 
    //constructor
    BicycleFrame(){
        cout << "Built a BikeFrame" << endl;
    }
};


// main funct
int main(int argc, const char * argv[])
{
    BicycleFrame bikeFrame = BicycleFrame();
    cout << "Total Cost in Memory " << sizeof( bikeFrame ) << " byte(s)." << endl;
    return 0;
}

