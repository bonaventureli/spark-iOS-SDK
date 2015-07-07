//
//  SecondViewController.h
//  Spark-sdk-demo
//
//  Created by Tomer Har Yoffi on 6/25/15.
//  Copyright (c) 2015 Tomer Har Yoffi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SecondViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    UIImage * _selecteImage;
    NSData * _fileData;
    NSString * _filePath;
}

@property (nonatomic, weak) IBOutlet UITextView * resultTextView;

-(IBAction)selectFile:(id)sender;
-(IBAction)uploadFile:(id)sender;
@end

