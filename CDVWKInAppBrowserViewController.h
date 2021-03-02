//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CDVScreenOrientationDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKScriptMessageHandler.h"
#import "WKUIDelegate.h"

@class CDVInAppBrowserOptions, CDVWKInAppBrowser, CDVWKInAppBrowserUIDelegate, NSDictionary, NSString, NSURL, UIActivityIndicatorView, UIBarButtonItem, UILabel, UIToolbar, WKWebView, WKWebViewConfiguration;

@interface CDVWKInAppBrowserViewController : UIViewController <CDVScreenOrientationDelegate, WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler>
{
    CDVInAppBrowserOptions *_browserOptions;
    NSDictionary *_settings;
    NSURL *currentURL;
    WKWebView *_webView;
    WKWebViewConfiguration *_configuration;
    UIBarButtonItem *_closeButton;
    UILabel *_addressLabel;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_forwardButton;
    UIActivityIndicatorView *_spinner;
    UIToolbar *_toolbar;
    CDVWKInAppBrowserUIDelegate *_webViewUIDelegate;
    id <CDVScreenOrientationDelegate> _orientationDelegate;
    CDVWKInAppBrowser *_navigationDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak CDVWKInAppBrowser *navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak id <CDVScreenOrientationDelegate> orientationDelegate; // @synthesize orientationDelegate=_orientationDelegate;
@property(retain, nonatomic) CDVWKInAppBrowserUIDelegate *webViewUIDelegate; // @synthesize webViewUIDelegate=_webViewUIDelegate;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIBarButtonItem *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(retain, nonatomic) UIBarButtonItem *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UIBarButtonItem *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) WKWebViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSURL *currentURL; // @synthesize currentURL;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 failedNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (id)colorFromHexString:(id)arg1;
- (void)rePositionViews;
- (float)getStatusBarOffset;
- (void)viewWillAppear:(_Bool)arg1;
- (void)goForward:(id)arg1;
- (void)goBack:(id)arg1;
- (void)navigateTo:(id)arg1;
- (void)close;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)showToolBar:(_Bool)arg1:(id)arg2;
- (void)showLocationBar:(_Bool)arg1;
- (void)setCloseButtonTitle:(id)arg1:(id)arg2:(int)arg3;
- (void)setWebViewFrame:(struct CGRect)arg1;
- (id)settingForKey:(id)arg1;
- (void)createViews;
- (void)dealloc;
- (id)initWithBrowserOptions:(id)arg1 andSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

