#include <iostream>
using namespace std;

class Leg {
    public:
        Leg() {
            cout << "Make Leg." << endl;
        }
        virtual void action() = 0;
};

class Arm {
    public:
        Arm() {
            cout << "Make Arm." << endl;
        }
        virtual void action() = 0;
};

class Body {
    public:
        Body() {
            cout << "Make Body." << endl;
        }
        virtual void action() = 0;
};

class Head {
    public:
        Head() {
            cout << "Make Head." << endl;
        }
        virtual void action() = 0;
};

class RobotLeg: public Leg {
    public:
        RobotLeg() {
            cout << "Make Robot Leg." << endl;
        }
        void action() {
            cout << "Robot Leg moves." << endl;
        }
};

class RobotArm: public Arm {
    public:
        RobotArm() {
            cout << "Make Robot Arm." << endl;
        }
        void action() {
            cout << "Robot Arm moves." << endl;
        }
};

class RobotBody: public Body {
    public:
        RobotBody() {
            cout << "Make Robot Body." << endl;
        }
        void action() {
            cout << "Robot Body moves." << endl;
        }
};

class RobotHead: public Head {
    public:
        RobotHead() {
            cout << "Make Robot Head." << endl;
        }
        void action() {
            cout << "Robot Head moves." << endl;
        }
};

class AnimalLeg: public Leg {
    public:
        AnimalLeg() {
            cout << "Make Animal Leg." << endl;
        }
        void action() {
            cout << "Animal Leg moves." << endl;
        }
};

class AnimalArm: public Arm {
    public:
        AnimalArm() {
            cout << "Make Animal Arm." << endl;
        }
        void action() {
            cout << "Animal Arm moves." << endl;
        }
};

class AnimalBody: public Body {
    public:
        AnimalBody() {
            cout << "Make Animal Body." << endl;
        }
        void action() {
            cout << "Animal Body moves." << endl;
        }
};

class AnimalHead: public Head {
    public:
        AnimalHead() {
            cout << "Make Animal Head." << endl;
        }
        void action() {
            cout << "Animal Head moves." << endl;
        }
};