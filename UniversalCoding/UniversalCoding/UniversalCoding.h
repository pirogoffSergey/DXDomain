//
//  UniversalCoding.h
//  UniversalCoding
//
//  Created by Maks on 19.06.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/objc-runtime.h>

@interface UniversalCoding : NSObject <NSCoding>

- (NSDictionary*)getPropertys:(id) object;
- (NSDictionary*)getIvars:(id) object;

- (void)encodeWithCoder:(NSCoder*)encoder; 
- (id) initWithCoder:(NSCoder*)decoder;

@end
