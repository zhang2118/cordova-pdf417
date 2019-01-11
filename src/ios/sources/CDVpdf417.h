//
//  pdf417Plugin.h
//  CDVpdf417
//
//  Created by Jurica Cerovec, Marko Mihovilic on 10/01/13.
//  Copyright (c) 2013 Racuni.hr. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <Cordova/CDV.h>

/**
 * pdf417 plugin class.
 * Responds to JS calls
 */
@interface CDVpdf417 : CDVPlugin

/**
 * Starts the scanning process
 */
- (void)scan:(CDVInvokedUrlCommand*)command;

/**
 * Returns successful recognition 
 */
- (void)returnResultsCancelled:(BOOL)cancelled;

/**
 * Returns error, for example, not supported pdf417
 */
- (void)returnError:(NSString*)message;

@end
