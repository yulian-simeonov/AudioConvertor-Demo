/*
        File: iPhoneExtAudioFileConvertTest.h
    Abstract: The application delegate.
     Version: 1.2.1
    
    Copyright (C) 2014 Yulian. All Rights Reserved.
    
*/
 
#import <UIKit/UIKit.h>
#import <libkern/OSAtomic.h>

#import "MyViewController.h"

@interface ExtAudioFileConvertAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    
    IBOutlet UINavigationController	*navigationController;
	IBOutlet MyViewController		*myViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow               *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;
@property (nonatomic, retain) IBOutlet MyViewController       *myViewController;

@end

