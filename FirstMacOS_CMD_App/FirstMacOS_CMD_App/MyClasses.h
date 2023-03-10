//
//  MyClasses.h
//  FirstMacOS_CMD_App
//
//  Created by Vibas on 10/03/23.
//

#ifndef MyClasses_h
#define MyClasses_h


#endif /* MyClasses_h */

@interface Calculator : NSObject
-(int) Add:(int)num1 secondNum:(int)num2;
-(int) Subtract : (int) num1 secondNum : (int) num2;
-(int) Multiply : (int) num1 secondNum : (int) num2;
-(int) Divide : (int) num1 secondNum : (int) num2;
-(void) Test;
@end

@interface LoopTest : NSObject
-(void) ForLoop;
-(void) WhileLoop;
-(void) DoWhileLoop;
-(void) NestedLoop;
@end