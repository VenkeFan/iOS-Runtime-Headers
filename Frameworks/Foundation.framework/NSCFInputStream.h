/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFInputStream : NSInputStream

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(int (*)arg2 context:(struct { int x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (BOOL)allowsWeakReference;
- (void)close;
- (id)delegate;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned int*)arg2;
- (BOOL)hasBytesAvailable;
- (unsigned int)hash;
- (id)initWithData:(id)arg1;
- (id)initWithFileAtPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (oneway void)release;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)retain;
- (unsigned int)retainCount;
- (BOOL)retainWeakReference;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned int)streamStatus;

@end
