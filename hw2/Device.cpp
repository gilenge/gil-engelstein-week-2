#include <iostream>
#include <string>
#include "Device.h"

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
void Device::init(unsigned int id, DeviceType type, std::string os)
{
	_os = os;
	_id = id;
	_type = type;
	_active = true;
}
