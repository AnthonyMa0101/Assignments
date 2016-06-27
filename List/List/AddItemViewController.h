//
//  AddItemViewController.h
//  List
//
//  Created by Anthony Ma on 2016-06-20.
//  Copyright © 2016 Anthony Ma. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddItemViewControllerDelegate <NSObject>

- (void)didSaveNewTodo:(NSString *)todoText;

@end 

@interface AddItemViewController : UIViewController

@property(nonatomic, strong) id <AddItemViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITextField *textField;

- (IBAction)save:(id)sender;

- (IBAction)cancel:(id)sender;

@end
