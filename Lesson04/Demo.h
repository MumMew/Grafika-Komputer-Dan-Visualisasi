#pragma once
#include "RenderEngine.h"
#include "Triangle.h"
#include "Control.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, VBO3, VAO3, EBO3, VBO4, VAO4, EBO4,
		VBO5, VAO5, EBO5, VBO6, VAO6, EBO6, VBO7, VAO7, EBO7, VBO8, VAO8, EBO8, texture2,texture3,texture4,texture5,texture6, texture7, texture8;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	float angle = 0;
	void BuildTrianglePrism();
	void BuildWheel();
	void BuildColoredPlane();
	void BuildUpperSky();
	void BuildScenery();
	void BuildSpinner();
	void BuildBoat();
	void BuildBoatPillar();
	void DrawTrianglePrism();
	void DrawWheel();
	void DrawColoredPlane();
	void DrawUpperSky();
	void DrawScenery();
	void DrawSpinner();
	void DrawBoat();
	void DrawBoatPillar();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

