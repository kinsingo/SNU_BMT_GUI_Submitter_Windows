#ifndef BMT_ENUMS_H
#define BMT_ENUMS_H

enum class SNU_BMT_Dataset
{
    imagenet2012,//Image classification --> resnet50-v1.5
    openimages_resized_to_800x800,//Object Detection --> retinanet 800x800
    squad_1_1,//NLP --> bert
    KiTS19,//3D Medical Image Segmentation --> 3d-unet
};

enum class SNU_BMT_Scenario
{
    SingleStream,
    Offline,
};

enum class SNU_BMT_Task
{
    ImageClassification,
    ObjectDetection,
    NLP,
    Segmentation_3D,
};

#endif // BMT_ENUMS_H
