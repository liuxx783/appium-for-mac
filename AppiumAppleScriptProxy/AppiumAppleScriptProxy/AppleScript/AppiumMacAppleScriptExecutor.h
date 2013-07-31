//
//  AppiumMacAppleScriptLibrary.h
//  AppiumAppleScriptProxy
//
//  Created by Dan Cuellar on 7/28/13.
//  Copyright (c) 2013 Appium. All rights reserved.
//

#import "AppiumMacHTTPJSONResponse.h"
#import "Finder.h"
#import "SystemEvents.h"

@interface AppiumMacAppleScriptExecutor : AppiumMacHTTPJSONResponse

@property NSString *currentApplicationName;
@property NSString *currentProcessName;
@property FinderApplication *finder;
@property SystemEventsApplication *systemEvents;

-(void) activateApplication:(NSString*)applicationName;
-(NSArray*) allProcesses;
-(NSString*) applicationForProcessName:(NSString*)processName;
-(void) clickElement:(SystemEventsUIElement*)element;
-(SystemEventsUIElement*) elementByName:(NSString*)name baseElement:(SystemEventsUIElement*)baseElement;
-(NSString*) frontmostApplicationName;
-(NSString*) frontmostProcessName;
-(NSDictionary*) pageSource;
-(int) pidForProcess:(NSString*)processName;
-(NSString*) processForApplication:(NSString*) applicationName;
-(void) selectElement:(SystemEventsUIElement*)element;
-(void) sendKeys:(NSString*)keys;
-(void) sendKeys:(NSString*)keys toElement:(SystemEventsUIElement*)element;

@end