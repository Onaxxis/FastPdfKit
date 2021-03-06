//
//  MFDocumentViewControllerDelegate.h
//  FastPDFKitTest
//
//  Created by Nicolò Tosi on 8/19/10.
//  Copyright 2010 MobFarm S.r.l. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Stuff.h"
@class MFDocumentViewController;

@protocol MFDocumentViewControllerDelegate

@optional

-(void)documentViewController:(MFDocumentViewController *)dvc didChangeDirectionTo:(MFDocumentDirection)direction;

/**
 This method will be called to notify the transition to a new page. Use this to update page number related UI's elements or synchronize selected actions.
 */
-(void)documentViewController:(MFDocumentViewController *)dvc didGoToPage:(NSUInteger)page;

/**
 This method will notify a change in the lead used to present the document.
 */
-(void)documentViewController:(MFDocumentViewController *)dvc didChangeLeadTo:(MFDocumentLead)lead;

/**
 This method will notify a change in the mode of the document, either esplicit or automatic.
 */
-(void)documentViewController:(MFDocumentViewController *)dvc didChangeModeTo:(MFDocumentMode)mode automatic:(BOOL)automatically;

/**
 This method will notify a change in the direction used to present the document.
 */
-(void)documentViewController:(MFDocumentViewController *)dvc didChangeDirectionTo:(MFDocumentDirection)direction;

/**
 This method will notify if the user has tapped the screen on a specified page. Page is 0 if the tap has landed outside of a page boundaries, while point is in page coordinates space.
 */
-(void)documentViewControllerDidReceiveTap:(MFDocumentViewController *)dvc onPage:(NSUInteger)page atPoint:(CGPoint)point;

/**
 This method will notify if the user has tapped the document view at a point different from a document element, like an annotation.
 */
-(void)documentViewController:(MFDocumentViewController *)dvc didReceiveTapAtPoint:(CGPoint)point;

/**
 This method will notify if the user has tapped on a annotation with a remote uri action. This is usually invoked when an external
 link is activated and an internet browser should be open to show the link's content.
 */
-(void)documentViewController:(MFDocumentViewController *)dvc didReceiveURIRequest:(NSString *)uri;

/**
 This method will notify if and where the user has tapped on a page bounds. Coordinates of the point are in document's user space. 
 */
-(void)documentViewController:(MFDocumentViewController *)dvc didReceiveTapOnPage:(NSUInteger)page atPoint:(CGPoint)point;

/**
 This method will be called right before displaying a high definition version of the current page.
 */
-(void)documentViewController:(MFDocumentViewController *)dvc willFocusOnPage:(NSUInteger)page;

/**
 This method will be called upon the showing up of the high definition version of the current page.
 */
-(void)documentViewController:(MFDocumentViewController *)dvc didFocusOnPage:(NSUInteger)page;

/**
 This method will be called when the high definition version of the page is removed from the view.
 */
-(void)documentViewControllerDidUnfocus:(MFDocumentViewController *)dvc;

@end
