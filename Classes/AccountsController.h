#import <UIKit/UIKit.h>
#import "AuthenticationController.h"


@class UserCell;

@interface AccountsController : UITableViewController <AuthenticationControllerDelegate>

@property(nonatomic,weak)IBOutlet UserCell *userCell;

+ (void)saveAccounts:(NSMutableArray *)theAccounts;
- (IBAction)addAccount:(id)sender;

@end