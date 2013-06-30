//
//  KxMovieController.h
//  kxmovie
//
//  Created by Jesse White on 13-06-14.

#import <Foundation/Foundation.h>
#import "KxMovieRenderer.h"

@interface KxMovieController : NSObject

+ (id) movieControllerWithContentPath: (NSString *) path
                             renderer: (NSObject<KxMovieRenderer>*) renderer
                           parameters: (NSDictionary *) parameters;

@property (readonly) BOOL playing;

- (void) play;
- (void) pause;
- (BOOL) ready;

@end
