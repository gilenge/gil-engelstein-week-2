#pragma once
#include <string>
#include "profile.h"
#include "UserList.h"


void Profile::init(User owner)
{
	_owner = owner;
}
void Profile::clear()
{
	// _owner = nullptr; 
}
User Profile::getOwner()
{
	return _owner;
}
void Profile::setStatus(std::string new_status)
{
	_page.setStatus(new_status);
}
void Profile::addPostToProfilePage(std::string post)
{
	_page.addLineToPosts(post);
}
void Profile::addFriend(User friend_to_add)
{
	_friendsList.add(friend_to_add);
}
std::string Profile::getPage()
{
	return
		"user's status: " + _page.getStatus() + "\n" +
		"******************** \n****************** \n" +
		_page.getPosts();
}
//std::string Profile::getFriends()
//{
//	UserList* curr = &_friendsList;
//	std::string friendsList = "";
//	while (curr != nullptr)
//	{
//		std::string newFriend = curr->get_first()->get_data().getUserName();
//		
//	}
//}
std::string Profile::getFriendsWithSameNameLength()
{
	return "";
}