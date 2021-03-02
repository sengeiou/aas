//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, UIViewController, UIWindow;

@interface SIPWindow : NSObject
{
    _Bool _running;
    _Bool _enablespeaker;
    _Bool _mutemicphone;
    NSTimer *_iterateTimer;
    UIWindow *_boardWindow;
    UIImageView *_viewBackground;
    UIView *_viewTitlebar;
    UIView *_viewToolbar;
    UIImageView *_imageViewSignal;
    UILabel *_labelBandwidth;
    UIButton *_btnZoomVideo;
    UIButton *_btn0;
    UIButton *_btn1;
    UIButton *_btn2;
    UIButton *_btn3;
    UIButton *_btn4;
    UIButton *_btn5;
    UIButton *_btn6;
    UIButton *_btn7;
    UIButton *_btn8;
    UIButton *_btn9;
    UIButton *_btnStar;
    UIButton *_btnSharp;
    UIButton *_btnSpeaker;
    UIButton *_btnHangup;
    UIButton *_btnMute;
    UILabel *_timeView;
    UIViewController *_rootViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    long long _timeBegin;
    struct CGPoint _centerOfScreen;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint centerOfScreen; // @synthesize centerOfScreen=_centerOfScreen;
@property(nonatomic) long long timeBegin; // @synthesize timeBegin=_timeBegin;
@property(nonatomic) _Bool mutemicphone; // @synthesize mutemicphone=_mutemicphone;
@property(nonatomic) _Bool enablespeaker; // @synthesize enablespeaker=_enablespeaker;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) UILabel *timeView; // @synthesize timeView=_timeView;
@property(retain, nonatomic) UIButton *btnMute; // @synthesize btnMute=_btnMute;
@property(retain, nonatomic) UIButton *btnHangup; // @synthesize btnHangup=_btnHangup;
@property(retain, nonatomic) UIButton *btnSpeaker; // @synthesize btnSpeaker=_btnSpeaker;
@property(retain, nonatomic) UIButton *btnSharp; // @synthesize btnSharp=_btnSharp;
@property(retain, nonatomic) UIButton *btnStar; // @synthesize btnStar=_btnStar;
@property(retain, nonatomic) UIButton *btn9; // @synthesize btn9=_btn9;
@property(retain, nonatomic) UIButton *btn8; // @synthesize btn8=_btn8;
@property(retain, nonatomic) UIButton *btn7; // @synthesize btn7=_btn7;
@property(retain, nonatomic) UIButton *btn6; // @synthesize btn6=_btn6;
@property(retain, nonatomic) UIButton *btn5; // @synthesize btn5=_btn5;
@property(retain, nonatomic) UIButton *btn4; // @synthesize btn4=_btn4;
@property(retain, nonatomic) UIButton *btn3; // @synthesize btn3=_btn3;
@property(retain, nonatomic) UIButton *btn2; // @synthesize btn2=_btn2;
@property(retain, nonatomic) UIButton *btn1; // @synthesize btn1=_btn1;
@property(retain, nonatomic) UIButton *btn0; // @synthesize btn0=_btn0;
@property(retain, nonatomic) UIButton *btnZoomVideo; // @synthesize btnZoomVideo=_btnZoomVideo;
@property(retain, nonatomic) UILabel *labelBandwidth; // @synthesize labelBandwidth=_labelBandwidth;
@property(retain, nonatomic) UIImageView *imageViewSignal; // @synthesize imageViewSignal=_imageViewSignal;
@property(retain, nonatomic) UIView *viewToolbar; // @synthesize viewToolbar=_viewToolbar;
@property(retain, nonatomic) UIView *viewTitlebar; // @synthesize viewTitlebar=_viewTitlebar;
@property(retain, nonatomic) UIImageView *viewBackground; // @synthesize viewBackground=_viewBackground;
@property(retain, nonatomic) UIWindow *boardWindow; // @synthesize boardWindow=_boardWindow;
@property(retain, nonatomic) NSTimer *iterateTimer; // @synthesize iterateTimer=_iterateTimer;
- (void)stopRunning;
- (void)iterate;
- (void)startRunning;
- (void)updateOrientation;
- (void)updateStatInfo:(id)arg1;
- (void)updateSpeaker;
- (void)zoomInWindow;
- (void)zoomOutWindow;
- (void)hideWindow;
- (void)showWindow;
- (void)proximityStateDidChange;
- (void)stopPreview;
- (void)buttonAction:(id)arg1;
- (void)tapView:(id)arg1;
- (void)panView:(id)arg1;
- (void)createTitlebar;
- (void)createToolbar;
- (struct CGPoint)getScreenCenter;
- (struct CGRect)getScreenRect;
- (float)getScreenHeight;
- (float)getScreenWidth;
- (id)init;

@end

