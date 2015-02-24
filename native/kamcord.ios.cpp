#import <Kamcord/Kamcord.h>

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

class KamcordMonkeyGlue : public Object {

public:

    void Init();
    void StartRecording();
    void StopRecording();
    void Pause();
    void Resume();
    void ShowView();
    void ShowWatchView();
    bool IsEnabled();

    void SetFacebookAppID(String appID, bool sharedAuth);
    void SetVideoFPS(int fps);
    void SetVideoTitle(String title);
    void SetLevelAndScore(String level, int score);

    void SetDefaultTweet(String tweet);
    void SetTwitterDescription(String description);
    void SetFacebookDescription(String description);
    void SetDefaultEmailSubject(String subject);
    void SetDefaultEmailBody(String body);
    void SetYouTubeDescription(String description, String tags);

    void SetNotificationsEnabled(bool enabled);
    void FireTestNotification();
};

void KamcordMonkeyGlue::Init() {
    BBMonkeyAppDelegate *appDelegate=(BBMonkeyAppDelegate*)[[UIApplication sharedApplication] delegate];

    // Tell Kamcord your developer key, secret, app name,
    // and the parent view controller that will present the Kamcord UI.
    [Kamcord setDeveloperKey:@TOSTRING(CFG_KAMCORD_DEV_KEY)
             developerSecret:@TOSTRING(CFG_KAMCORD_DEV_SECRET)
                     appName:@TOSTRING(CFG_KAMCORD_APP_NAME)
    parentViewController:appDelegate->viewController];

    [Kamcord setVoiceOverlayEnabled:NO]; // not supported at this time
}

void KamcordMonkeyGlue::StartRecording() {
    [Kamcord startRecording];
}

void KamcordMonkeyGlue::StopRecording() {
    [Kamcord stopRecording];
}

void KamcordMonkeyGlue::Pause() {
    [Kamcord pause];
}

void KamcordMonkeyGlue::Resume() {
    [Kamcord resume];
}

void KamcordMonkeyGlue::ShowView() {
    [Kamcord showView];
}

void KamcordMonkeyGlue::ShowWatchView() {
    [Kamcord showWatchView];
}

bool KamcordMonkeyGlue::IsEnabled() {
    return [Kamcord isEnabled];
}

void KamcordMonkeyGlue::SetFacebookAppID(String appID, bool sharedAuth) {
    [Kamcord setFacebookAppID:appID.ToNSString() sharedAuth:sharedAuth];
}

void KamcordMonkeyGlue::SetVideoFPS(int fps) {
    [Kamcord setVideoFPS:fps];
}

void KamcordMonkeyGlue::SetVideoTitle(String title) {
    [Kamcord setVideoTitle:title.ToNSString()];
}

void KamcordMonkeyGlue::SetLevelAndScore(String level, int score) {
    [Kamcord setLevel:level.ToNSString() score:[NSNumber numberWithInt:score]];
}

void KamcordMonkeyGlue::SetDefaultTweet(String tweet) {
    [Kamcord setDefaultTweet:tweet.ToNSString()];
}
void KamcordMonkeyGlue::SetTwitterDescription(String description) {
    [Kamcord setTwitterDescription:description.ToNSString()];
}
void KamcordMonkeyGlue::SetFacebookDescription(String description) {
    [Kamcord setFacebookDescription:description.ToNSString()];
}
void KamcordMonkeyGlue::SetDefaultEmailSubject(String subject) {
    [Kamcord setDefaultEmailSubject:subject.ToNSString()];
}
void KamcordMonkeyGlue::SetDefaultEmailBody(String body) {
    [Kamcord setDefaultEmailBody:body.ToNSString()];
}
void KamcordMonkeyGlue::SetYouTubeDescription(String description, String tags) {
    [Kamcord setYouTubeDescription:description.ToNSString() tags:tags.ToNSString()];
}

void KamcordMonkeyGlue::SetNotificationsEnabled(bool enabled) {
    [Kamcord setNotificationsEnabled:enabled];
}
void KamcordMonkeyGlue::FireTestNotification() {
    [Kamcord fireTestNotification];
}
