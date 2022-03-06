#include "AbstractFactory.cpp"

class ToyFactory {   
    public:
        virtual Leg* GetLeg() = 0;
        virtual Body* GetBody() = 0;
        virtual Head* GetHead() = 0;
        virtual Arm* GetArm() = 0;

        static ToyFactory* CreateFactory(string factory);   
};

class RobotFactory: public ToyFactory {
    public:
        Leg* GetLeg() {
            return new RobotLeg();
        }
  
        Body* GetBody() {
            return new RobotBody();
        }
        
        Head* GetHead() {
            return new RobotHead();
        }

        Arm* GetArm() {
            return new RobotArm();
        }
};

class AnimalFactory: public ToyFactory {
    public:
        Leg* GetLeg() {
            return new AnimalLeg();
        }
  
        Body* GetBody() {
            return new AnimalBody();
        }

        Head* GetHead() {
            return new AnimalHead();
        }

        Arm* GetArm() {
            return new AnimalArm();
        }
};

