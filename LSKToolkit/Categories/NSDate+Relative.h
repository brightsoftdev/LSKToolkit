//
//  NSDate+Relative.h
//  aizheke
//
//  Created by Luosky on 12-7-11.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Relative)

-(NSString*) timeIntervalFromNowInChinese;
-(NSString*) futureTimeIntervalFromNowInChinese;
-(NSString*) timeDistanceFromNowInChinese;

@end
