//
//  MyFlashLabsClass.h
//  overrideNative
//
//  Created by Hadi Tavakoli on 2/12/17.
//  Copyright © 2019 MyFlashLabs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FlashRuntimeExtensions.h"
//#import <UserNotifications/UserNotifications.h>
#import <UIKit/UIKit.h>

@interface MyFlashLabsClass : NSObject

@property(strong, nonatomic) id MyFlashLabsClass;

+(MyFlashLabsClass*)sharedInstance;

-(void)saveAneLabId:(NSString*)value;
-(void)addANE:(NSString*)theId version:(NSString*)v;
-(BOOL)hasAnyDemoAne;
-(BOOL)isAneRegistered:(NSString*)theId;

-(void)saveMyflashlabDebugger:(BOOL)value;
-(void)saveContext:(FREContext)value;
-(void)toTrace:(NSString*)ane className:(NSString*)className msg:(NSString*)msg;

-(NSString*)retriveCommandNotFound;

// setter - getter
-(void)saveShortcutItem:(UIApplicationShortcutItem*)shortcutItem;
-(UIApplicationShortcutItem*)retriveShortcutItem;
-(void)saveApplication:(UIApplication*)app;
-(UIApplication*)retriveApplication;
-(void)saveLaunchingOptions:(NSDictionary*)value;
-(NSDictionary*)retriveLaunchingOptions;
-(void)saveUserActivity:(NSUserActivity*)value;
-(NSUserActivity*)retriveUserActivity;
-(void)saveUserActivityType:(NSString*)value;
-(NSString*)retriveUserActivityType;
-(void)saveError:(NSError*)value;
-(NSError*)retriveError;
-(void)saveLocalNotification:(UILocalNotification*)value;
-(UILocalNotification*)retriveLocalNotification;
-(void)saveDeviceToken:(NSData*)value;
-(NSData*)retriveDeviceToken;
-(void)saveUserNotificationSettings:(UIUserNotificationSettings*)value;
-(UIUserNotificationSettings*)retriveUserNotificationSettings;
-(void)saveUserInfo:(NSDictionary*)value;
-(NSDictionary*)retriveUserInfo;
-(void)saveOldFrame:(CGRect)value;
-(CGRect)retriveOldFrame;
-(void)saveNewFrame:(CGRect)value;
-(CGRect)retriveNewFrame;
-(void)saveOldOrientation:(UIInterfaceOrientation)value;
-(UIInterfaceOrientation)retriveOldOrientation;
-(void)saveNewOrientation:(UIInterfaceOrientation)value;
-(UIInterfaceOrientation)retriveNewOrientation;
-(void)saveDuration:(NSTimeInterval)value;
-(NSTimeInterval)retriveDuration;
-(void)saveUrl:(NSURL*)value;
-(NSURL*)retriveUrl;
-(void)saveOpenUrlOptions:(NSDictionary<UIApplicationOpenURLOptionsKey, id>*)value;
-(NSDictionary<UIApplicationOpenURLOptionsKey, id>*)retriveOpenUrlOptions;
-(void)saveSourceApplication:(NSString*)value;
-(NSString*)retriveSourceApplication;
-(void)saveAnnotation:(id)value;
-(id)retriveAnnotation;
//-(void)saveUserNotificationCenter:(UNUserNotificationCenter*)center;
//-(UNUserNotificationCenter*)retriveUserNotificationCenter;
//-(void)saveNotification:(UNNotification*)notification;
//-(UNNotification*)retriveNotification;
//-(void)saveNotificationResponse:(UNNotificationResponse*)response;
//-(UNNotificationResponse*)retriveNotificationResponse;


// conversions
+(double)AirToIos_Double:(FREObject)value;
+(int)AirToIos_Integer:(FREObject)value;
+(uint)AirToIos_Uint:(FREObject)value;
+(NSString*)AirToIos_String:(FREObject)value;
+(BOOL)AirToIos_Boolean:(FREObject)value;
+(NSDictionary*)AirToIos_Dictionary:(FREObject)value;
+(NSArray*)AirToIos_Array:(FREObject)value;
+(UIImage*)AirToIos_Bitmap:(FREObject)value;
+(FREObject)IosToAir_Double:(double)value;
+(FREObject)IosToAir_Integer:(int)value;
+(FREObject)IosToAir_Uint:(uint)value;
+(FREObject)IosToAir_String:(NSString*)value;
+(FREObject)IosToAir_Boolean:(BOOL)value;
+(FREObject)IosToAir_Dictionary:(NSMutableDictionary*)value;
+(FREObject)IosToAir_Array:(NSMutableArray*)value;
+(FREObject)IosToAir_Bitmap:(UIImage*)value withTargetBitmap:(FREObject)targetBitmap;

+(UIColor *)colorFromHexString:(NSString*)hexString;

@end
