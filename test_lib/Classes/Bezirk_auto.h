//
//  Bezirk_auto.h
//  Bezirk_Auto
//
//  Created by Pavithra on 01/12/16.
//

#import <Foundation/Foundation.h>

typedef enum
{
    rpm = 0,
    speed,
    temperature,
} Command;

@interface Bezirk_auto : NSObject

@property (nonatomic,strong) id delegate;

-(void) initBezirkAuto;

@end
