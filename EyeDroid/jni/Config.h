/*
 * Config.h
 */

#ifndef CONFIG_H_
#define CONFIG_H_

namespace IMGP {

/*
 * Configuration file for all the image processing methods.
 * These values can be accessed from java at runtime to change the
 * configuration.
 */

class Config {
private:

protected:

public:

	class ErodeDilate{
	public:
		 volatile static int BEFORE_THRESHOLD_ERODE;
		 volatile static int BEFORE_THRESHOLD_DILATE;
		 volatile static int AFTER_THRESHOLD_ERODE;
		 volatile static int AFTER_THRESHOLD_DILATE;
	};

	class PupilROI{
	public:
		volatile static int DIAMETER_FACTOR;
		volatile static int ROI_CONSTANT_X;
		volatile static int ROI_CONSTANT_Y;
		volatile static int ROI_CONSTANT_W;
		volatile static int ROI_CONSTANT_H;
		volatile static int ROI_PUPIL_FOUND_W;
		volatile static int ROI_PUPIL_FOUND_H;
		volatile static bool DYNAMIC_ROI_ENABLED;
	};

	class Thresshold{
	public:
		volatile static int LOWER_LIMIT;
	};

	class BlobDetection{
	public:
		volatile static int MIN_NEIGHBOR_DISTANCE_FACTOR;
		volatile static int MIN_BLOB_SIZE;
		volatile static int MAX_BLOB_SIZE;
		volatile static int UPPER_THRESHOLD;
		volatile static int THRESHOLD_CENTER;
		volatile static int SCALE_FACTOR;
	};

};
/*end of class Config.h*/

}

#endif /* CONFIG_H_ */
