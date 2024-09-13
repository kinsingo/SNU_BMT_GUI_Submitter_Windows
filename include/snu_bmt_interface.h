#ifndef SNU_BMT_INTERFACE_H
#define SNU_BMT_INTERFACE_H

#ifdef _WIN32 //(.dll)
#define EXPORT_SYMBOL __declspec(dllexport)
#else //Linux(.so) and other operating systems
#define EXPORT_SYMBOL
#endif

#include <iostream>
using namespace std;

// class EXPORT_SYMBOL SNU_BMT_Interface
// {
// public:
//    virtual ~SNU_BMT_Interface(){}
//    virtual bool requiresModelConversion() = 0;
//    virtual string convertModel(const string& model) = 0;
//    virtual string runInference(const string& model, const string& data) = 0;
// };

//240913
//ONNX Model은 Web을 통해 사용자가 직접 다운로드하도록 하고,
//NPU에 맞게 컴파일된 Model을 Load 하는 작업은 main 함수에서 실행하며,
//Load된 Model을 멤버 변수로 저장하여, runInference 함수에서 이를 사용하도록 권장함.
//이렇게 하면 runInference 함수에 Model Loading 시간이 포함되지 않도록 할 수 있음.
class EXPORT_SYMBOL SNU_BMT_Interface
{
public:
   virtual ~SNU_BMT_Interface(){}
   virtual string runInference(const string& data) = 0;
};

#endif // SNU_BMT_INTERFACE_H


