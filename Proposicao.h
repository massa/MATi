//
//  Proposicao.h
//  MATi
//
//  Created by Humberto Massa on 09/06/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Proposicao : NSObject {
	NSString* type;
	NSString* number;
	NSString* year;
	NSString* desc;
}

@property(nonatomic, copy) NSString* type;
@property(nonatomic, copy) NSString* number;
@property(nonatomic, copy) NSString* year;
@property(nonatomic, copy) NSString* desc;

- (id)initWithType:(NSString*) t number:(NSString*) n year:(NSString*) y desc:(NSString*) d;

@end
