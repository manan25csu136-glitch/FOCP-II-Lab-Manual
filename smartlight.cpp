#include <iostream>
using namespace std;

class SmartLight
{
private:
    string brand;
    int brightness;   
    bool On;

public:


    SmartLight()
    {
        brand = "DefaultBrand";
        brightness = 50;
        On = false;   
    }


    SmartLight(string b, int br, bool state)
    {
        brand = b;
        brightness = br;
        On = state;
    }

    
    void turnOn()
    {
        On = true;
        cout <<brand <<" light is On\n";
    }

    
    void turnOff()
    {
        On = false;
        cout << brand <<" light is Off\n";
    }

    
    void increaseBrightness(int value)
    {
        brightness += value;
        if (brightness > 100)
            brightness = 100;

        cout << brand << " brightness increased to " << brightness << endl;
    }

    
    void decreaseBrightness(int value)
    {
        brightness -= value;
        if (brightness < 0)
            brightness = 0;

        cout << brand << " brightness decreased to " << brightness << endl;
    }


    void display()
    {
        cout << "\nBrand: " << brand;
        cout << "\nBrightness: " << brightness;
        cout << "\nStatus: " << (On ? "ON" : "OFF") << endl;
    }
};

int main()
{
    
    SmartLight light1;

    
    SmartLight light2("Philips", 80, true);

    
    cout << "\n Light 1";
    light1.display();
    light1.turnOn();
    light1.increaseBrightness(20);
    light1.decreaseBrightness(10);
    light1.display();

    
    cout << "\n Light 2 ";
    light2.display();
    light2.turnOff();
    light2.decreaseBrightness(30);
    light2.increaseBrightness(10);
    light2.display();

    return 0;
}




