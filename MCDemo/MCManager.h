//
//  MCManager.h
//  MCDemo
//
//  Created by LIMENG on 6/10/16.
//  Copyright © 2016 LIMENG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>

@interface MCManager : NSObject <MCSessionDelegate>

@property (nonatomic, strong) MCPeerID *peerID;
@property (nonatomic, strong) MCSession *session;
@property (nonatomic, strong) MCBrowserViewController *browser;
@property (nonatomic, strong) MCAdvertiserAssistant *advertiser;

- (void)setupPeerAndSessionWithDisplayeName:(NSString *)displayName;
- (void)setupMcBrowser;
- (void)advertiseSelf:(BOOL)shouldAdvertise;

@end
