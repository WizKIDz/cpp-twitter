//
//  Tweet.h
//  TwitterRESTInterface
//
//  Created by austin crane on 9/18/15.
//  Copyright (c) 2015 OzDreams. All rights reserved.
//

#ifndef __TwitterRESTInterface__Tweet__
#define __TwitterRESTInterface__Tweet__

#include <stdio.h>
#include <json/json.h>
#include "TwitterUser.h"


class Tweet{
    
public:
    Tweet():t_id(0),t_text(""),t_retweeted(false),t_retweets(0){};
    // Constructors
    // Accessors
    std::string get_text();
    // Setters
    void set_text(std::string text);
private:
    int t_id;
    std::string t_text;
    bool t_retweeted;
    int t_retweets;
};

#endif /* defined(__TwitterRESTInterface__Tweet__) */
