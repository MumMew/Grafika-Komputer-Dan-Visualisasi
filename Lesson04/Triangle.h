#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Triangle :
	public RenderEngine
{
public:
	Triangle();
	~Triangle();
private:
GLuint shaderProgram, VBO3, VAO3, EBO3, texture3;
float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
virtual void Init();
virtual void DeInit();
virtual void Update(double deltaTime);
virtual void Render();
void BuildTrianglePrism();
void DrawTrianglePrism();
};