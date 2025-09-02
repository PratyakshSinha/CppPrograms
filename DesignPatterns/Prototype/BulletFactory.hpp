#ifndef BULLETFACTORY_H
#define BULLETFACTORY_H

#include <iostream>
#include <unordered_map>
#include <memory>
#include "Bullet.hpp"

using namespace std;

enum BulletType {
    SIMPLE,
    GOOD
};

class BulletFactory {
private:
    unordered_map<BulletType, unique_ptr<Bullet>, hash<int>> m_bullets;

public:
    BulletFactory();
    unique_ptr<Bullet> createBullet(BulletType bulletType); 
};
#endif