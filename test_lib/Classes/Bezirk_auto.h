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


@property (nonatomic,strong) id delegate;

-(void) initBezirkAuto;

@end
