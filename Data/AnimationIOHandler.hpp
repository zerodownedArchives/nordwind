#ifndef ANIMATIONIOHANDLER_HPP
#define ANIMATIONIOHANDLER_HPP

#include "ImageIOHandler.hpp"
#include <qvector.h>
#include <qrect.h>
#include <qcolor.h>

class AnimationIOHandler : public ImageIOHandler
{
    public:
    AnimationIOHandler(QIODevice* decive);
    ~AnimationIOHandler();
    virtual bool read(QImage *image);
	virtual bool canRead() const;
    virtual int currentImageNumber() const;
    virtual QRect	currentImageRect () const;
    virtual int imageCount() const;
    virtual bool jumpToImage(int imageNumber);
    virtual bool jumpToNextImage();
    virtual int loopCount() const;
    virtual int nextImageDelay() const;
    virtual QVariant option(QImageIOHandler::ImageOption option) const;
    virtual bool supportsOption(QImageIOHandler::ImageOption option) const;

    private:
    	int mImageCount;
    	int mCurrentImageNumber;
    	QVector<QRgb> mColorTable;
    	QRect mCurrentImageRect;
    	QVector<qint32> mImageOffset;
    	static int sNextImageDelay;
};

#endif // ANIMATIONIOHANDLER_HPP
