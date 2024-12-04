#pragma once
#include <string>
#include "profile.h"
#include "UserList.h"



void Profile::init(const User& owner)
{
	this->_owner = owner;
	this->_page = new Page();
	this->_page.init();
	this->_friendsList = new UserList();
	this->_friendsList.init();
}

void Profile::clear()
{
	_friendsList->clear();
	delete _page;
	delete _friendsListss;
}

User Profile::getOwner() const
{
	return _owner;
}
void Profile::setStatus(const std::string new_status)
{
	_page.setStatus(new_status);
}
void Profile::addPostToProfilePage(const std::string post)
{
	_page.addLineToPosts(post);
}
void Profile::addFriend(const User friend_to_add)
{
	_friendsList.add(friend_to_add);
}
std::string Profile::getPage()const
{
	return
		"user's status: " + _page.getStatus() + "\n" +
		"******************** \n****************** \n" +
		_page.getPosts();
}
//std::string Profile::getFriends() const
//{
//	UserList* curr = &_friendsList;
//	std::string friendsList = "";
//	while (curr != nullptr)
//	{
//		std::string newFriend = curr->get_first()->get_data().getUserName();
//		
//	}
//}

std::string Profile::getFriendsWithSameNameLength() const
{
	return " "; //
}