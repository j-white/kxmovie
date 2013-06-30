//
//  KxMovieController.h
//  kxmovie
//
//  Created by Jesse White on 13-06-14.

#import <Foundation/Foundation.h>

@class KxVideoFrame;
@class KxMovieDecoder;

@protocol KxMovieRenderer <NSObject>

- (void) setDecoder: (KxMovieDecoder *) decoder;

- (void) render: (KxVideoFrame *) frame;

@end
