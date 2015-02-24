Strict

#if TARGET="ios"

Import "native/kamcord.ios.cpp"

Extern Private
Class KamcordMonkeyGlue
    Method Init:Void()
    Method StartRecording:Void()
    Method StopRecording:Void()
    Method Pause:Void()
    Method Resume:Void()
    Method ShowView:Void()
    Method ShowWatchView:Void()
    Method IsEnabled:Bool()
	
    Method SetFacebookAppID:Void(appID:String, sharedAuth:Bool = True)
    Method SetVideoFPS:Void(fps:Int)
    Method SetVideoTitle:Void(title:String)
    Method SetLevelAndScore:Void(level:String, score:Int)

    Method SetDefaultTweet:Void(tweet:String)
    Method SetTwitterDescription:Void(description:String)
    Method SetFacebookDescription:Void(description:String)
    Method SetDefaultEmailSubject:Void(subject:String)
    Method SetDefaultEmailBody:Void(body:String)
    Method SetYouTubeDescription:Void(description:String, tags:String)

    Method SetNotificationsEnabled:Void(enabled:Bool)
    Method FireTestNotification:Void()
	
End

#LIBS+="Accounts.framework"
#LIBS+="AdSupport.framework"
#LIBS+="AudioToolbox.framework"
#LIBS+="AVFoundation.framework"
#LIBS+="CoreImage.framework"
#LIBS+="CoreGraphics.framework"
#LIBS+="CoreMedia.framework"
#LIBS+="CoreText.framework"
#LIBS+="CoreVideo.framework"
#LIBS+="Foundation.framework"
#LIBS+="MediaPlayer.framework"
#LIBS+="MessageUI.framework"
#LIBS+="OpenGLES.framework"
#LIBS+="QuartzCore.framework"
#LIBS+="Social.framework"
#LIBS+="Security.framework"
#LIBS+="SystemConfiguration.framework"
#LIBS+="Twitter.framework"
#LIBS+="UIKit.framework"

#else
#Error "The Kamcord module is only available on the iOS target"
#end

#KAMCORD_DEV_KEY = ""
#KAMCORD_DEV_SECRET = ""
#KAMCORD_APP_NAME = ""

Public
Class Kamcord Extends KamcordMonkeyGlue

	Function GetInstance:Kamcord()
		If Not instance
			instance = new Kamcord()
		EndIf
		Return instance
	End

	Private
	Global instance:Kamcord

    Method New()
		Init()
    End

End