//
//  AppDelegate.h
//  Tado
//
//  Created by Robert Dougan on 17/07/14.
//  Copyright (c) 2014 Robert Dougan. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *loginWindow;
@property (strong, nonatomic) NSStatusItem *temperatureStatusItem;
@property (strong, nonatomic) NSStatusItem *operationStatusItem;
@property (strong, nonatomic) NSStatusItem *heatingStatusItem;

@end
