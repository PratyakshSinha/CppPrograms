#include <iostream>
using namespace std;

class GameSettings
{
private:
    static GameSettings *_instance;
    int _brightness;
    int _width;
    int _height;
    GameSettings() : _width(1920), _height(1080), _brightness(75) {}

public:
    static GameSettings *getInstance()
    {
        if (_instance == nullptr)
        {
            _instance = new GameSettings();
        }
        return _instance;
    }
    void setWidth(int width){_width = width;}
    void setHeight(int height){_height = height;}
    void setBrightness(int brightness){_brightness = brightness;}

    int getWidth() const{return _width;}
    int getHeight() const{return _height;}
    int getBrightness() const{return _brightness;}

    void displaySettings() const
    {
        cout << "Width: " << _width << endl;
        cout << "Height: " << _height << endl;
        cout << "Brightness: " << _brightness << endl << endl;
    }
};

GameSettings * GameSettings::_instance = nullptr;

void randomMethod() {
    GameSettings* settings = GameSettings::getInstance();
    settings->displaySettings();
}

int main() {
    GameSettings *settings = GameSettings::getInstance();
    settings->displaySettings();
    settings->setBrightness(100);

    randomMethod();

    return 0;
}