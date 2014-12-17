#include "Computer.h"

Computer::Computer(){ processorSpeed = 0; }
Computer::~Computer(){}
void Computer::setSpeed(int p){ processorSpeed = p; }
int Computer::readSpeed(){ return processorSpeed; }