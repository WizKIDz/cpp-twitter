//
//  TwitterUser.h
//  TwitterRESTInterface
//
//  Created by austin crane on 9/18/15.
//  Copyright (c) 2015 OzDreams. All rights reserved.
//

#ifndef __TwitterRESTInterface__TwitterUser__
#define __TwitterRESTInterface__TwitterUser__

#include <stdio.h>
#include "JSON.h"
#include "Tweet.h"

class TwitterUser {
    
public:
    TwitterUser(){};
    TwitterUser(JSON user);
    std::string get_description();
    std::string get_screen_name();
    std::string set_name();
    bool tweet(Tweet t);
private:
    std::string t_description;
    std::string t_screen_name;
    std::string t_name;
    int t_tweet_count;
    int t_followers;
    int t_followings;
    int t_favorites;
};
#endif /* defined(__TwitterRESTInterface__TwitterUser__) */
