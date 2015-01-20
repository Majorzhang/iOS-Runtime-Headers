/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSArray, NSAttributedString;

@interface CKComposition : NSObject {
    NSAttributedString *_subject;
    NSAttributedString *_text;
}

@property(getter=isExpirableComposition,readonly) bool expirableComposition;
@property(readonly) bool hasContent;
@property(readonly) bool hasNonwhiteSpaceContent;
@property(retain,readonly) NSArray * mediaObjects;
@property(retain,readonly) NSArray * pasteboardItems;
@property(getter=isSaveable,readonly) bool saveable;
@property(getter=isSendAnimated,readonly) bool sendAnimated;
@property(copy) NSAttributedString * subject;
@property(copy) NSAttributedString * text;
@property(getter=isTextOnly,readonly) bool textOnly;

+ (id)audioCompositionWithMediaObject:(id)arg1;
+ (id)composition;
+ (id)compositionForMessageParts:(id)arg1 preserveSubject:(bool)arg2;
+ (id)compositionWithMediaObject:(id)arg1 subject:(id)arg2;
+ (id)compositionWithMediaObjects:(id)arg1 subject:(id)arg2;
+ (void)deleteCompositionWithGUID:(id)arg1;
+ (id)expirableCompositionWithMediaObject:(id)arg1;
+ (id)photoPickerCompositionWithMediaObject:(id)arg1;
+ (id)photoPickerCompositionWithMediaObjects:(id)arg1;
+ (id)quickImageCompositionWithMediaObject:(id)arg1;
+ (id)savedCompositionForGUID:(id)arg1;

- (id)compositionByAppendingComposition:(id)arg1;
- (id)compositionByAppendingMediaObject:(id)arg1;
- (id)compositionByAppendingMediaObjects:(id)arg1;
- (id)compositionByAppendingText:(id)arg1;
- (id)compositionByReplacingMediaObject:(id)arg1 withMediaObject:(id)arg2;
- (void)dealloc;
- (id)description;
- (bool)hasContent;
- (bool)hasNonwhiteSpaceContent;
- (id)initWithText:(id)arg1 subject:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isExpirableComposition;
- (bool)isSaveable;
- (bool)isSendAnimated;
- (bool)isTextOnly;
- (id)mediaObjects;
- (id)messageWithGUID:(id)arg1;
- (id)pasteboardItems;
- (void)saveCompositionWithGUID:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setText:(id)arg1;
- (id)subject;
- (id)superFormatSubject;
- (id)superFormatText:(id*)arg1;
- (id)text;

@end