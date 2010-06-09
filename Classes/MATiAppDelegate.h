//
//  MATiAppDelegate.h
//  MATi
//
//  Created by Humberto Massa on 09/06/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

@interface MATiAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

