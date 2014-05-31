//
// Copyright (c) 2011, Joseph A. Roback
// All rights reserved.
//
//  SSHTunnelTesterAppDelegate.h
//  SSHTunnelTester
//
//  Created by Joseph Roback on 9/5/11.
//

#import <Cocoa/Cocoa.h>

@class SSHTunnel;

@interface SSHTunnelTesterAppDelegate : NSObject <NSApplicationDelegate>
{
	NSWindow *__strong window;
	NSTextField *__strong hostname;
	NSTextField *__strong port;
	NSTextField *__strong username;
	NSSecureTextField *__strong password;
	NSMatrix *__strong protocol;
	NSButton *__strong allocatePseudoTTY;
	NSButton *__strong gatewayPorts;
	NSButton *__strong allowsPasswordAuthentication;
	NSButton *__strong allowsPublicKeyAuthentication;
	NSButton *__strong forceIPv4;
	NSButton *__strong forceIPv6;
	NSButton *__strong forceProtocolv1;
	NSButton *__strong forceProtocolv2;
	NSButton *__strong forwardX11;
	NSButton *__strong forwardTrustedX11;
	
	SSHTunnel *sshTunnel;
}

@property (strong) IBOutlet NSWindow *window;
@property (strong) IBOutlet NSTextField *hostname;
@property (strong) IBOutlet NSTextField *port;
@property (strong) IBOutlet NSTextField *username;
@property (strong) IBOutlet NSSecureTextField *password;
@property (strong) IBOutlet NSMatrix *protocol;
@property (strong) IBOutlet NSButton *allocatePseudoTTY;
@property (strong) IBOutlet NSButton *gatewayPorts;
@property (strong) IBOutlet NSButton *allowsPasswordAuthentication;
@property (strong) IBOutlet NSButton *allowsPublicKeyAuthentication;
@property (strong) IBOutlet NSButton *forceIPv4;
@property (strong) IBOutlet NSButton *forceIPv6;
@property (strong) IBOutlet NSButton *forceProtocolv1;
@property (strong) IBOutlet NSButton *forceProtocolv2;
@property (strong) IBOutlet NSButton *forwardX11;
@property (strong) IBOutlet NSButton *forwardTrustedX11;

- (IBAction)launch:(id)sender;
- (IBAction)terminate:(id)sender;
@end
