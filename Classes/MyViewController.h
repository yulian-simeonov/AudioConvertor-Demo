/*
        File: MyViewController.h
    Abstract: The main view controller of this app.
     Version: 1.2.1
    
    Copyright (C) 2014 Yulian. All Rights Reserved.
    
*/

// includes
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>

// helpers
#include "CAXException.h"
#include "CAStreamBasicDescription.h"

@interface MyViewController : UIViewController <AVAudioPlayerDelegate>
{
	IBOutlet UIView                  *instructionsView;
    IBOutlet UIWebView               *webView;
    IBOutlet UIView                  *contentView;
    
    IBOutlet UILabel                 *fileInfo;
    
    IBOutlet UISegmentedControl      *outputFormatSelector;
    IBOutlet UISegmentedControl      *outputSampleRateSelector;
    
    IBOutlet UIButton                *startButton;
    IBOutlet UIActivityIndicatorView *activityIndicator;
	
	UIBarButtonItem                  *flipButton;
	UIBarButtonItem                  *doneButton;
    
    NSString *destinationFilePath;
    CFURLRef sourceURL;
    CFURLRef destinationURL;
    OSType   outputFormat;
    Float64  sampleRate;
}

@property (readonly, nonatomic) IBOutlet UIView                  *instructionsView;
@property (readonly, nonatomic) IBOutlet UIWebView               *webView;
@property (readonly, nonatomic) IBOutlet UIView                  *contentView;
@property (readonly, nonatomic) IBOutlet UISegmentedControl      *outputFormatSelector;
@property (readonly, nonatomic) IBOutlet UISegmentedControl      *outputSampleRateSelector;
@property (readonly, nonatomic) IBOutlet UIButton                *startButton;
@property (readonly, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;

@property (nonatomic, retain) UIBarButtonItem *flipButton;
@property (nonatomic, retain) UIBarButtonItem *doneButton;

- (IBAction)segmentedControllerValueChanged:(id)sender;
- (IBAction)convertButtonPressed:(id)sender;

@end