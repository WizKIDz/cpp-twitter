![Alt text](img/twittercppheading.png "Optional title")

# TwitterCpp

*Easy to use TwitterAPI client for tweet bots and data analysis*

## Twitter RestAPI Abstract

### Whats a Rest API?
A Rest API delivers and manipulates data to a client through http/https request much like you do everyday on your web browser. Rest stands for representational state transfer and is used primarily for web services. In most cases these web services are used by client applications for example: a mobile app, desktop app, and artificial intelligence. In my professional career I have implemented or created Rest APIs for the manipulation of data in a database in every project I have been a part of.


### What is API client?
A client for an API consumes the API and uses it as an interface for some service. In this case it will be used for manipulating tweets and mining data in twitters vast amount of interesting data. I will use my client to help me market services like software consulting and market analysis over a long span of time.


### My history of dealing with REST APIs
I have been apart of several projects such as:
- Shocker Shuttle Tracker App (WSU shuttle app)
- ASIDIC conference app
- Many websites
- A weather alarm clock app
- Other internal apps

All of these projects I had to learn to create a client for all of the web services that drove the data. In the early stages of learning how to make these clients it made my work very hard because I didn't know how it should work and I used this project to do more learning on how to design on  eproperly.

### What does twittercpp do?

In project Twittercpp can be used to manipulate and mine data for anything! While being written in c++ it will be strictly optimized to keep the data first and keep the need for  optimization negligible.

## TwitterCpp:  The insides

### The Data Models

#### Tweet Model

- tweet_ID : integer
- username : string
- text : string
- retweet : boolean
- retweets : integer


#### Twitter User


- screen_name : string
- bio : string
- folowers : integer
- following : integer
- favorites : integer


#### Twitter Place 


- address : string
- coordinates : struct coordinates
- bounding_box : struct box
- full_name : string
- name : string
- country_code : string
- country : string
 
 
 
## How To Use
 
 In order to use this project at its current development state:
 
 Create bindings for data models in python or some other langauge that allows the use of c++ bindings.
 
## What Needs Work?

In upcoming imporvments to twitter c++ there will be the following:
- Easy http extension to make requests to twitter without having to use your own http library
- Already created bindings for python
- Unit tests to check all instences of good and bad data

 
