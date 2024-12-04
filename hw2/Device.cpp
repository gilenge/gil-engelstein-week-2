#include <iostream>
#include <string>
#include "Device.h"

void Device::init (unsigned int id, DeviceType type, std::string os)
{
	this->_os = os;
	this->_id = id;
	this->_type = type;
	this->_active = true;
}

unsigned int Device::getID() const
{
	return _id;
}
DeviceType Device::getType() const
{
	return _type;
}
std::string Device::getOS() const
{
	return _os;
}
bool Device::isActive() const
{
	return _active;
}
void Device::activate()
{
	_active = true;
}
void Device::deactivate()
{
	_active = false;
}