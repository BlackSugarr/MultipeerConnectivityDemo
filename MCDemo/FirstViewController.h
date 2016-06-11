//
//  FirstViewController.h
//  MCDemo
//
//  Created by LIMENG on 6/10/16.
//  Copyright © 2016 LIMENG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *txtMessage;
@property (weak, nonatomic) IBOutlet UITextView *tvChat;

- (IBAction)sendMessage:(id)sender;
- (IBAction)cancelMessage:(id)sender;
@end

