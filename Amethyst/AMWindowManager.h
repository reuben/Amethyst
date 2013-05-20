//
//  AMWindowManager.h
//  Amethyst
//
//  Created by Ian on 5/16/13.
//  Copyright (c) 2013 Ian Ynda-Hummel. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AMWindowManager : NSObject

// Cycles the current layout being used in the focused window's screen.
- (void)cycleLayout;

// Move the current focused window to the screen at screenIndex.
// Screens are ordered from left to right along the x-axis, with 1 being the left-most screen.
// This method is a no-op if there is no screen at the supplied index.
- (void)throwToScreenAtIndex:(NSUInteger)screenIndex;

- (void)shrinkMainPane;
- (void)expandMainPane;

@end
