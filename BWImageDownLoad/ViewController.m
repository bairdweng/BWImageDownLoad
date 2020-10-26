//
//  ViewController.m
//  BWImageDownLoad
//
//  Created by bairdweng on 2020/10/23.
//

#import "ViewController.h"
#import "SDWebImage.h"
@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIImageView *testImageView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    // Do any additional setup after loading the view.
}
- (IBAction)ClickOntheLoad:(id)sender {
    [self.testImageView sd_setImageWithURL:[NSURL URLWithString:@"https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1597678593054&di=ebd028b96d0fbd6db683f88dfebaf55b&imgtype=0&src=http%3A%2F%2Fa3.att.hudong.com%2F20%2F56%2F19300001056606131348564606754.jpg"]];
}


@end
