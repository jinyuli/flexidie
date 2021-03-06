/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SKPMessage.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface SKPCallEventMessage : SKPMessage {
	int _liveStatus;
	int _callGUID;
	int _duration;
	NSString* _bodyXmlForParsingDuration;
	NSString* _bodyXmlForParsingParticipants;
	NSArray* _participants;
}
@property(retain, nonatomic) NSArray* participants;
@property(readonly, assign, nonatomic) NSString* prettyEventType;
@property(readonly, assign, nonatomic) BOOL incoming;
@property(retain, nonatomic) NSString* bodyXmlForParsingParticipants;
@property(retain, nonatomic) NSString* bodyXmlForParsingDuration;
@property(assign, nonatomic) int duration;
@property(assign, nonatomic) int callGUID;
@property(readonly, assign, nonatomic) int eventType;
@property(assign, nonatomic) int liveStatus;
+(id)keyPathsForValuesAffectingEventType;
+(id)keyPathsForValuesAffectingIncoming;
+(id)keyPathsForValuesAffectingAttributedSummary;
+(id)keyPathsForValuesAffectingParticipants;
+(id)keyPathsForValuesAffectingDuration;
+(id)transformValue:(id)value forKeyPath:(id)keyPath wasTransformed:(BOOL*)transformed;
+(id)propertyMapping;
//-(void).cxx_destruct;
-(id)treeNodeChildObjects;
-(id)debugDescription;
-(id)endLiveMessageOrSelf;
-(int)type;
-(id)attributedSummary;
@end

