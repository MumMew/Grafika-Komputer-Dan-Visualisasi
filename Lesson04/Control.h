#include "RenderEngine.h"
#include <glm/glm.hpp>

class Control :
	public RenderEngine
{
public:
	Control();
	~Control();
private:
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	virtual void ProcessInput(GLFWwindow *window);
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

