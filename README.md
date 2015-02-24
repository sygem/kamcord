kamcord
=======

[Kamcord] module for [MonkeyX].

Supported Targets
-----------------
- iOS

Installation Instructions
-------------------------

###iOS
- First, sign up for a developer account with [Kamcord]
- Get a new key from the Developer Dashboard, fill in the game details
- Download the SDK, copy the framework into your XCode project

Usage Example
-------------
###Preprocessor directives
```
#KAMCORD_DEV_KEY = "Your Dev Key"
#KAMCORD_DEV_SECRET = "Your Dev Secret"
#KAMCORD_APP_NAME = "Your app name"
```

###Start Recording
```
Kamcord.GetInstance().StartRecording()
```

###Set Metadata
```
Kamcord.GetInstance().StopRecording()
Kamcord.GetInstance().SetLevelAndScore(GetDifficulty(),score)
Kamcord.GetInstance().SetVideoTitle("Beat This! - "+score+" points on "+GetDifficulty()+" Mode")
Kamcord.GetInstance().SetDefaultTweet("Watch me play Beat This! - Can you #BeatThis?")
Kamcord.GetInstance().SetTwitterDescription("Keep your balls up with Beat This! http://beatthis-game.com")
Kamcord.GetInstance().SetFacebookDescription("Keep your balls up with Beat This! http://beatthis-game.com")
Kamcord.GetInstance().SetDefaultEmailSubject("Watch me play Beat This! - Can you Beat This?")
Kamcord.GetInstance().SetDefaultEmailBody("Keep your balls up with Beat This! http://beatthis-game.com")
Kamcord.GetInstance().SetYouTubeDescription("I scored "+score+" points on "+GetDifficulty()+"/"+GetMode()+" Mode","beatthis,physics,balls,game")
```

###Show Kamcord View
```
Kamcord.GetInstance().ShowView()
```

Version
-------
0.1a

[MonkeyX]:http://http://www.monkey-x.com/   
[Kamcord]:https://www.kamcord.com/

