//  SDLSmartDeviceLinkV2ProtocolHeader.h
//


#import "SDLProtocolHeader.h"

@interface SDLV2ProtocolHeader : SDLProtocolHeader

@property (assign) UInt32 messageID;

- (instancetype)init;
- (instancetype)copyWithZone:(NSZone *)zone;
- (NSData *)data;
- (void)parse:(NSData *)data;
- (NSString *)description;

@end
