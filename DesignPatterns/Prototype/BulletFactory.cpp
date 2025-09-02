#include "BulletFactory.hpp"

BulletFactory::BulletFactory(){
    m_bullets[SIMPLE] = make_unique<SimpleBullet>("Simple Bullet", 50, 75, 75);
    m_bullets[GOOD]   = make_unique<GoodBullet>("Good Bullet", 75, 100, 100);
}

unique_ptr<Bullet> BulletFactory::createBullet(BulletType bulletType){
    return m_bullets[bulletType]->clone();
}