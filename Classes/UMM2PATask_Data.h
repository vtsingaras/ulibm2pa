//
//  UMM2PATask_Data.h
//  ulibm2pa
//
//  Created by Andreas Fink on 02.12.14.
//  Copyright (c) 2016 Andreas Fink
//
// This source is dual licensed either under the GNU GENERAL PUBLIC LICENSE
// Version 3 from 29 June 2007 and other commercial licenses available by
// the author.

#import <ulib/ulib.h>
#import "UMLayerM2PAUserProtocol.h"

@class UMLayerM2PA;

@interface UMM2PATask_Data : UMLayerTask
{
    NSData       *data;
    NSDictionary *ackRequest;
}

@property (readwrite,strong) NSData *data;
@property (readwrite,strong) NSDictionary *ackRequest;


- (UMM2PATask_Data *)initWithReceiver:(UMLayerM2PA *)rx
                               sender:(id<UMLayerM2PAUserProtocol>)tx
                                 data:(NSData *)d
                           ackRequest:(NSDictionary *)ack;
- (void)main;
@end
