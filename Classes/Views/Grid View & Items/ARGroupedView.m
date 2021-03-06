#import "ARGroupedView.h"


@implementation ARGroupedView

- (void)drawRect:(CGRect)rect
{
    CGContextRef context = UIGraphicsGetCurrentContext();
    [[UIColor whiteColor] setFill];
    CGContextFillRect(context, rect);

    CGContextSetLineWidth(context, [[UIScreen mainScreen] scale] * 4);
    CGContextSetStrokeColorWithColor(context, [UIColor artsyGrayLight].CGColor);

    // left
    CGContextMoveToPoint(context, 0, 0);
    CGContextAddLineToPoint(context, 0, CGRectGetHeight(rect));

    // bottom
    CGContextAddLineToPoint(context, CGRectGetWidth(rect), CGRectGetHeight(rect));

    // right
    CGContextAddLineToPoint(context, CGRectGetWidth(rect), 0);

    // top
    if (_isTopCell) {
        CGContextAddLineToPoint(context, 0, 0);
    }

    CGContextStrokePath(context);
}

@end
