//
//  Proposicao.m
//  MATi
//
//  Created by Humberto Massa on 09/06/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "Proposicao.h"


@implementation Proposicao

@synthesize type, number, year, desc;

- (id)initWithType:(NSString*) t number:(NSString*) n year:(NSString*) y desc:(NSString*) d {
	self.type = t;
	self.number = n;
	self.year = y;
	self.desc = d;
	return self;
}

@end
