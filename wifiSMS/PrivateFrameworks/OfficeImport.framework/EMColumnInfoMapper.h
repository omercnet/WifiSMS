/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDColumnInfo;



@interface EMColumnInfoMapper : CMMapper 
{
    EDColumnInfo *edColumnInfo;
    double columnWidth;
    NSInteger columnSpan;
}


- (double)columnWidth;
- (id)initWithEDColumnInfo:(id)arg1 parent:(id)arg2;
- (id)initWithDefaultWidth:(double)arg1 span:(NSInteger)arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
