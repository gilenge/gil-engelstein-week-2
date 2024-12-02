#include <string>
#include "page.h"

void Page::init()
{
	_status = "";
	_posts = "";
}
std::string Page::getPosts() const
{
	return _posts;
}
std::string Page::getStatus() const
{
	return _status;
}
void Page::clearPage()
{
	_posts = "";
}
void Page::setStatus(const std::string status)
{
	_status = status;
}
void Page::addLineToPosts(const std::string new_line)
{
	_posts += "\n" + new_line;
}