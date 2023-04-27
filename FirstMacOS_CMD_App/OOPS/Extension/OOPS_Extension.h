//
//  OOPS_Extension.h
//  FirstMacOS_CMD_App
//
//  Created by Vibas on 27/04/23.
//

#ifndef OOPS_Extension_h
#define OOPS_Extension_h

@interface SampleClass : NSObject
{
   NSString *name;
}

- (void)setInternalID;
- (NSString *)getExternalID;

@end

@interface SampleClass()
{
   NSString *internalID;
}

@end

#endif /* OOPS_Extension_h */
